#include <windows.h>
#include <tchar.h>
#include "SerialClass.h"
#define bt1 1 //boton de cinta
#define bt2 2 //boton de bomba
#define bt3 3 //boton de cierre

HWND ventana1;
HWND boton1;
HWND boton2;
HWND boton3;

Serial*Arduino=new Serial("COM5");

/*Esto es donde van todos los eventos (botones, barras, cuadros, etc.)*/

LRESULT CALLBACK WndProc(HWND ventana1, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		case WM_CREATE:{
			//cuadro = CONTROL "Grupo &1", ID_GROUPBOX1, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE | WS_GROUP, 8, 4, 64, 65;
			//CreateWindowEx(0,"Buttom","Encendido", WS_VISIBLE|WS_CHILD|BS_GROUPBOX|WS_GROUP,10,10,400,35,ventana1,(HMENU)bt5,0,0);
			boton1 = CreateWindowEx(0,"Button","Cinta", WS_VISIBLE|WS_CHILD|BS_PUSHLIKE,15,15,150,25,ventana1,(HMENU)bt1,0,0);
			boton2 = CreateWindowEx(0,"Button","Bomba", WS_VISIBLE|WS_CHILD|BS_PUSHLIKE,15,80,150,25,ventana1,(HMENU)bt2,0,0);
			boton3 = CreateWindowEx(0,"Button","Cerrar", WS_VISIBLE|WS_CHILD|BS_PUSHLIKE,500,380,80,25,ventana1,(HMENU)bt3,0,0);
			break;
		}
		case WM_COMMAND:{
			if (wParam==bt1){
				if (Arduino -> IsConnected()){
					Arduino -> WriteData("1", sizeof("1")-1);			
				}
			}
			if (wParam==bt2){
				if (Arduino -> IsConnected()){
					Arduino -> WriteData("2", sizeof("2")-1);
				}
			}
			if (wParam==bt3){
				PostQuitMessage(0);
				
			}
			break;
		}	
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(ventana1, Message, wParam, lParam);
	}
	return 0;
}


//LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
TCHAR szClassName[] = _T("CodeBlocksWindowsApp"); //esto se puede cambiar por char programa="programa";

/* The 'main' function of Win32 GUI programs: this is where execution starts */

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	
	HWND ventana1; /* A 'HANDLE', hence the H, or a pointer to our WiNDow */
	MSG msg; /* A temporary location for all messages */
	WNDCLASSEX wc; /*propiedades de la estructura de la ventana */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.hInstance	 = hInstance;
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.style		 = CS_DBLCLKS; //|CS_NOCLOSE; //Funcion que hace que la ventana: distinga un click de un doble click | no se pueda cerra
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW); //define el cursor dentro de la ventana
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon (icono del .exe en el explorador de archivos)*/
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon (icono de la ventana)*/
	//wc.lpszMenuName  = NULL; crea un menú arriba como ej. (este programa): archivo edicion, buscar, ver... 
	wc.lpszClassName = "WindowClass";
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW);

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	ventana1 = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","CaO_Qlo",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		350,//CW_USEDEFAULT, /* x */ //posicion donde aparece la ventana
		120,//CW_USEDEFAULT, /* y */
		640, /* width */			//tamaño de ventana
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(ventana1 == NULL) {
		MessageBox(NULL, "Fallo al crear la ventana!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}

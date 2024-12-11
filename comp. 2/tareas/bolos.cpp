#include<iostream>
#include<locale.h>

using namespace std;

class Bolos
{
	private:
    	int ronda,bola,puntuacion,pinos[3];  
	public:
		int puntuacionTotal; 
    	void Inicio();
    	void Tiro();
    	void CaO_Qlo();
};

void Bolos::Inicio()
{
    for (ronda=1;ronda<=10;ronda++)
	{ 
        cout<<ronda<<"° Jugada ";
        cout<<": "<<endl;
        Tiro(); 
        puntuacionTotal+=puntuacion;
        cout<<"Puntaje total: "<< puntuacion<<endl<<endl;
    }
}

void Bolos::Tiro()
{
    puntuacion = 0;
    for (bola=0;bola<3;bola++)
	{
        cout<<"Lanzamiento "<<bola+1<< ": ";
        cin>>pinos[bola];
        puntuacion+=pinos[bola]; 
        CaO_Qlo();
    }
}
void Bolos::CaO_Qlo()
{
    if (pinos[bola]>10) 
	{ 
        cout<<"Ingrese un valor correcto.\n";
        bola--; 
        puntuacion=0; 
    }
    if (bola>0 && pinos[bola-1]+pinos[bola]>10)
	{ 
        cout<<"Ingrese un valor correcto.\n";
        bola--; 
        puntuacion=0; 
    }
    if (pinos[bola]<0)
	{ 
        cout<<"Ingrese un valor correcto.\n";
        bola--; 
        puntuacion=0; 
    }
	if ((bola==1) && (pinos[bola-1]+pinos[bola]==10))
	{ 
        cout<<"SPARE"<<endl;
        bola++;
    }
	if (pinos[bola]==10) 
	{ 
        cout<<"¡¡CHUZA!!"<<endl;
        bola++;
    }
    if (ronda!=10 && bola==1){
     	bola++;
	}
}

int main() 
{
	setlocale(LC_ALL,"");
    Bolos juego=Bolos(); 
    juego.Inicio();
    cout<<"Puntaje total en todo el juego: "<<juego.puntuacionTotal<<endl;

    system("pause"); 
    return 0;
}


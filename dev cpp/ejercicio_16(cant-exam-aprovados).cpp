#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	float e1,e2,e3;
	int todos=0,uno=0,ultimo=0;
	setlocale(LC_ALL,"");
	
	for(int i=1;i<=5;i++){
		cout<<"notas del alumno "<<i;
		cout<<"\nEx�men 1: ";cin>>e1;
		cout<<"\nEx�men 2: ";cin>>e2;
		cout<<"\nEx�men 3: ";cin>>e3;
		cout<<"\n";
		
		if((e1>10)&&(e2>10)&&(e3>10)){
			todos++;
		}
		if((e1>10)||(e2>10)||(e3>10)){
			uno++;
		}
		if((e1<10)&&(e2<10)&&(e3>10)){
			ultimo++;
		}
		system("cls");
	}
	if(todos==1){
		cout<<todos<<" alumno aprob� todos los ex�menes\n";
	} else{
		cout<<todos<<" alumnos aprobaron todos los ex�menes\n";
	}
	if(uno==1){
		cout<<uno<<" alumno aprob� al menos un ex�men\n";
	} else{
		cout<<uno<<" alumnos aprobaron al menos un ex�men\n";
	}
	if(ultimo==1){
		cout<<ultimo<<" alumno aprob� �nicamente el �ltimo ex�men\n";
	} else{
		cout<<ultimo<<" alumnos aprobaron �nicamente el �ltimo ex�men\n";
	}
	
	system("pause");
	
	return 0;
}

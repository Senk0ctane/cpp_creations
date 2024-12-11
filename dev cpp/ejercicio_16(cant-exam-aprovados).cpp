#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	float e1,e2,e3;
	int todos=0,uno=0,ultimo=0;
	setlocale(LC_ALL,"");
	
	for(int i=1;i<=5;i++){
		cout<<"notas del alumno "<<i;
		cout<<"\nExámen 1: ";cin>>e1;
		cout<<"\nExámen 2: ";cin>>e2;
		cout<<"\nExámen 3: ";cin>>e3;
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
		cout<<todos<<" alumno aprobó todos los exámenes\n";
	} else{
		cout<<todos<<" alumnos aprobaron todos los exámenes\n";
	}
	if(uno==1){
		cout<<uno<<" alumno aprobó al menos un exámen\n";
	} else{
		cout<<uno<<" alumnos aprobaron al menos un exámen\n";
	}
	if(ultimo==1){
		cout<<ultimo<<" alumno aprobó únicamente el último exámen\n";
	} else{
		cout<<ultimo<<" alumnos aprobaron únicamente el último exámen\n";
	}
	
	system("pause");
	
	return 0;
}

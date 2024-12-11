#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

class Alfabeto{
	private:
		string texto={"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"};
	public:
		alfabeto();
		void Ingresar();
		void ContMostrar();
};

Alfabeto::alfabeto(){
	
}

void Alfabeto::Ingresar(){
	cout<<"Ingrese una oración:\n";
	getline(cin,texto);
}

void Alfabeto::ContMostrar(){
	int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
	
	for(int ka=0;ka<255;ka++){
		switch(texto[ka]){
			case 'a': A++; break;
			case 'b': B++; break;
			case 'c': C++; break;
			case 'd': D++; break;
			case 'e': E++; break;
			case 'f': F++; break;
			case 'g': G++; break;
			case 'h': H++; break;
			case 'i': I++; break;
			case 'j': J++; break;
			case 'k': K++; break;
			case 'l': L++; break;
			case 'm': M++; break;
			case 'n': N++; break;
			case 'o': O++; break;
			case 'p': P++; break;
			case 'q': Q++; break;
			case 'r': R++; break;
			case 's': S++; break;
			case 't': T++; break;
			case 'u': U++; break;
			case 'v': V++; break;
			case 'w': W++; break;
			case 'x': X++; break;
			case 'y': Y++; break;
			case 'z': Z++; break;
			default: break;
		}
	}

	cout<<"\nLa cantidad de letras es:\n";
	cout<<"\nA="<<A<<"\tB="<<B<<"\tC="<<C<<"\tD="<<D<<"\tE="<<E<<endl;
	cout<<"\nF="<<F<<"\tG="<<G<<"\tH="<<H<<"\tI="<<I<<"\tJ="<<J<<endl;
	cout<<"\nK="<<K<<"\tL="<<L<<"\tM="<<M<<"\tN="<<N<<"\tO="<<O<<endl;
	cout<<"\nP="<<P<<"\tQ="<<Q<<"\tR="<<R<<"\tS="<<S<<"\tT="<<T<<endl;
	cout<<"\nU="<<U<<"\tV="<<V<<"\tW="<<W<<"\tX="<<X<<"\tY="<<Y<<endl;
	cout<<"\nZ="<<Z<<endl<<endl;
}

int main(){
	setlocale(LC_ALL,"");
	Alfabeto Abecedario=Alfabeto();
	
	Abecedario.Ingresar();
	Abecedario.ContMostrar();
	
	system("pause");
	
	return 0;
}

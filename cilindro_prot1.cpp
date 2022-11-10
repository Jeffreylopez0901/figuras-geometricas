/*nombre:
autor:
lugar: ITV
instrucciones: 
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	
	int seg;
	float pb;
	float ab;
	float rs;
    float a;
	float al;
	float ap;
	float ap_1;
	float at;
	float b;
	float b_1;
	float g;
	float h;
	float n;
	float n_1;
	float p;
	float r;
	float r_1;
	float v;		
	int cont, d;
	
	cout<<"_______________________________CILINDRO________________________________________________________"<<endl;
		cout<<"elija  que necesitara del cilindro \n1- area lateral\n2- area total\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						do {
				cout << "ingresar valores para Al , perimetro P, altura h " << endl;
						cin >> p;
						cin >> h;
						} while (!((p>0 && h>0)));
								al = p*h;
								cout << " la area lateral es igual a " << al << endl;
								cout << " el area total es igual a " << at << endl;
								cout << " el volumen es igual a " << v << endl;
							break;
					case 2:
							do {
				cout << "ingresar valores para At CILINDRO, ingrsar r, luego ingresar h" << endl;
						cin >> r;
						cin >> h;
						} while (!((r>0 && h>0)));
								at = 2*M_PI*r*(h+r);
								cout << " la area lateral es igual a " << al << endl;
								cout << " el area total es igual a " << at << endl;
								cout << " el volumen es igual a " << v << endl;
						
							break;
					case 3:
						do {
								cout << "ingresar valores para V CILINDRO, ingrsar r, luego ingresar h" << endl;
								cin >> r;
								cin >> h;
						} while (!((r>0 && h>0)));
								v = M_PI*pow(r,2)*h;
								cout << " la area lateral es igual a " << al << endl;
								cout << " el area total es igual a " << at << endl;
								cout << " el volumen es igual a " << v << endl;
							break;	
					
							}
		
	
	
	
	
	return 0;
}




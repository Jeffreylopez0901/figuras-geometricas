/*nombre:cuerpos geometricos c ++
autor:Jeffrey josue lopez rodriguez
lugar: ITV
*/

#include<math.h>
#include<iostream>

using namespace std;

int main (){
	
	
	int pb;
	int ab;
	int rs;
    int a;
	int al;
	int ap;
	int ap_1;
	int at;
	int b;
	int b_1;
	int g;
	int h;
	int n;
	int n_1;
	int p;
	int r;
	int r_1;
	int v;
	int i;	
int fig, seg;	
	int cont, d;
	
	cout<<"_________________________________________FIGURAS GEOMETRICAS.EXE__________________"<<endl;
	cout<<" POR FAVOR DIGA LA FIGURA QUE DESEA CONOCE\n1-cilindro\n2-cono\n3-dodecaedro\n4-esfera\n5-hexadecaedro\n6-huso esferico\n7-icosaedro\n8-octaedro\n9-piramide\n10-prisma\n11- tetaedro\n12- tronco de  piramide\n13- tronco del cono\n14- SALIR "<<endl;
	cin>>fig;
	
	switch(fig){
		
		case 1:
			cout<<"elija  que necesitara del CILINDRO \n1- area lateral\n2- area total\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para Al , perimetro P, altura h " << endl;
		cin >> p;
		cin >> h;
	} while (!((p>0 && h>0)));
	al = p*h;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
					case 2:
							do {
		cout << "ingresar valores para At CILINDRO, ingresar r, luego ingresar h" << endl;
		cin >> r;
		cin >> h;
	} while (!((r>0 && h>0)));
	at = 2*M_PI*r*(h+r);
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						break;
				case 3:
				do {
		cout << "ingresar valores para V CILINDRO, ingrsar r, luego ingresar h" << endl;
		cin >> r;
		cin >> h;
	} while (!((r>0 && h>0)));
	v = M_PI*pow(r,2)*h;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
				break;	
					
				}
		
		break;
		
		case 2:
			cout<<"elija  que necesitara del cono \n1- area lateral\n2- area total\3- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
							do {
		cout << "ingresar valores para Al CONO, ingrsar P, luego ingresar g" << endl;
		cin >> p;
		cin >> g;
	} while (!((p>0 && g>0)));
	al = (p*g)/2;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para At CONO, ingrsar g, luego ingresar r" << endl;
		cin >> g;
		cin >> r;
	} while (!((g>0 && r>0)));
	at = M_PI*r*(g+r);
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						break;
					
					case 3:
						do {
		cout << "ingresar valores para V CONO, ingrsar r, luego ingresar h" << endl;
		cin >> r;
		cin >> h;
	} while (!((r>0 && h>0)));
	v = (M_PI*pow(r,2)*h)/3;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						
						break;
					
				}
		break;
		
		case 3:
		     cout<<"elija  que necesitara del dodecaedro \n1- area \n2- volumen"<<endl;	
		cin>>seg;
				switch(seg){
					case 1:
						cont = 0;
	do {
		cout << "ingresar valores para A de DODECAEDRO, ingrsar a" << endl;
		cin >> a;
		cont = cont+1;
	} while (!((a>0 || cont==3)));
	if ((a>0)) {
		a = (3*pow(a,2))*sqrtf(25+(10*sqrtf(5)));
		cout << " la area  es igual a : " << a << endl;
	}
						break;
					case 2:
							do {
		cout << "ingresar valores para V de DODECAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (1/4)*(15+(7*sqrtf(5)))*pow(a,3);
	cout << " la volumen  es igual a : " << v << endl;
						
						break;
					
					
				}
		break;
		
		case 4:
			cout<<"elija  que necesitara del esfera \n1- area\n2- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
					cont = 0;
	do {
		cout << "ingresar valores para A ESFERA, ingrsar r" << endl;
		cin >> r;
		cont = cont+1;
	} while (!((r>0 || cont==3)));
	if ((r>0)) {
		a = 4*M_PI*pow(r,2);
		cout << " la area  es igual a : " << a << endl;
	}	
						break;
					case 2:
						do {
		cout << "ingresar valores para V ESFERA, ingrsar r" << endl;
		cin >> r;
	} while ((r<=0));
	v = (4*M_PI*pow(r,3))/3;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						break;
					
					
				}
		break;
		
		case 5:
			cout<<"elija  que necesitara del hexadecaedro \n1- area \n2- diametro\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						cont = 0;
	do {
		cout << "ingresar valores para A de HEXADECAEDRO, ingrsar a" << endl;
		cin >> a;
		cont = cont+1;
	} while (!((a>0 || cont==3)));
	if ((a>0)) {
		a = 6*pow(a,2);
		cout << " la area  es igual a : " << a << endl;
	}
						break;
					case 2:
							do {
		cout << "ingresar valores para D de HEXADECAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	d = a*sqrtf(3);
	cout << " la D  es igual a : " << d << endl;
						
						break;
					case 3:
						do {
		cout << "ingresar valores para V de HEXADECAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = pow(a,3);
	cout << " la Volumen  es igual a : " << v << endl;
						break;
					
				}
		break;
			
		case 6:
			cout<<"elija  que necesitara del huso esferico \n1- area \n2- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
							do {
		cout << "ingresar valores para A de HUSO ESFERICO, ingrsar r, luego ingresar grados n" << endl;
		cin >> r;
		cin >> n;
	} while (!((r>0 && n>0)));
	a = (4*M_PI*n)/360;
	cout << " la area  es igual a : " << a << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para V de HUSO ESFERICO, ingrsar r, luego ingresar grados n" << endl;
		cin >> r;
		cin >> n;
	} while (!((r>0 && n>0)));
	v = (3/4)*((M_PI*pow(r,3)*n)/360);
	cout << " la Volumen  es igual a : " << v << endl;
						
						break;
					
					
				}
		break;
		
		case 7:
			cout<<"elija  que necesitara del icosaedro \n1- area \n2- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para A de ICOSAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	a = 5*pow(a,2)*sqrtf(3);
	cout << " la area  es igual a : " << a << endl;
						break;
					case 2:
							do {
		cout << "ingresar valores para V de ICOSAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (5/12)*(3+(sqrtf(5)))*pow(a,3);
	cout << " el volumen  es igual a : " << v << endl;
						
						break;
					
					
				}
		break;
		
		case 8:
			cout<<"elija  que necesitara del octaedro \n1- area \n2- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para A de OCTAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	a = 2*pow(a,32)*sqrtf(3);
	cout << " la area  es igual a : " << a << endl;
						break;
					case 2:
					do {
		cout << "ingresar valores para V de OCTAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (sqrtf(2)/3)*pow(a,3);
	cout << " la volumen  es igual a : " << v << endl;	
						
						break;
					
						
					
				}
		break;
		
		case 9:
			cout<<"elija  que necesitara de la  piramide \n1- area lateral\n2- area total\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para Al PIRAMIDE, ingrsar AP, luego ingresar P" << endl;
		cin >> ap;
		cin >> p;
	} while (!((ap>0 && p>0)));
	al = (p*ap)/2;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para At PIRAMIDE, ingresar Al, luego ingresar A" << endl;
		cin >> al;
		cin >> a;
	} while (!((al>0 && a>0)));
	at = al+a;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						break;
					case 3:
							do {
		cout << "ingresar valores para V PIRAMIDE, ingresar A, luego ingresar h" << endl;
		cin >> a;
		cin >> h;
	} while (!((a>0 && h>0)));
	v = (a*h)/3;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
					
				}
		break;
		
		case 10:
			cout<<"elija  que necesitara del prisma \n1- area lateral\n2- area total\n3- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
							do {
		cout << "ingresar valores para Al PRISMA, perimetro P, altura h " << endl;
		cin >> p;
		cin >> h;
	} while (!((p>0 && h>0)));
	al = p*h;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para At PRISMA, area lateral AL, Area A " << endl;
		cin >> al;
		cin >> a;
	} while (!((al>0 && a>0)));
	at = al+(2*a);
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						break;
					case 3:
						do {
		cout << "ingresar valores para V PRISMA, A , altura h " << endl;
		cin >> a;
		cin >> h;
	} while (!((a>0 && h>0)));
	v = a*h;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
						
					
				}
		break;
		
		case 11:
			cout<<"Elija  que necesitara del tetaedro \n1- volumen\n2- area\n3- altura"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "Ingresar valores para V de TETRAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (sqrtf(2))/12*pow(a,3);
	cout << " la Volumen  es igual a : " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para A de TETRAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	a = pow(a,2)*sqrtf(3);
	cout << " la area  es igual a : " << a << endl;
						
						break;
					case 3:
							do {
		cout << "ingresar valores para H de TETRAEDRO, ingresar a" << endl;
		cin >> a;
	} while ((a<=0));
	h = a*((sqrtf(6))/3);
	cout << " la huso  es igual a : " << h << endl;
						
						break;
					
				}
		break;
		
		case 12:
			cout<<"elija  que necesitara del tronco de piramide \n1- area lateral\n2- area total\n3- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para Al TRONCO DE PIRAMIDE, ingresar PB, luego ingresar Pb, luego ingresar Ap" << endl;
		cin >> pb;
		cin >> pb;
		cin >> ap;
	} while (!((pb>0 && pb>0 && ap>0)));
	al = ((pb+pb)/2)*ap;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para At de TRONCO DE UNA PIRAMIDE , ingresar Al, luego ingresar AB, luego Ab" << endl;
		cin >> al;
		cin >> ab;
		cin >> ab;
	} while (!((al>0 && ab>0 && ab>0)));
	at = al+ab+ab;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
						
						break;
					case 3:
						do {
		cout << "ingresar valores para V de TRONCO DE UNA PIRAMIDE , ingresar (h), luego ingresar (AB), luego (Ab)" << endl;
		cin >> h;
		cin >> ab;
		cin >> ab;
	} while (!((h>0 && ab>0 && ab>0)));
	v = (h*(ab+ab+sqrtf(ab*ab)))/3;
	cout << " la area lateral es igual a: " << al << endl;
	cout << " el area total es igual a: " << at << endl;
	cout << " el volumen es igual a: " << v << endl;
						break;
					
				}
	
		case 13:
			cout<<"Elija  que necesitara del tronco del cono \n1- area lateral\n2- area total\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para Al TRONCO DE CONO, ingresar (g), luego ingresar (r), ingresar (Rs)" << endl;
		cin >> g;
		cin >> r;
		cin >> rs;
	} while (!((g>0 && r>0 && rs>0)));
	al = M_PI*g*(r+rs);
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
					break;
						
					case 2:
					do {
		cout << "ingresar valores para At CILINDRO, ingresar Al, luego ingresar (AB), ingresar Ab" << endl;
		cin >> al;
		cin >> ab;
		cin >> ab;
	} while (!((al>0 && ab>0 && ab>0)));
	at = al+ab+ab;
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
					break;
					
					case 3:
					do {
		cout << "ingresar valores para V CONO, ingresar (h), luego ingresar Rs, ingresar r" << endl;
		cin >> h;
		cin >> rs;
		cin >> r;
	} while (!((h>0 && rs>0 && r>0)));
	v = (M_PI*h*(pow(rs,2)+pow(r,2)+r*r));
	cout << " la area lateral es igual a : " << al << endl;
	cout << " el area total es igual a : " << at << endl;
	cout << " el volumen es igual a : " << v << endl;
					break;	
				}
	
	case 14:
		i=1;
		do{
			cout<<" Fin del programa, gracias por su tiempo "<<endl;
			i++;
		}while(i==1);
	
}
			
			
			
				
	
	
	
	
	
	
	
	
	return 0;
}



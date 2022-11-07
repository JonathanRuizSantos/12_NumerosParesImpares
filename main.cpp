#include <iostream>

/* Programa que determina si un numero es par o impar */

using namespace std;
int main(int argc, char** argv) {
	cout<<"Programa que determina si in numero es par o impar"<<endl<<endl; 
 
  	int num;
 
  cout<<"Escriba un numero entero: ";
  cin>>num;
 
  if(num % 2 == 0){
    cout<<"El numero es Par\n";
  } else {
    cout<<"El numero es Impar\n";
  }
  
  system("PAUSE");
	return 0;
}
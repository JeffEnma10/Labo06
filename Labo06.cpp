#include <iostream>

using namespace std;


int main(){
    int numero;

    cout <<" numero entero"<< endl;
    cin >> numero;

\\ Estehace que el programa en bucle le pida el numero entero 

    if (numero==0) {
        cout << "no puede ser 0 "<< endl;
\\ Esto hace que cuando usted pone 0 el programa le indica que no puede ser 0

    } else {
        for (int i = 1; i <= 12 ; i++)
        cout << numero  << "x" << i << "=" << numero * i << endl;
    }
    
\\Esto ejecuta el numero multiplicado haciendo que sea hasta el 12 y en bucle muestre la x y el igual 
  
   return 0;
}
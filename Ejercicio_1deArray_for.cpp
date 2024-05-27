#include <iostream>

using namespace std;

int main(){

    

    int n =0;
    cout << "Ingrese un numero que sera en numero de arreglos enteros: "<<"\n";
    cin >> n;
    int numero[n];
    int par[n];
    int j = 0;

    


    for( int i=0; i<n; i++){

        cout << "Los numeros de arreglos ingresados: "<<"\n";
        cin >> numero[i];

         if(numero[i]%2==0){

        par [j] = numero[i];
        j++;

    }

    }

    cout << "El arreglo original es. "<< "\n";
    for(int i= 0; i<n; i++){

        cout<< numero[i]<<"\n";

    }
    cout << "El arreglo de pares es. "<<"\n";
    for(int k = 0; k<j; k++){

        cout <<par [k]<< "\n";

    }

    return 0;
}
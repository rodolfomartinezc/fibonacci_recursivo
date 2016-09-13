#include<iostream>                //libreria para entradas y salidas

using namespace std;

unsigned int fibonacci(int n){    //funcion fibonnacci recursiva no signada

    if(n<2)                       // condicion de paro
       return n;
    
	else
       return fibonacci(n - 2) + fibonacci(n - 1);  //recursividad
}


int main()
{
    cout<<"\n          -Fibonacci Recursivo-    \n";          // Metodo a Evaluar
	cout<<"      Rodolfo Martinez y Brenda Ortega    \n\n";   // Integrantes del Equipo
    
    unsigned int i, num ; // variables de entrada para la funcion
    
    do
    {
        cout<<"Ingrese un numero: ";  // se pide un numero para efectuar el algoritmo
        cin>>num;                     // se guarda en "num"
        
    } while(num < 0);
    
    cout<<"\n Serie de Fibonacci: \n\t";
    
    for(i=0; i<num; i++)               // Valores donde num es nuestro limite
    {
       if(fibonacci(i) != 0)           // Si es diferente de cero, colocamos una coma para continuar con la numercacion
          cout<< ", "; 
        
        cout<< fibonacci(i);           // ejectuta la funcion fibonnaci y nos regresa el valor para imprimirlo
    }
    
	cout<<"\n"; 

   
    
    return 0;                          // fin del programa
}

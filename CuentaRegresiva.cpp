#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
/*
[] Declaro variable tipo int para guardar dato desde donde quiero que comiece la cuenta regresiva.
[] Pido al usuario el ingreso del numero a contar.
[] Creo un bucle que comience en el valor que guarde en la variable con el numero ingresado por el usuario,hasta el numero 0 descontando 1 por ciclo.
[] Dentro del bucle, mostrar Variable "I"
*/
using namespace std;


int main(){

int N;
cout << "Ingresar numero para la cuenta ";
cin >> N;

for(int I=N;I>=0;I--){
 cout << I << endl;
}


return 0;
}



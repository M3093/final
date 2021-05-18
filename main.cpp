//Programa de facturación// 
#include <string>
#include <iostream>
using namespace std;
// Declaración de variables// 
  int horas; 
  int watts;
  int consumo;
  int dispositivo;

int main() 
//Cadena de string, es una secuemcia de caracteres// 
{
    string luz1[] = {"Luz exterior"};
    string camara1[] = {"Camara exterior"};
    string luz2[] = {"Luz interior"};

   cout << "Ingrese el nombre del dispositvo IOT: " <<endl;
   cin>>dispositivo;
   cout<<"Ingrese la cantidad de horas: "<<endl;
   cin>>horas;
   cout<<"Ingrese la cantidad de watts: "<<endl;
   cin>>watts;
   consumo=(horas*watts);
  cout<<"El monto del consumo es :"<<consumo<<endl;
    return 0;
    }
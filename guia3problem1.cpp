#include <iostream>
#include <cmath>
using namespace std;
int main() {
  //declaracion de variables
  int promedio;
  char letra;
  //entrada
  cout<<"Ingresar promedio:";
  cin>>promedio;
  if(promedio>=17)
    letra = 'A';
  else if (promedio>=14 && promedio<17)
    letra= 'B';
  else if (promedio>=12 && promedio<14)
    letra= 'C';
  else if (promedio<12)
    letra= 'D';
  //salida
  cout<<"Tu categoria es:"<<letra;
  return 0;
}
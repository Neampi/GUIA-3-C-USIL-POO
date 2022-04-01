#include<iostream>
#include <cmath>
	using namespace std;
  
	int main() {
	  //declaracion de variables
	  float peso;
	  float estatura;
	  float IMC;
    char  letra;
	  //entrada
	  cout<<"Ingresar su peso:";
    cin>>peso;
    cout<<"Ingresar su estatura:";
	  cin>>estatura;
	  //proceso-algoritmo
	  IMC=round(peso/ std::pow(estatura,2));
    cout<<"Su indice de masa corporal es: "<<IMC;
    cout<<"\n";
    if (IMC<20)
      cout<<"Su grado de obesidad es: delgado";
    else if (IMC>=20 && IMC<25)
      cout<<"Su grado de obesidad es: normal";
    else if (IMC>=25 && IMC<27)
      cout<<"Su grado de obesidad es: sobrepeso";
    else if (IMC>=27)
      cout<<"Su grado de obesidad es: obesidad";
    return 0;
	}

  
  
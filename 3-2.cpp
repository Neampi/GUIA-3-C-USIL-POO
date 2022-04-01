
#include <iostream>
using namespace std;


int main()
{
        float litros;
        double imca;
        double dscto;
        double impa;
        int codi;
        
        cout << "Numero de codigos:";
        cout << "\n1 - PRIMOR";
        cout << "\n2 - GIRASOL";
        cout << "\n3 - CIL";
        cout << "\n4 - COCINERO";

        cout << "\nIngrese codigo: ";
        cin >> codi;
        
        cout << "\nIngrese cantidad de litros a comprar: ";
        cin >> litros;
        
        //ALGORITMO DE COMBOBOX
        
        switch (codi){
            case 1:
                imca = (litros * 5.99);
            break;
            case 2:
                imca = (litros * 5.50);
            break;
            case 3:
                imca = (litros * 4.50);
            break;
            case 4:
                imca = (litros * 4.70);
                break;
        }
            
        
        //ALGORITMO DESCUENTO
        if (litros >= 10){
            dscto = (imca * 0.125);
        }else if (litros>=7 && litros<10){
            dscto = (imca * 0.10);
        }else if (litros>=4 && litros<7){
            dscto = (imca * 0.075);
        }else{
            dscto = (imca * 0.05);
        }
        
        impa=(imca-dscto);
        
        //MOSTRAR DATOS
        cout << "El importe de compra es: S/."<<imca;
        cout << "\nEl importe de descuento es: S/."<<dscto;
        cout << "\nEl importe de compra de "<<litros<<" del codigo numero "<<codi<<" es: S/."<<impa;
}

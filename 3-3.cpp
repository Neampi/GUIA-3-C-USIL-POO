
#include <iostream>
using namespace std;


int main()
{
        float litros;
        double imca;
        double dscto;
        double impa;
        int codi;
        
        cout << "Numero de codigo de marcas:";
        cout << "\n1 - LAIVE";
        cout << "\n2 - GLORIA";
        cout << "\n3 - PURA VIDA";
        cout << "\n4 - MILKITO";

        cout << "\nIngrese codigo: ";
        cin >> codi;
        
        cout << "\nIngrese cantidad de botellas a comprar: ";
        cin >> litros;
        
        //ALGORITMO DE COMBOBOX
        
        switch (codi){
            case 1:
                imca = (litros * 3.90);
            break;
            case 2:
                imca = (litros * 3.80);
            break;
            case 3:
                imca = (litros * 4.20);
            break;
            case 4:
                imca = (litros * 3.60);
                break;
        }
            
        
        //ALGORITMO DESCUENTO
        if (litros >= 45){
            dscto = (imca * 0.115);
        }else if (litros>=30 && litros<45){
            dscto = (imca * 0.09);
        }else if (litros>=15 && litros<30){
            dscto = (imca * 0.065);
        }else{
            dscto = (imca * 0.04);
        }
        
        impa=(imca-dscto);
        
        //MOSTRAR DATOS
        cout << "El importe de compra es: S/."<<imca;
        cout << "\nEl importe de descuento es: S/."<<dscto;
        cout << "\nEl importe de compra de "<<litros<<" del codigo de marca "<<codi<<" es: S/."<<impa;
}

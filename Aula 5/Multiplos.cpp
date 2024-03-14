#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
     int numero1;
     int numero2;
     int resultado;
     
     std::cout << "Escreva um numero: ";
     std::cin >> numero1;
     
     std::cout << "Escreva um outro numero para saber se ele é multiplo do primeiro: ";
     std::cin >> numero2;
     
     resultado = numero2%numero1;
     
     switch (resultado) 
     {
        case 0:
        std::cout << "O primeiro numero é multiplo do segundo";
        break;
        
        default:
        std::cout << "O primeiro numero não é multiplo do segundo";
        break;
        
    }

    return 0;
}

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
     int numero;
     int resultado;
     
     std::cout << "Escreva um numero inteiro para saber se ele é par ou impar: ";
     std::cin >> numero;
     
     resultado = numero%2;
     
     switch (resultado) 
     {
        case 0:
        std::cout << "O numero é par ";
        break;
        
        default:
        std::cout << "O numero é impar ";
        break;
        
    }

    return 0;
}

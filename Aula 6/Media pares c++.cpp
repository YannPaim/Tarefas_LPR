/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double soma = 0;
    int quantia = 0;
    std::cout<<"Digite quantos numero vc escrevera" << endl;
    int quantidadenum;
    std::cin >> quantidadenum;
    int conte = 0;
    
    while(conte < quantidadenum){
        cout << "Digite um numero" << endl;
        int nums;
        cin >> nums;
        
        if (nums % 2 == 0 ){
         soma += nums;
         quantia++;
     }
     conte ++;
    }
    double media = soma/quantia;
    cout << "Sua média é: " << media << endl;
}
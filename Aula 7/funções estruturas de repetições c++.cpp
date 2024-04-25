#include <iostream>
using namespace std;


void Mediapares() 
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

void ciquentaaquinhentos() { //aqui tive que mudar o código um pouco pq quando fiz foi em c# ent ali na hora de escrever troquei fora isso não apaguei nada
  //static void Main() {
      
    int soma = 0;

    for (int i=50; i<500; i++){
        if(i%2 != 0){
            if(i%3 == 0){
                soma += i;
            }
        }
   // }
   std::cout << (soma) << endl; 
  }
}

void somadosdigitosaoquadrado() { //aqui tive que mudar o código um pouco pq quando fiz foi em c#
    
   // static void Main()
   // {
        int num;
        int numquadrado;
        int soma = 0;
        int sobra;
        std::cout << ("Insira um número: ");
        cin >> num;
        
        numquadrado = num * num;
        while (numquadrado > 0)
        {
        sobra = numquadrado % 10;
        soma += sobra;
        numquadrado /= 10;
        }
       std::cout << "A soma dos dígitos do quadrado de " << num << " é " << soma << std::endl;
   // }
}

int main() {
    int escolha;
     
        std::cout << "escolha o que deseja fazer:" << std::endl;
        std::cout << "1. calcular media dos numeros pares" << std::endl;
        std::cout << "2. calcular soma dos numeros impares multiplos de 3 que estejam entre 50 a 500" << std::endl;
        std::cout << "3. calcular soma dos digitos ao quadrado" << std::endl;
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                Mediapares();
                break;
            case 2:
                ciquentaaquinhentos();
                break;
            case 3:
                somadosdigitosaoquadrado();
        }
    return 0;
}
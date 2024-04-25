#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

    std::string invertordem(int num) {
    std::string str_num = std::to_string(num);
    std::reverse(str_num.begin(), str_num.end());
    
    return str_num;

}

int main() {

    int num;

    std::cout << "escreva um numero: ";
    std::cin >> num;
    
    std::string numinvertido = invertordem(num);
    std::cout << "o numero escrito de forma invertida é : " << numinvertido << std::endl;
}
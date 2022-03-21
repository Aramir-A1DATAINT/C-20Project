#include <iostream>

int main(){
    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0f; // Hecadecimal
    int number4 = 0b00001111; //Binary C++14

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number1 : " << number2 << std::endl;
    std::cout << "number1 : " << number3 << std::endl;
    std::cout << "number1 : " << number4 << std::endl;

    return 0;
}
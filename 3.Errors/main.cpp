#include <iostream>

int main(){
    // Compile Time Errors
    std::cout << "Hello World!@" << std::endl
    return 0;
    
    //Run time error
    int value = 7/0;
    std::cout << "value : " << value << std::endl;
    return 0;
}
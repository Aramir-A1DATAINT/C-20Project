#include <iostream>
#include <string>

int main(){
    //Printing data
    std::cout << "Hello C++20" << std::endl;

    int age {21};
    std::cout << "Age :" << age << std::endl;

    std::cerr << "Eroor message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happend " << std::endl;

    //
    int age1;
    std::string name;
    /*
    std::cout << "Please type yout name and age : " << std::endl;

    std::cin >> name;
    std::cin >> age1;
    // std::cin >> name >> age1; 이렇게 한 줄도 표현 가능하다

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;
    */
   
    std::string full_name;
    int age3;
    std::cout << "Please type your full name and age : " << std::endl;

    std::getline(std::cin, full_name); //space 바 같은게 cin에서 치명적임 h y 라고 하면 h 따로 y 따로 저장해버림
    
    std:: cin >> age3;
    
    std::cout << "Hello " << full_name << " you are " << age3 << " years old!" << std::endl;

    return 0;
}
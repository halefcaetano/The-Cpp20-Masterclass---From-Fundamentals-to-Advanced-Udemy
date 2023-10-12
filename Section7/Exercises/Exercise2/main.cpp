#include <iostream>



int main(){

    int number;
    std::cout << "Please type in your age: " << std::endl;
    std::cin >> number;
    if (number >= 21){
        if (number <= 39){
            std::cout << "You are eligible for the treatment" << std::endl;
        }else{
            std::cout << "Sorry, tou are too old for the treatment"<< std::endl;
        }
    } else{
        std::cout << "Sorry, tou are too young for the treatment"<< std::endl;
    }  
    return 0;
}
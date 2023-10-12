#include <iostream>



int main(){

    int number;
    std::cout << "Which days is today [1: Monday, ... , 7: Sunday] " << std::endl;
    std::cin >> number;
    if (number == 1){
            std::cout << "Today is Monday. Let's have some fun" << std::endl;
    } else if (number == 2){
        std::cout << "Today is Tuesday. Let's have some fun" << std::endl;
    } else if (number == 3){
        std::cout << "Today is Wednesday. Let's have some fun" << std::endl;
    } else if (number == 4){
        std::cout << "Today is Thusday. Let's have some fun" << std::endl;
    } else if (number == 5){
        std::cout << "Today is Friday. Let's have some fun" << std::endl;
    } else if (number == 6){
        std::cout << "Today is Saturday. Let's have some fun" << std::endl;
    } else if (number == 7){
        std::cout << "Today is Sunday. Let's have some fun" << std::endl;
    }else{
        std::cout << number << " is not a valid day. Bye" << std::endl;
    }
    return 0;
}
#include <iostream>

int main(){

	int i = 100;
do{if(i % 19 == 0){
    std::cout << i << " ";
}
i++;
}
while(i <= 1000);
    return 0;
}
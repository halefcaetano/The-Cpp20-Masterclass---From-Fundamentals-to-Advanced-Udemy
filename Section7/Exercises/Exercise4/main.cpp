#include <iostream>

/*

    The program prompts the user to type in the current
     day[1 : Monday,...,  7 : Sunday] . .
    We also prompt for a day difference and use that difference
    to hunt for a week day in the past.

    The program has two challenges for you in my opinion
        . Terminating the program before it hits the end of the main function
        . Making sure the day difference it between 0 and 6 for ease of computations

    If you couldn't solve this, please take a closer look at my solution here and make
    sure you learn and master all these little tricks for use in your own programs.

*/

int main(){

    //Prompt for input and grab current day
    std::cout << "Which day is today [1 : Monday,...,  7 : Sunday] : " << std::endl;
    int today,days_passed;
    std::cin >> today;

    //Check if day is valid, only 1,...,7 are acceptable
    if((today< 1 )|| (today > 7)){
        std::cout << today << " is not a valid day. Bye!" << std::endl;
        return 0 ; // Kill the program before it hits the end of the main function
                    // because at this point we have no more to do.
    }

    std::cout << "How many days have passed up to today : " << std::endl;
    std::cin >> days_passed;

    if(today == 1){
        std::cout << "Today is Monday" << std::endl;
    }else if(today == 2){
        std::cout << "Today is Tuesday" << std::endl;
    }else if(today == 3){
        std::cout << "Today is Wednesday" << std::endl;
    }else if(today == 4){
        std::cout << "Today is Thursday" << std::endl;
    }else if(today == 5){
        std::cout << "Today is Friday" << std::endl;
    }else if(today == 6){
        std::cout << "Today is Saturday" << std::endl;
    }else{
        std::cout << "Today is Sunday" << std::endl;
    }

   //Make sure the day difference is between 0 and 6 inclusive
   //for ease of computation
   int normalized_diff = (days_passed %7);
  
   int day_in_the_past = today - normalized_diff;

   //If the day in the past happens to be negative, we throw it back
   //in the positive range, again for ease of our logic. This way
   //we can use the same logic to print out the days
   if(day_in_the_past < 0){
       day_in_the_past += 7;
   }

    //We then print the day in the past
   std::cout << "If we went " << days_passed << " days in the past we would hit a ";
    if(day_in_the_past == 1){
        std::cout << "Monday" << std::endl;
    }else if(day_in_the_past == 2){
        std::cout << "Tuesday" << std::endl;
    }else if(day_in_the_past == 3){
        std::cout << "Wednesday" << std::endl;
    }else if(day_in_the_past == 4){
        std::cout << "Thursday" << std::endl;
    }else if(day_in_the_past == 5){
        std::cout << "Friday" << std::endl;
    }else if(day_in_the_past == 6){
        std::cout << "Saturday" << std::endl;
    }else{
        std::cout << "Sunday" << std::endl;
    }

    return 0;
}
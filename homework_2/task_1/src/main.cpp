#include <iostream>
#include <random>

int main(){

    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 99);

    const int guessed_number = dist(rd);
    int input_number;
     
    std::cout << "Please enter a number." << std::endl;

    do{  
         std::cin >> input_number;
         if (std::cin.fail() || (input_number<0 || input_number>99)){
            std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
            return 1;
         }
         if(input_number < guessed_number){
             std::cout << "The entered number is lesser than the guessed number. Please try again" << std::endl;
         }else if(input_number > guessed_number){
             std::cout << "The entered number is greater than the guessed number. Please try again" << std::endl;
         }

    }while(input_number!=guessed_number);

    std::cout << "You won! The correct number was indeed " << input_number << std::endl;
    return 0;


}
//Authors: Keenan Jacob 
#include <iostream>
#include <string>

int main()
{
int number1;
int number2;
int number3;
std::string animal;

std::cout<<"Give me a number that's greater than 1"<<std::endl;
std::cin>> number1;
std::cout<<"Give me another number greater than 1"<<std::endl;
std::cin>> number2;
std::cout<< "Give me a final number greater than 1"<<std::endl;
std::cin>> number3;
std::cout<< "Give me an animal name"<<std::endl;
std::cin>> animal;

std::cout<< "A farmer had " <<number1<< " cows."<<std::endl;
std::cout<< "He woke up at " <<number2<< " hours after sunrise."<<std::endl;
std::cout<< "\"How are my cows?\" he asked his wife."<<std::endl;
std::cout<<"\"" <<number3<< " were eaten by a " <<animal<< ",\" she said." <<std::endl;

  return 0;
}

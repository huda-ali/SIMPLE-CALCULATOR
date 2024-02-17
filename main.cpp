#include <iostream>
#include <string>
using namespace std;

int main() {
   std::cout<<"**********"<<endl<<"     calculator     "<<"**********";
   double number1,number2;
  double  summation,subtraction,multiplication,division;
   char operation;
   std::cout<<" SELECT THE OPERATION (+,*,/,-) \n WARNING:if you selected / the second number musn't be 0";
   std::cin>>operation;
   std::cout<<"ENTER THE FIRST NUMBER";
   std::cin>>number1;
   std::cout<<"ENTER THE SECOND NUMBER";
   std::cin>>number2;
   summation=number1+number2;
   subtraction=number1-number2;
   multiplication=number1*number2;
   division=number1/number2;
   switch(operation){
       case '+':
       std::cout<<"summation = "<<summation;
       break;
       case '-':
       std::cout<<"subtraction = "<<subtraction;
       break;
       case '*':
       std::cout<<"multiplication = "<<multiplication;
       break;
       case '/':
       std::cout<<"division = "<<division;
       break;
       default:
       std:cout<<"invalid operation";

   }



    return 0;
}

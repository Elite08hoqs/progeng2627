#include <iostream>
int main(){
double Pounds, Euros;
std::cout << "How many pounds do you want to convert to euros?" << std::endl;    
std::cin >> Pounds;
Euros = Pounds * 1.15;
std::cout << "The amount in euros is: " << Euros << std::endl;
}
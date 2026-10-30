#include <iostream>
int main(){
double Celsius, Fahrenheit;
std::cout << "How many degrees Celsius do you want to convert to Fahrenheit?" << std::endl;
std::cin >> Celsius;
Fahrenheit = (Celsius * 9/5) + 32;
std::cout << "The amount in Fahrenheit is: " << Fahrenheit << std::endl;
}
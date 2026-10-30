#include <iostream>
int main(){
double Weight, Height, Height_squared, BMI;
std::cout << "What is your weight in kg?" << std::endl;
std::cin >> Weight;
std::cout << "What is your height in meters?" << std::endl;
std::cin >> Height;
Height_squared = Height * Height;
BMI = Weight / Height_squared;
std::cout << "Your BMI is: " << BMI << std::endl;
}
#include <iostream>
int main(){
double Length, Width, perimeter, area;
std::cout << "What is the length of your rectangle?" << std::endl;
std::cin >> Length;
std::cout << "What is the width of your rectangle?" << std::endl;
std::cin >> Width;
perimeter = 2 * (Length + Width);
area = Length * Width;
std::cout << "The perimeter of your rectangle is " << perimeter << std::endl;
std::cout << "The area of your rectangle is " << area << std::endl;
}
#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // I expect it to print 4 as a has been changed to 2
    c = a + b;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed
    // I expect it to print 4, as c has been updated to use the new value of a.
}
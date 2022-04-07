
/* Create a program that takes number as input and returns its square root in the form of a string.*/


#include <iostream>
#include <cmath>




int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "The square root of " << number << " is " << sqrt(number) << std::endl;
    return 0;
}

#include <iostream>

int main()
{
    printf("Simple Multiply Numbers\n");

    int number1= 0;
    int number2= 0;
    int multiplies= 0;

    std::cout << "Enter First Number:";
    std::cin >> number1;

    std::cout << "Enter Second Number:";
    std::cin >> number2;

    multiplies= number1*number2;

    std::cout << "Ans is " << multiplies << std::endl;

    return 0;
}

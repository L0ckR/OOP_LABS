#include "Eleven.hpp"

int main()
{
    std::string first;
    std::cin >> first;
    Eleven num1(first);

    Eleven num2(num1);
    num2.print(std::cout);
    return 0;
}
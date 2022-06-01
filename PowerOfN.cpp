#include <iostream>
int getPower(int base, int pow)
{
    static int result = 1;
    if (pow > 0)
    {
        result = base * getPower(base, pow - 1);
    }
    else
    {
        return 1;
    }
    return result;
}

int main()
{
    int base = 10;
    int power = 3;
    std::cout << "Reverse number using recursion:" << getPower(base, power) << std::endl;

    base = 4;
    power = 3;
    std::cout << "Reverse number using recursion:" << getPower(base, power) << std::endl;
}
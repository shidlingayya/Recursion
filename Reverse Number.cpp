#include <iostream>
int reverse(int num)
{
    static int temp = 0;
    static int sum = 0;
    if (num > 0)
    {
        temp = num % 10;
        sum = sum * 10 + temp;
        reverse(num / 10);
    }
    else
    {
        return sum;
    }
}

int main()
{
    std::cout << "Reverse number using recursion:" << reverse(12345) << std::endl;
}
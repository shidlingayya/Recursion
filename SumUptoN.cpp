#include <iostream>
using namespace std;

int getSum(int n)
{
	if (n <= 0)
	{
		return n;
	}
	else
	{
		return (n + getSum(n - 1));
	}
}
int main() {
	std::cout << "sum of upto <5> " << getSum(5) << std::endl;
	return 0;
}

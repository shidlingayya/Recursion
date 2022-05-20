#include <iostream>
using namespace std;

void genFibSeries(int n)
{
	static int n1 = 0;
	static int n2 = 1;
	static int n3 = 0;

	if (n1 == 0)
	{
		std::cout << n1 << " ";
	}
	if (n1 == 1)
	{
		std::cout << n2 << " ";
	}

	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		std::cout << n3 << " ";
		genFibSeries(n - 1);
	}
}
int main() {
	std::cout << "Print fibonacci series upto <10> ";
	genFibSeries(10);
	return 0;
}

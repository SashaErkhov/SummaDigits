#include <iostream>

int summa(int number)
{
	int s = 0;
	while (number != 0)
	{
		s += number % 10;
		number /= 10;
	}
	return s;
}

int main()
{
	int number;
	int s;
	std::cout << "number = ";
	std::cin >> number;
	while (1)
	{
		s = summa(number);
		if (s > 10)
		{
			number = s;
		}
		else
		{
			std::cout << "summa = " << s<<std::endl;
			break;
		}
	}
	std::system("pause");
    return 0;
}


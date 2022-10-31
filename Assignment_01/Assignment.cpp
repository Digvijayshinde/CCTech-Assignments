#include <iostream>

using namespace std;

bool CheckOdd(int num)
{
	if (num % 2 == 0)
	{
		return false;
	}
	else
		return true;
}

bool checkPositive(int num)
{
	if (num > 0)
		return true;
	else
		return false;
}


bool checkNegative(int num)
{
	if (num < 0)
		return true;
	else
		return false;
}

bool CheckPrime(int num)
{
	int chk = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			chk++;
			break;
		}
	}
	if (chk == 0)
		return true;
	else
		return false;
}

bool CheckDivision(int a, int b)
{
	if (a % b == 0)
		return true;
	else
		return false;
}

void Pov(int a, int b)
{
	int pov=1;
	for (int i = 0; i < b; i++)
	{
		pov =  a * pov;
	}
	cout << pov<<endl;
}

void Factorial(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}

	cout << fact << endl;
}

void printNatural(int num)
{
	for (int i = 1; i < num; i++)
	{
		cout << i << endl;
	}
}

void printEven(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}
	}
}

void printOdd(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (num % i != 0)
		{
			cout << i << endl;
		}
	}
}

void printFibonacci(int num)
{
	int f1 = 0, f2 = 1, i;

	if (num < 1)
		return;
	cout << f1 << " ";
	for (i = 1; i < num; i++) {
		cout << f2 << " ";
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

bool checkEven(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}

int main()
{
	bool bResult = false;

	printFibonacci(7);

	return 0;
}
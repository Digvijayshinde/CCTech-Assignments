// Header Files
#include <iostream>
#include <string.h>
#include <list>
#include <set>
#include <algorithm>
#include <vector>

// Macros
#define PI 3.141592653589793

class Operations
{
public:
	 int getSum(int n)
	{
		 int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}

	int reverseDigits(int num)
	{
		int rev_num = 0;
		while (num > 0) {
			rev_num = rev_num * 10 + num % 10;
			num = num / 10;
		}
		return rev_num;
	}

	int sumFirstLast(int n)
	{
		int sum = 0;
		int n1 = 0;
		n1 = n % 10;
		while (n != 0) {
			sum = n % 10;
			n = n / 10;
		}
		sum = sum + n1;
		return sum;
	}

	int addDigit(int n)
	{
		int temp = 0;
		int number = 0;
		while (n != 0) {
			temp = n % 10;
			if (temp == 9)
			{
				number = 1;
			}
			else
			{
				number = number * 10 + (temp + 1);
			}
			n = n / 10;
		}
		number = reverseDigits(number);
		return number;
	}
	int profitLoss(int costPrice, int sellPrice)
	{
		if (costPrice < sellPrice)
		{
			std::cout << "PROFIT = ";
			return (sellPrice - costPrice);
		}
		else if (sellPrice < costPrice)
		{
			std::cout << "LOSS = ";
			return (costPrice - sellPrice);
		}
		else
		{
			return costPrice;
		}
	}

	
};

class ListOperations
{
private:
	std::list<int> list;
	std::list<int> l2;
	int num;
	std::list<int>::iterator it;
public:
	ListOperations(std::list<int> list)
	{
		this->list = list;
	}
	void setList()
	{
		std::cout << "Enter the number of elements for the list : " << std::endl;
		std::cin >> num;
		std::cout << "Enter elements for the list :" << std::endl;
		for (int i = 0; i < num; i++)
		{
			int n;
			std::cin >> n;
			list.push_back(n);
		}
	}
	void LargestSmallest()
	{
		int iCnt = 0;
		int small = INT_MIN;
		int large = INT_MAX;
		for (it = list.begin(); it != list.end(); it++)
		{
			if (*it > small)
			{
				small = *it;
				iCnt++;
			}
		}
		std::cout << "Largest Element of the list is : " << small << std::endl;
		std::cout << "Largest element is on positions: " << iCnt << std::endl;
		iCnt = 0;
		for (it = list.begin(); it != list.end(); it++)
		{
			if (*it < large)
			{
				large = *it;
				iCnt++;
			}
		}
		std::cout << "Smallest Element of the list is : " << large << std::endl;
		std::cout << "Smallest element is on positions: " << iCnt << std::endl;
	}

	void MultiplyList()
	{
		int n;
		std::cout << "Enter the number to multiply the list : ";
		std::cin >> num;
		for (it = list.begin(); it != list.end(); it++)
		{
			n = (*it) * num;
			l2.push_back(n);
		}
		std::cout << "List 1 is : ";
		for (it = list.begin(); it != list.end(); it++)
		{
			std::cout<< (*it) <<" ";
		}
		std::cout << std::endl;
		std::cout<<"List 2 is : ";
		for (it = l2.begin(); it != l2.end(); it++)
		{
			std::cout<< (*it) <<" ";
		}
		std::cout << std::endl;
	}
	void ListDivide()
	{
		std::cout << "Enter the number to divide the list : ";
		std::cin >> num;
		for (it = list.begin(); it != list.end(); it++)
		{
			if ((*it) % num == 0)
			{
				l2.push_back(*it);
			}
		}
		std::cout << "List 1 is : ";
		for (it = list.begin(); it != list.end(); it++)
		{
			std::cout << (*it) << " ";
		}
		std::cout << std::endl;
		std::cout << "Number of elements : " << list.size() << std::endl;
		std::cout << "List 2 is : ";
		for (it = l2.begin(); it != l2.end(); it++)
		{
			std::cout << (*it) << " ";
		}
		std::cout << std::endl;
		std::cout << "Number of elements : " <<l2.size() << std::endl;
		std::cout << std::endl;
	}

	void cardinals()
	{
		std::set<int> s1;
		std::set<int> s2;
		std::set<int> s3;
		std::set<int> s4;
		std::cout << "Enter the number of elements for the set A: " << std::endl;
		std::cin >> num;
		std::cout << "Enter elements for the list :" << std::endl;
		for (int i = 0; i < num; i++)
		{
			int n;
			std::cin >> n;
			s1.insert(n);
		}
		std::cout << "Enter the number of elements for the set B : " << std::endl;
		std::cin >> num;
		std::cout << "Enter elements for the list :" << std::endl;
		for (int i = 0; i < num; i++)
		{
			int n;
			std::cin >> n;
			s2.insert(n);
		}
		std::list<int> l3;
		for (auto it = s1.begin(); it != s1.end(); it++)
		{
			s3.insert(*it);
		}
		for (auto it = s2.begin(); it != s2.end(); it++)
		{
			s3.insert(*it);
		}
		std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));

		std::cout << "Set A is : ";
		for (auto it = s1.begin(); it != s1.end(); it++)
		{
			std::cout << (*it) << " ";
		}
		std::cout << std::endl;

		std::cout << "Set B is : ";
		for (auto it = s2.begin(); it != s2.end(); it++)
		{
			std::cout << (*it) << " ";
		}
		std::cout << std::endl;

		std::cout << "Set C is : ";
		for (auto it = s3.begin(); it != s3.end(); it++)
		{
			std::cout << (*it) << " ";
		}
		std::cout << std::endl;
		std::cout << "Set D is : ";
		for (auto it = s4.begin(); it != s4.end(); it++)
		{
			std::cout << (*it) << " ";
		}
		std::cout << std::endl;

		std::cout << "Cardinality of set A is : " << s1.size() <<std::endl;
		std::cout << "Cardinality of set B is : " << s2.size() << std::endl;
		std::cout << "Cardinality of set C is : " << s3.size() << std::endl;
		std::cout << "Cardinality of set D is : " << s4.size() << std::endl;
	}
};

// Code realated to Circle
class Vert
{
private:
	float x1, y1,radius;
public:
	Vert(float x1, float y1,float radius)
	{
		this->x1 = x1;
		this->y1 = y1;
		this->radius = radius;
	}
	float getArea()
	{
		return (radius * radius * PI);
	}
	float getX1() {
		return x1;
	}
	float getY1() {
		return y1;
	}
};

class Circles
{
private:
	int num;
	float x, y, radius;
	std::vector<Vert> circles;
public:
	void CircleData()
	{
		std::cout << "Enter the number of Circles: " << std::endl;
		std::cin >> num;
		for (int i = 1; i <=num; i++)
		{
			std::cout << "Enter X , Y Co-ordinates and radius of circle : " <<i<< std::endl;
			std::cin >> x>> y>> radius;
			circles.push_back({ x, y, radius });
		}
	}
};

int main(void)
{
	// Variable declarations
	int num;
	Operations obj;
	std::string result;
	std::list<int> ls;
	ListOperations lsObj(ls);
	Circles c;
	// code
	/*std::cout << "Enter the number N: "<<std::endl;
	std::cin >> num;
	std::cout << "Sum of digits of given number N is : " << obj.getSum(num) << std::endl;
	std::cout << "Reverse of given number is M : " << obj.reverseDigits(num) << std::endl;
	result = (obj.reverseDigits(num) > num) ? "M is greater than N": "N is grater than M";
	std::cout << result << std::endl;
	std::cout << "Sum of first and last digits of given number N is : " << obj.sumFirstLast(num) << std::endl;
	std::cout << "Number after adding 1 to each digit : " << obj.addDigit(num) << std::endl;	
	std::cout << obj.profitLoss(500, 200) << std::endl;	*/
	/*lsObj.setList();
	lsObj.LargestSmallest();
	lsObj.MultiplyList();
	lsObj.ListDivide();*/
	//lsObj.cardinals();
	c.CircleData();
	return 0;
}
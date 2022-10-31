#include <iostream>
#include <string>
#include <limits>
#include <algorithm>

void printLength(std::string str)
{
	std::cout << str.length() << std::endl;
}

void reverseString(std::string str)
{
	std::reverse(str.begin(), str.end());
	std::cout << str << std::endl;
}

void atPos(std::string str, int pos)
{
	std::cout << str.at(pos-1) << std::endl;
}

void ReplaceAt(std::string str, int pos ,char ch)
{
	str.at(pos - 1) = ch;
	std::cout << "After replacing the string is : " << std::endl;
	std::cout << str << std::endl;
}

bool ChechAlphabate(std::string str)
{
	return std::all_of(str.begin(), str.end(), [](char const& c) {
		return std::isalpha(c);
		});
}

void CheckAlphaNumeric(std::string str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		//4
		if (!isalnum(str[i]))
		{
			std::cout << str[i] << " is not alphanumeric" << std::endl;
		}
	}
}

bool checkDigits(std::string str)
{
	return std::all_of(str.begin(), str.end(), ::isdigit);
}

void replaceAll(std::string str)
{
	for (int i = 0; i < str.length(); i++) {
		str[i] = '*';
	}
	std::cout << str << std::endl;
}

void replaceAlternate(std::string str)
{
	for (int i = 0; i < str.length(); i=i+2) {
		str[i] = '*';
	}
	std::cout << str << std::endl;
}

void toUpper(std::string str)
{
	transform(str.begin(), str.end(), str.begin(), toupper);
	std::cout<<str<<std::endl;
}

void toLower(std::string str)
{
	transform(str.begin(), str.end(), str.begin(), tolower);
	std::cout << str << std::endl;
}

void extractReplace(std::string str,int pos,int length)
{
	std::string str2;
	int j = 0;
	for (int i = pos; j <= length; i++,j++)
	{
		str2.push_back(str[i]);
	}
	std::cout << str2 << std::endl;
}

int main(void)
{
	// variable declarations
	int iNum,pos,count;
	char ch;
	bool bCheck = false;
	std::string defString;

	std::cout << "Enter the string : " << std::endl;
	std::getline(std::cin,defString);

	std::cout << "Enter the number for below string operations: " << std::endl;
	std::cout << "1. Find the length of the string: " << std::endl;
	std::cout << "2. Reverse the string : " << std::endl;
	std::cout << "3. Printing the character at position : " << std::endl;
	std::cout << "4. Replace the character at position with 'T' : " << std::endl;
	std::cout << "5. Check if all the characters in the string are alphabets: " << std::endl;
	std::cout << "6. Check if all the characters in the string are alphanumeric: " << std::endl;
	std::cout << "7. Check if all the characters in the string are digits: " << std::endl;
	std::cout << "8. Replace every alternate character of the string  with the '*' character: " << std::endl;
	std::cout << "9. Replace every alternate character with the '*' character: " << std::endl;
	std::cout << "10.Convert all its characters of string to upper case: " << std::endl;
	std::cout << "11.Convert all its characters of string to lower case: " << std::endl;
	std::cout << "12.Extract from the given string: "<<std::endl;
	std::cin >> iNum;

	switch (iNum)
	{
	case 1:
		printLength(defString);
		break;
	case 2:
		reverseString(defString);
		break;
	case 3:
		std::cout << "Enter the position: " << std::endl;
		std::cin >> pos;
		atPos(defString,pos);
		break;
	case 4:
		std::cout << "Enter the position: " << std::endl;
		std::cin >> pos;
		std::cout << "Eneter the character: " << std::endl;
		std::cin >> ch;
		ReplaceAt(defString, pos , ch);
		break;
	case 5:
		bCheck = ChechAlphabate(defString);
		if (bCheck)
			std::cout << "Contains the alphabets " << std::endl;
		else
			std::cout << "Contains other than alphabets " << std::endl;
		break;
	case 6:
		CheckAlphaNumeric(defString);
		break;
	case 7:
		checkDigits(defString);
		if (bCheck)
			std::cout << "Contains the digits " << std::endl;
		else
			std::cout << "Contains other than digits " << std::endl;
		break;
	case 8:
		replaceAll(defString);
		break;
	case 9:
		replaceAlternate(defString);
		break;
	case 10:
		toUpper(defString);
		break;
	case 11:
		toLower(defString);
		break;
	case 12:
		std::cout << "Enter the position: " << std::endl;
		std::cin >> pos;
		std::cout << "Enter the count: " << std::endl;
		std::cin >> count;
		extractReplace(defString, pos, count);
		break;
	default:
		break;
	}
	return 0;
}
// Технология программирования 23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
// подключение заголовочного файла, с прототипом функции palindrom5()
#include "palindrome.h" // что это такое?
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter 5 digit number: "; // введите пятизначное число
	int in_number, out_number; // переменные для хранения введённого пятизначного числа
	cin >> in_number;
	out_number = in_number; // в переменную out_number сохраняем введённое число
	
		if (palindrome5(in_number))
		
		cout << "Number " << out_number << " - palindrome" << endl;
	else
		cout << "This is not palindrome" << endl;
	system("pause");
	return 0;
	}
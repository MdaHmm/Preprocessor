#include <iostream>
#include "H1.h"

// Кодировка UTF-8

// Препроцессор - это программа, которая производит некоторые, а иногда весьма значительные,\
	манипуляции с первоначальным текстом программы, перед тем, как он подвергается компиляции.

#define _PI 3.14
#define forever for(int fori = 0;;fori++)
#define begin {
#define end }
#define sum(a, b) a + b

// Продление определения имени
#define print_arr(a,s) std::cout << '[';\
	for(int i{}; i < s; i++)\
		std::cout << a[i] << ", ";\
	std::cout << "\b\b]\n"

// Условная компиляция

#if 5 < 4

#define var 666

#elif 5 == 4

#define var 0

#else

#define show(p) std::cout << #p << std::endl
#define var(name) std::cout << #name << " = " << name << std::endl
#define concat(a, b) a ## b

#endif 


#ifndef PI

void foo(){}

#endif

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	
	foo();

	// Директива препроцессора - это команда, указывающая препроцессору на то, как именно должен быть изменен исходный текст программы. Начинаются с #
	// Простые объекты препроцессора
	/*
	std::cout << "Пи = " << _PI << std::endl; // _PI заменяется на 3.14 после обработки препроцессором
	// _PI = 3; - ошибка
	
	forever begin
		std::cout << ".";
		if (fori >= 20)
		break;
	end
	*/

	// Макросы препроцессора - функции преп-ра
	/*
	std::cout << "Введите 2 числа -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	const int s = 6;
	int arr[s]{ 4, 8, 15, 16, 23, 42 };
	print_arr(arr, s);
	*/

	// Операторы препроцессора:
	
	//  Oператор превращения в строку
	
	show(SALAM ALEKUM);
	n = 10;
	var(n);
	double tmp = 1.22;
	var(tmp);

	// Оператор конкатенации кода

	std::cout << "tmp = " << concat(t, mp) << std::endl;

	std::cout << _PI << "\n\n";

#undef _PI

	// std::cout << _PI << "\n\n"; Ошибка, т.к. _PI не обнаружена

#define _PI 3

	std::cout << _PI << "\n\n";


	// Условная компиляция





	return 0;
}
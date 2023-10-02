#include <iostream>
#include <clocale>

/**
 *
 * @brief Вывод текстовой оценки взависимости от балла в промежутке от 0 до 5
 * 
 * @return 0
 * 
**/

int main()
{
	setlocale(LC_ALL, "ru");
	int mark;
	std::cout << "Введите оценку (0 - 5): ";
	std::cin >> mark;
	switch (mark)
	{
		case 5: std::cout << "Отлично"; break;
		case 4: std::cout << "Хорошо"; break;
		case 3: std::cout << "Средне"; break;
		default: std::cout << "Хуже среднего"; break;
	}
}
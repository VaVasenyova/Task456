#include <iostream>
#include "Header.h"


int main()
{
	//task 4
	//Написать функцию, 
	//формирующую по заданному списку целых чисел вектор из элементов списка с четными значениями и распечатывающую его.
	std::list<int> list;
	int n;
	std::cout << "Enter the length of a list ";
	std::cin >> n;


	std::cout << "Enter items in a list "<<std::endl;

	for (auto i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		list.push_back(x);

	}

	std::vector<int> vector;
	while (!list.empty()) 
	{
		if (list.front() % 2 == 0) 
		{
			vector.push_back(list.front());
		}
		list.pop_front();
	}

	
	for (int i=0;i<vector.size(); i++)
	{
		if (i != 0)
		{
			std::cout << "; ";
		}
		std::cout << vector[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	list.clear();
	vector.clear();
	

	//task 5
	//Написать шаблонную функцию от 2ух параметров (вектор и список). 
	//Функция должна построить и вернуть новый вектор, 
	//полученный из исходного заменой нечетных элементов вектора на четные элементы списка. 
	//Длины вектора и списка могут быть различны. Вывести на экран исходные данные и результат работы функции.
	std::list<int> l; //создание листа
	int k;
	std::cout << "Enter the length of a list ";
	std::cin >> k;


	std::cout << "Enter items in a list " << std::endl;

	for (auto i = 0; i < k; i++)
	{
		int y;
		std::cin >> y;
		list.push_back(y);

	}

	std::vector<int> vec;// создание вектора

	int m;
	std::cout << "Enter the length of a vector ";
	std::cin >> m;

	for (auto i = 0; i < m; i++)
	{
		int z;
		std::cin >> z;
		vec.push_back(z);

	}

	std::vector<int> vecNew;//создание нового вектора
	vecNew = sort2(vec);

	function(vecNew,l);

	std::cout << std::endl;
	std::cout << std::endl;
	l.clear();
	vec.clear();
	vecNew.clear();


	//task 6
	//Написать шаблонную функцию от 2ух параметров (вектор и список). 
	//Функция должна построить и вернуть новый список, полученный из исходного чередованием пар элементов списка и вектора. 
	//Просмотр списка ведется с его начала, а вектора – с конца. Длины вектора и списка могут быть различны. 
	//Вывести на экран исходные данные (в прямом порядке и в обратном – с использованием обратных итераторов)
	//и результат работы функции.

	return 0;
}
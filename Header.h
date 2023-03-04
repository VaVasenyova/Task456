#pragma once
#include <vector>
#include <list>
#include <algorithm>


std::vector<int> sort2(std::vector<int>& vector) 
{
	std::vector<int> vecNew;//создание нового вектора

	while (!vector.empty())
	{
		if (vector.front() % 2 == 0)
		{
			vecNew.push_back(vector.front());
		}
		vector.erase(vector.begin());
	}
	return vecNew;
}

void function(std::vector<int>& vector, std::list<int>& list)
{
	int sizeX = vector.size() + list.size();
	std::vector<int> vector1;
	vector1.reserve(sizeX);
	vector1 = vector;

	while (!list.empty())
	{
		if (list.front() % 2 == 0)
		{
			vector1.push_back(list.front());
		}
		list.pop_front();
	}


	sort(vector1.begin(), vector1.end());

	for (int i = 0; i < vector1.size(); i++)
	{
		if (i != 0)
		{
			std::cout << "; ";
		}
		std::cout << vector1[i];
	}
}

#include <iostream>
#include "PmergeMe.hpp"
#include <cstdio>
#include <cstdlib>

int main(int ac, char **av)
{
	int *arr = new int[ac];
	long num;

	for (int i = 1; i < ac ; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (!std::isdigit(av[i][j]) || i > 10)
			{
				std::cerr << "Error" << std::endl;
				delete[] arr;
				return 1;
			}
		}
		num = std::atol(av[i]);
		if (num < 0 || num > 2147483647)
		{
			std::cerr << "Error" << std::endl;
			delete[] arr;
			return 1;
		}
		arr[i - 1] = static_cast<int>(num);
	}
	PmergeMe mergeSort;

	mergeSort.sort(arr, ac - 1);



	delete[] arr;
}

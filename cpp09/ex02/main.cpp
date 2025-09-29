#include <iostream>
#include "PmergeMe.hpp"
#include <cstdio>
#include <cstdlib>

int main(int ac, char **av)
{
	int *arr = new int[ac];

	for (int i = 0; i < ac -1; i++)
	{
		arr[i] = std::atoi(av[i + 1]);
	}
	PmergeMe mergeSort;

	mergeSort.sort(arr, ac - 1);

	//delete arr[];
}

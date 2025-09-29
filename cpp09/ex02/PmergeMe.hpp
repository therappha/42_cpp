#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cmath>

typedef struct Element
{
	std::vector<unsigned int> nums; // vector of numbers;
	unsigned int index; // index 1, 2 ,3 , 4 ,5
	char stack; //b or a;
} t_element;

class PmergeMe
{
	private:

		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator = (const PmergeMe& other);

		void dequeSort(std::deque<unsigned int> nums);
		void vectorSort(std::vector<unsigned int> nums);
		unsigned int calculateJacobsthalNum(unsigned int n);
		void swapToIncrement(std::vector<unsigned int>& nums, unsigned int index, unsigned int increment);

	public:
		PmergeMe();
		void sort(int *av, unsigned int size);
		~PmergeMe();



};

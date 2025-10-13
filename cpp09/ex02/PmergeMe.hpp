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


		unsigned int calculateJacobsthalNum(unsigned int n);

		std::deque<unsigned int> dequeSort(int currentLevel, std::deque<unsigned int>nums);
		void insertElement(int size, int stackindex, std::deque<unsigned int>& result, std::deque<unsigned int>& pend);
		std::deque<unsigned int> binary_insertion(int size, std::deque<unsigned int>& result, std::deque<unsigned int>pend);
		int binary_search(int size, int from, int to, unsigned int num, const std::deque<unsigned int>& result);
		void swapToIncrement(std::deque<unsigned int>& nums, unsigned int index, unsigned int increment);
		
		std::vector<unsigned int> vectorSort(int currentLevel, std::vector<unsigned int> nums);
		int binary_search(int size, int from, int to, unsigned int num, const std::vector<unsigned int>& result);
		void swapToIncrement(std::vector<unsigned int>& nums, unsigned int index, unsigned int increment);
		std::vector<unsigned int> binary_insertion(int size, std::vector<unsigned int>& result, std::vector<unsigned int> pend);
		void insertElement(int size, int stackindex, std::vector<unsigned int>& result, std::vector<unsigned int>& pend);

	public:
		PmergeMe();
		void sort(int *av, unsigned int size);
		~PmergeMe();



};

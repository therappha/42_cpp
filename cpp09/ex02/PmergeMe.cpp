#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}
void PmergeMe::dequeSort(std::deque<unsigned int> nums)
{
	(void) nums;
}
void PmergeMe::vectorSort(std::vector<unsigned int> nums)
{
	unsigned int odd = 0;
	bool hasodd = false;
	//step 1 pre organize our stack
	//lets assume our list is odd so we have 7, 2, 6 , 9, 16, 15 ,22 ,23, 37, 29 , 30, 3, 5
	//so 5 is left over to organize after everything
	if (nums.size() % 2 != 0)
	{
		odd = nums.back();
		nums.pop_back();
		hasodd = true;
	}
	if (odd || hasodd)
	{
		(void)odd;
	}
	//First iteration, swap numbers in chunks of two
	//7, 2, 6 , 9, 16, 15 ,22 ,23, 37, 29 , 30, 3 becomes:
	//[2, 7], [6, 9], [15, 16], [22, 23], [29, 37], [3, 30];

	//now lets start stacking or numbers into stacks of 4, in this case the 4th element will be the biggest always
	//in stacks of 8 the 8th element will be the biggest so we need to compare those only, it always increments as power of 2
	// so when increment > stack_size /2 it stops and goes to the step 2;
	for (unsigned int increment = 1; increment <= nums.size() / 2; increment <<= 1)
	{
		for (unsigned int i = increment - 1; i < nums.size(); i += increment * 2)
		{
			if (i +  increment < nums.size() && nums[i] > nums[i + increment])
			{
				swapToIncrement(nums, i - (increment - 1), increment);
			}
		}
	}
	for (std::vector<unsigned int>::const_iterator it = nums.begin(); it != nums.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "aqui!";
	std::cout << std::endl;
}

void PmergeMe::swapToIncrement(std::vector<unsigned int>& nums, unsigned int index, unsigned int increment)
{
	 for (unsigned int i = 0; i < increment; i++)
	 {
		std::swap(nums[index + i], nums[index + increment + i]);
	 }
}
unsigned int PmergeMe::calculateJacobsthalNum(unsigned int n)
{
    return static_cast<unsigned int>((std::pow(2, n) - std::pow(-1, n)) / 3);
}


void PmergeMe::sort(int *av, unsigned int size)
{
	std::vector<unsigned int> vector_nums;
	//std::deque<unsigned int> deque_nums;

	for (unsigned int i = 0; i < size; i++)
	{
		vector_nums.push_back(static_cast<unsigned int>(av[i]));
		//deque_nums.push_back(av[i]);

		

	}
	vectorSort(vector_nums);
}


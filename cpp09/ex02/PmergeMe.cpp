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
std::vector<unsigned int> PmergeMe::vectorSort(int currentLevel, std::vector<unsigned int> nums)
{
    unsigned int odd = 0;
	bool hasodd = false;
	bool alternate = true;
  	unsigned int increment = 1 << currentLevel;
	std::vector <unsigned int> result;
	std::vector <unsigned int> pend;

    if (increment > nums.size() / 2)
	{
		return (nums);
	}
	if (nums.size() % 2 != 0)
	{
		odd = nums.back();
		nums.pop_back();
		hasodd = true;
		std::cout << "Has odd" << std::endl;
	}
	if (odd || hasodd)
	{
		(void)odd;
	}
  
    // for (unsigned int i = increment - 1; i < nums.size(); i += increment * 2)
	// {
	// 	if (i +  increment < nums.size() && nums[i] > nums[i + increment])
	// 	{
	// 		swapToIncrement(nums, i - (increment - 1), increment);
	// 	}
	// }


    // nums = vectorSort(currentLevel + 1, nums);
	//8 10 9 13 2 7 11 20 1 3 5 6 14 17 15 

	
	unsigned int j = 0;
	if (currentLevel == 0)
	{
		increment = 1;
	}
	unsigned int i = 0;
	while (1)
	{
		if (j == increment )
		{
			alternate = !alternate;
			i += increment;
			j = 0;
		}
		if (nums.size() - i < increment)
			break;
		if (i < increment * 2)
		{
			result.push_back(nums[i]);
		}
		else if (alternate)
		{
			pend.push_back(nums[i + j++]);
			continue;
		}
		else
		{
			result.push_back(nums[i + j++]);
			continue;
		}
		i++;
	}

	result = binary_insertion(increment, result, pend);

	while (i < nums.size())
	{
		result.push_back(nums[i++]);
	}
	std::cout << std::endl;
	if (hasodd)
	{
		result.push_back(odd);
	}
    return result;

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


vector<unsigned int> PmergeMe::binary_insertion(int size, std::vector<unsigned int>& result, std::vector<unsigned int> pend)
{
	int elementcount = 0;
	while (pend.size() != 0)
	{
		elementcount = nums.size() / size;

	}
	
	
	*/
	(void)nums;
	(void )result;
	(void)size;
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
	
	vector_nums = vectorSort(0, vector_nums);
	std::cout << "\nFinal Result ";
    for (unsigned int i = 0; i < vector_nums.size(); i++)
    {
         std::cout << vector_nums[i] << " ";
    }
    std::cout << std::endl;
       
}


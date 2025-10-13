#include "PmergeMe.hpp"

// Forward declaration for binary_search function
int binary_search(int size, int from, int to, unsigned int num, const std::vector<unsigned int>& result);

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}

std::deque<unsigned int> PmergeMe::dequeSort(int currentLevel, std::deque<unsigned int>nums)
{
	unsigned int odd = 0;
	bool hasodd = false;
	bool alternate = true;
  	unsigned int increment = 1 << currentLevel;
	std::deque <unsigned int> result;
	std::deque <unsigned int> pend;

    if (increment > nums.size() / 2)
	{
		return (nums);
	}
	if (nums.size() % 2 != 0)
	{
		odd = nums.back();
		nums.pop_back();
		hasodd = true;
	}

    for (unsigned int i = increment - 1; i < nums.size(); i += increment * 2)
	{
		if (i +  increment < nums.size() && nums[i] > nums[i + increment])
		{
			swapToIncrement(nums, i - (increment - 1), increment);
		}
	}


    nums = dequeSort(currentLevel + 1, nums);
	
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
	if (hasodd)
	{
		if (result.back() <= odd)
			result.push_back(odd);
		else
		{
			std::deque<unsigned int>::iterator it = result.begin() + binary_search(1, 0, result.size() - 1, odd, result);
			result.insert(it, odd);
		}
	}
    return result;

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
	}
  
    for (unsigned int i = increment - 1; i < nums.size(); i += increment * 2)
	{
		if (i +  increment < nums.size() && nums[i] > nums[i + increment])
		{
			swapToIncrement(nums, i - (increment - 1), increment);
		}
	}
    nums = vectorSort(currentLevel + 1, nums);
	
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
	if (hasodd)
	{
		if (result.back() <= odd)
			result.push_back(odd);
		else
		{
			std::vector<unsigned int>::iterator it = result.begin() + binary_search(1, 0, result.size() - 1, odd, result);
			result.insert(it, odd);
		}
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

int PmergeMe::binary_search(int size, int from, int to, unsigned int num, const std::vector<unsigned int>& result)
{
    if (from >= to)
        return from;

    int mid = (from + to) / 2;

    unsigned int mid_value = result[(mid + 1) * size - 1];

    if (num < mid_value)
        return binary_search(size, from, mid, num, result);
    else
        return binary_search(size, mid + 1, to, num, result);
}

std::vector<unsigned int> PmergeMe::binary_insertion(int size, std::vector<unsigned int>& result, std::vector<unsigned int> pend)
{
	int last_jacob = 1;
	int current_jacob = 3;
	int pendElementCount = pend.size() / size;
	int resultElementCount = result.size() / size;
	int i = 3;

	while (pend.size() != 0)
	{
		if (current_jacob - last_jacob > pendElementCount)
		{
			while (pendElementCount > 0)
			{
				insertElement(size, pendElementCount - 1, result, pend);
				pendElementCount--;
			}
		}
		else
		{
			for (int i = 0; i < current_jacob - last_jacob; i++)
				insertElement(size, current_jacob - last_jacob - 1 - i, result, pend);
		}
		pendElementCount = pend.size() / size;
		resultElementCount = result.size() / size;
		
		int temp = current_jacob;
		current_jacob = calculateJacobsthalNum(i++);
		last_jacob = temp;
	}
	return result;
}

void PmergeMe::insertElement(int size, int stackindex, std::vector<unsigned int>& result, std::vector<unsigned int>& pend)
{

	if (pend.empty() || stackindex < 0 || stackindex * size >= (int)pend.size())
		return;

	std::vector<unsigned int> elements_to_insert;
	int start_pos = stackindex * size;
	
	for (int i = 0; i < size && start_pos + i < (int)pend.size(); i++)
	{
		elements_to_insert.push_back(pend[start_pos + i]);
	}
	pend.erase(pend.begin() + start_pos, pend.begin() + start_pos + elements_to_insert.size());

	unsigned int key_element = elements_to_insert.back();
	int insertion_pos = binary_search(size, 0, result.size() / size, key_element, result);

	int insert_index = insertion_pos * size;

	for (int i = 0; i < (int)elements_to_insert.size(); i++)
	{
		result.insert(result.begin() + insert_index + i, elements_to_insert[i]);
	}
}

void PmergeMe::swapToIncrement(std::deque<unsigned int>& nums, unsigned int index, unsigned int increment)
{
	 for (unsigned int i = 0; i < increment; i++)
	 {
		std::swap(nums[index + i], nums[index + increment + i]);
	 }
}


int PmergeMe::binary_search(int size, int from, int to, unsigned int num, const std::deque<unsigned int>& result)
{
    if (from >= to)
        return from;
	 
    int mid = (from + to) / 2;

    unsigned int mid_value = result[(mid + 1) * size - 1];

    if (num < mid_value)
        return binary_search(size, from, mid, num, result);
    else
        return binary_search(size, mid + 1, to, num, result);
}

std::deque<unsigned int> PmergeMe::binary_insertion(int size, std::deque<unsigned int>& result, std::deque<unsigned int>pend)
{
	int last_jacob = 1;
	int current_jacob = 3;
	int pendElementCount = pend.size() / size;
	int resultElementCount = result.size() / size;
	int i = 3;

	while (pend.size() != 0)
	{
		if (current_jacob - last_jacob > pendElementCount)
		{
			while (pendElementCount > 0)
			{
				insertElement(size, pendElementCount - 1, result, pend);
				pendElementCount--;
			}
		}
		else
		{
			for (int i = 0; i < current_jacob - last_jacob; i++)
				insertElement(size, current_jacob - last_jacob - 1 - i, result, pend);
		}
		pendElementCount = pend.size() / size;
		resultElementCount = result.size() / size;
		
		int temp = current_jacob;
		current_jacob = calculateJacobsthalNum(i++);
		last_jacob = temp;
	}
	return result;
}

void PmergeMe::insertElement(int size, int stackindex, std::deque<unsigned int>& result, std::deque<unsigned int>& pend)
{

	if (pend.empty() || stackindex < 0 || stackindex * size >= (int)pend.size())
		return;

	std::deque<unsigned int>elements_to_insert;
	int start_pos = stackindex * size;
	
	for (int i = 0; i < size && start_pos + i < (int)pend.size(); i++)
	{
		elements_to_insert.push_back(pend[start_pos + i]);
	}
	pend.erase(pend.begin() + start_pos, pend.begin() + start_pos + elements_to_insert.size());

	unsigned int key_element = elements_to_insert.back();
	int insertion_pos = binary_search(size, 0, result.size() / size, key_element, result);

	int insert_index = insertion_pos * size;

	for (int i = 0; i < (int)elements_to_insert.size(); i++)
	{
		result.insert(result.begin() + insert_index + i, elements_to_insert[i]);
	}
}

void PmergeMe::sort(int *av, unsigned int size)
{

	struct timespec start = {0};
	struct timespec end = {0};

	double time;

	std::vector<unsigned int> vector_nums;
	std::deque<unsigned int>deque_nums;
	unsigned int i;
	std::cout << "Before: ";
	for (i = 0; i < size; i++)
	{
		vector_nums.push_back(static_cast<unsigned int>(av[i]));
		deque_nums.push_back(static_cast<unsigned int>(av[i]));
		if (i < 100)
		{
			std::cout << av[i] << " ";
		}
	}
	if (i > 100)
	{
		std::cout << "[...]";
	}
	std::cout << std::endl;

	clock_gettime(CLOCK_MONOTONIC, &start);
	vector_nums = vectorSort(0, vector_nums);
	clock_gettime(CLOCK_MONOTONIC, &end);

	time = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_nsec - start.tv_nsec) / 1000.0;

	std::cout << "After: ";
    for (i = 0; i < vector_nums.size(); i++)
    {
		if (i < 100)
        	std::cout << vector_nums[i] << " ";
    }
	if (i > 100)
	{
		std::cout << "[...]";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << size << " elements with std::vector : " << time << " us" << std::endl;

	clock_gettime(CLOCK_MONOTONIC, &start);
	deque_nums = dequeSort(0, deque_nums);
	clock_gettime(CLOCK_MONOTONIC, &end);

	time = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_nsec - start.tv_nsec) / 1000.0;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << time << " us" << std::endl;
       
}


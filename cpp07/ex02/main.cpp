 #include <iostream>
 #include <Array.hpp>
 #define MAX_VAL 750

int	main(void)
{
    Array<int> myarray(25);
    for (int i = 0; i < 25; i++)
    {
        myarray[i] = i;
    }
    for (int i = 0; i < 25; i++)
    {
        std::cout << myarray[i] << " ";
    }
    std::cout << "\n" << std::endl;
    try
    {
        myarray[-1];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    try
    {
        myarray[25];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }

    Array<int> myotherarray = myarray;

    std::cout << myotherarray[20] << std::endl;

    std::cout << std::endl;

	 Array<int> numbers(MAX_VAL);
	 int* mirror = new int[MAX_VAL];
	 srand(time(NULL));
	 for (int i = 0; i < MAX_VAL; i++)
	 {
		 const int value = rand();
		 numbers[i] = value;
		 mirror[i] = value;
	 }
	 //SCOPE
	 {
		 Array<int> tmp(25);
		 tmp = numbers;
		 Array<int> test(tmp);
	 }

	 for (int i = 0; i < MAX_VAL; i++)
	 {
		 if (mirror[i] != numbers[i])
		 {
			 std::cerr << "didn't save the same value!!" << std::endl;
			 return 1;
		 }
	 }
	try
	{
	    numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	 }

	 for (int i = 0; i < MAX_VAL; i++)
	 {
		 numbers[i] = rand();
	 }
	 delete [] mirror;//
	 return 0;
}

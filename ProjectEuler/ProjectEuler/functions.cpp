#include <iostream>
#include "functions.h"



void sumOfMultiple()
{

	int t, f,tf;
	int t_total = 0;
	int f_total = 0;
	int tf_total = 0;
	int total = 0;

	for (t = 3; t < 1000; t += 3) {
		t_total = t_total + t;
		std::cout << "" << t << std::endl;
		std::cout << "t_total: " << t_total << std::endl;
	}
	

	for (f = 5; f < 1000; f += 5) {
		f_total = f_total + f;
		std::cout << "" << f << std::endl;
		std::cout << "f_total: " << f_total << std::endl;
	}
	
	for (tf = 15; tf < 1000; tf += 15) {
		tf_total = tf_total + tf;
		std::cout << "" << tf << std::endl;
		std::cout << "tf_total: " << tf_total << std::endl;
	}

	total = t_total + f_total - tf_total;
	std::cout << "total: " << total << std::endl;

	system("pause");
}

void evenFibonacciNumbers() {

	int fib_1 = 1, fib_2 = 2, new_fib = 0, even_fib = 0;
	int total = fib_2;
	
	for (int i = 1; i <= 100; ++i)
	{
		if (i == 1)
		{
			std::cout << "" << fib_1;
			continue;
		}
		if (i == 2)
		{
			std::cout << " " << fib_2 << " ";
			continue;
		}

		new_fib = fib_1 + fib_2;

		if (new_fib > 4000000) {
			break;
		}
		else {
			fib_1 = fib_2;
			fib_2 = new_fib;
			}
		std::cout << new_fib << " ";
	
		if (new_fib % 2 == 0) {
			even_fib = new_fib;
			total = total + even_fib;
		}
		
	}

	std::cout << "Total: " << total;
	
	system("pause");
}

void largestPrimeFactor() {

	long long int num;
	long long int factor;
	long long int largest;
	int count;

	std::cout << "Give em a number" << std::endl;
	std::cin >> num;

	for (factor = 1; factor <= num; factor++)
	{
		if (num % factor == 0)
		{
			count = 0;
			for (int primetest = 2; count == 0 && factor > primetest; primetest++)
			{
				if (factor % primetest == 0)
					count++;
				
			}
			if (count == 0)
				largest = factor;
			std::cout << largest << std::endl;

		}
	}
	system("pause");
}

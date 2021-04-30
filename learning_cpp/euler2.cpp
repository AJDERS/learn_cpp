/*
 * euler1.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: ajders
 */
#include <iostream>
#include <cmath>

int fibonacci_next(int first, int second){
	return first+second;
}

void euler2(int n)
{
	int sum{ 0 };
	int first{ 1 };
	int second{ 2 };
	int new_value{ 0 };

	sum += second;
	while (new_value < n){
		new_value = fibonacci_next(first, second);
		if (new_value % 2 == 0){
			sum += new_value;
		}
		first = second;
		second = new_value;
	}
	std::cout << "The sum of even terms of the Fibonacci sequence below " << n
			  << " is " << sum << "\n";
}


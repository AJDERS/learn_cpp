/*
 * euler1.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: ajders
 */
#include <iostream>
#include <cmath>

void euler1(int n)
{
	int sum = 0;
	for (int count{ 0 }; count < n; count++ ){
		if (count % 5 == 0 || count % 3 == 0){
			sum += count;
		}
	}
	std::cout << "The sum of all multiples of 3 or 5 below " << n << " is " << sum << "\n";
}


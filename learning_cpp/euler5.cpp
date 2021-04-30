/*
 * euler1.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: ajders
 */
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isEvenlyDivisible(int n, int current_int){
	for (int i{ 2 }; i<n+1; i++){
		if (current_int % i != 0){
			return false;
		}
	}
	return true;
}

void euler5(int n)
{
	int has_all_divs{ 0 };
	int current_int{ 1 };
	while (true){
		if (isEvenlyDivisible(n, current_int)){
			has_all_divs = current_int;
			break;
		}
		current_int += 1;
	}
	cout << "The smallest positive number that is evenly divisible by all of "
			"the numbers from 1 to 20, is: " << has_all_divs << "\n";
}


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

bool isPrime(int n){
	if (n <= 3){
		return n > 1;
	}
	if (n % 2 == 0 || n % 3 == 0){
		return false;
	}
	int i{ 5 };
	while((i * i) <= n){
		if (n % i == 0 || n % (i + 2) == 0){
			return false;
		} else {
			i += 6;
		}
	}
	return true;
}

void euler3(long long int n)
{
	int largest_factor{ 0 };
	double tmp{ ceil(sqrt(n)) };
	int ints_to_check{ (int) tmp };

	// Checking two is a factor.
	if (n % 2 == 0){
		largest_factor = 2;
	}

	// Find all factors, except even.
	// Since we have checked two, we don't need to check other evens.
	for (int i{ 3 }; i < ints_to_check; i++, i+=1){
		// Check if a prime factor.
		if (n % i == 0 && isPrime(i)){
			largest_factor = i;
		}
	}

	cout << "The largest prime factor of the number " << n
			  << " is " << largest_factor << "\n";
}


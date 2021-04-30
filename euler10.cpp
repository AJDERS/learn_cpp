/*
 * euler1.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: ajders
 */
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


bool isPrime(int n);


void euler10(int n)
{
	long long int sum{ 0 };
	for (int i{ 1 }; i < n; i++){
		if (isPrime(i)){
			sum += i;
		}
	}
	cout << "The sum of all the primes below "<< n << " is: " << sum << "\n";

}


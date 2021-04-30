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

bool isPrime(int n);

void euler7(int n)
{
	int nprime { 0 };
	int number_of_primes{ 0 };
	while (number_of_primes < n){
		nprime += 1;
		if (isPrime(nprime)){
			number_of_primes += 1;
		}
	}
	cout << "The " << n << "st prime number is: " << nprime << "\n";
}


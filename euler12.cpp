/*
 * euler1.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: ajders
 */
#include <iostream>
#include <cmath>
#include <string>
#include <map>

using namespace std;

map<int, int> primeFactorize(int n){
	int p{ 2 };
	map<int, int> dict;
	while(p * p <= n){
		if ( n % p == 0){
			// check if p is already a factor
			if ( dict.find(p) == dict.end() ) {
			  dict[p] = 1;
			} else {
			  dict[p] += 1;
			}
			n = n/p;
		} else {
			p += 1;
		}
	}
	if ( dict.find(n) == dict.end() ) {
	  dict[n] = 1;
	} else {
	  dict[n] += 1;
	}
	return dict;
}

int numberOfDivisors(int n){
	map<int, int> prime_factors = primeFactorize(n);
	int result{ 1 };
	for (int i{ 0 }; i < prime_factors.size(); i++){
		//cout << i << ": " << prime_factors[i] << "\n";
		if (prime_factors[i] != 0){
			result *= (prime_factors[i]+1);
		}
	}
	return result;
}

void euler12(int n)
{
	int triangle_num{ 1 };
	int num_divisors{ 1 };
	int i{ 2 }; // index of term in series of triangle numbers.
	while(true){
		//cout << "triangle_num: " << triangle_num << "\n";
		num_divisors = numberOfDivisors(triangle_num);
		//cout << "num_divisors: " << num_divisors << "\n\n";

		if (num_divisors < n){
			triangle_num = (i*(i + 1)/2); // calculate next triangle number.
			i += 1;
		} else {
			break;
		}
	}

	cout << "The first triangle number with over " << n << " divisors is: " << triangle_num << "\n";
}


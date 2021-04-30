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


bool is_integer(float k)
{
  return std::floor(k) == k;
}

void euler9(int n)
{
	int true_a{ 0 };
	int true_b{ 0 };
	int true_c{ 0 };
	int product{ 0 };
	for (int a{ 1 }; a < 1000; a++){
		for (int b{ 1 }; b < 1000; b++){
			float c = sqrt(a*a + b*b);
			if (is_integer(c) && a+b+c == n){
				true_a = a;
				true_b = b;
				true_c = c;
				product = a * b * c;
				break;
			}
		}
	}

	cout << "The Pythagorean triplet for which a + b + c = 1000. is: " << true_a
		 << ", " << true_b << ", " << true_c << ". and their product is: " << product << "\n";

}


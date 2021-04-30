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

void euler6(int n)
{

	int diff {0};
	int sum { (n * (n + 1)) / 2 };
	int square_of_sum {sum * sum};

	int sum_of_squares { 0 };
	for (int i { 1 }; i<=n; i++){
		sum_of_squares += i*i;
	}
	diff = square_of_sum - sum_of_squares;
	cout << "The difference between the sum of the squares of the first one "
			<< n << " natural numbers and the square of the sum is:"
			" " << diff << "\n";
}


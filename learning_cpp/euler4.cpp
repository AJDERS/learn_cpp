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

bool isPalindrome(int product)
{
	string prod_as_str = to_string(product);
	string og_prod_as_str = prod_as_str;
	int n = prod_as_str.length();
	for (int i = 0; i < n / 2; i++)
		swap(prod_as_str[i], prod_as_str[n - i - 1]);
	return prod_as_str.compare(og_prod_as_str) == 0;
}
void euler4()
{
	int largest_palindrome{ 0 };
	int product{ 0 };
	for (int i{999}; i>99; i--){
		for (int j{999}; j>99; j--){
			product = i * j;
			if (isPalindrome(product) && product > largest_palindrome){
				largest_palindrome = product;
			}
		}
	}
	cout << "The largest palindrome made from the product"
			" of two 3-digit numbers is: " << largest_palindrome << "\n";
}


/*
Given a number N, print sum of all even numbers from 1 to N.
*/

#include<iostream>
using namespace std;


int main(){
	int n, sum = 0, i = 0;
	cin >> n;
	while (i <= n) {
			sum += i;
			i += 2;
	}
	cout << sum;  
}
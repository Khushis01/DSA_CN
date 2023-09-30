/*
Write a program to print multiplication table of n
*/

#include<iostream>
using namespace std;

int main() {
	int n, i = 1;
	cin >> n;
	// Write your code here
	while (i <= 10) {
		cout << n * i << endl ;
		i += 1;
	}
	
}

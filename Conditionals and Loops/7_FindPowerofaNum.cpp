/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1

Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)

Sample Input 1 :
 3 4
Sample Output 1 :
81
*/

#include<iostream>
using namespace std;

void prefixSum(int arr[],int n,int output[]){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        output[i] = sum;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}
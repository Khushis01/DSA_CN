//moving all the zeros to the end of the array
#include<iostream>
using namespace std;
int main() {
    int n, k = 0, t;
    cin >> t; 

    while(t > 0) {
        cin >> n;
        int *arr = new int[n];
        int *ar = new int[n];

    for(int i = 0; i < n ; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n ; i++) {
        if(arr[i] != 0) {
            ar[k] = arr[i];
            k++;
        } 
    }
    
    //write your code here
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }

    delete []ar;
    delete []arr;
    
    t--;
    }
}
#include<bits/stdc++.h>
using namespace std;

/*
5
1 2 4 5 6
5
1 
2 
3 
11
7

*/

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        //fetch
        cout << hash[number] << endl << endl;
    }
}
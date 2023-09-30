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

    map <int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        //fetch
        cout << mpp[number] << endl << endl;
    }
}
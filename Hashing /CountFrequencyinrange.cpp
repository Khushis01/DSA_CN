/*
You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.
Count the frequency of all elements from 1 to n.

Sample Input 1:
6 4
1 3 4 3 4 1
Sample Output 1:
2 0 2 2 0 0
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    // Create a vector 'ans' of size n initialized with zeros to store the frequencies.
    vector<int> ans(n, 0);

    // Traverse the input array 'nums'.
    for (int num : nums)
    {
        // Check if the element 'num' is within the range of 1 to n.
        if (num <= n)
        {
            // Increment the frequency of 'num' in 'ans'.
            ans[num - 1]++;
        }
    }

    // Return the vector 'ans' containing the frequencies.
    return ans;
}

int main() {

}
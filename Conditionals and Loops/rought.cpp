#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;
}


/*
int main() {
    int n = 4;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for(int k = 0; k < i + 1; k++) {
            cout << char('A' + k);
        }

          for(int m = i; m > 0; m--) {
            cout << char('A' + m - 1);

            
            //for(int m = 0; m < i; m++) {
            //cout << char('A' + i - m - 1);
            
           
        }
        cout << endl;


    }
}

*/

/*
vector<int> findTargetSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int current_sum = nums[left] + nums[right];

        if (current_sum == target) {
            return {nums[left], nums[right]};
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    sort(nums.begin(), nums.end());
    vector<int> result = findTargetSum(nums, target);

    if (!result.empty()) {
        cout << "Pair found: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "Pair not found" << endl;
    }

    return 0;
}

*/

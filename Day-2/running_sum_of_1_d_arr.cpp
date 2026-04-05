#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int sum = 0;

    while(i < n)
    {
        sum += nums[i];
        nums[i] = sum;
        i++;
    }
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = runningSum(nums);

    cout << "Running Sum: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
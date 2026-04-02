#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<pair<int,int>> arr;

    for(int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }

    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;

    while(i < j)
    {
        int PS = arr[i].first + arr[j].first;

        if(PS == target)
        {
            return {arr[i].second, arr[j].second};
        }
        else if(PS < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if(!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
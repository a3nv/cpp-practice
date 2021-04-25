//
// Created by Ivan Asonov on 06.02.2021.
//
using namespace std;

#include <vector>
#include <iostream>
#include <random>

class Solution {
    vector<int> original;
    vector<int> nums;

public:

    explicit Solution(const vector<int> &nums) : nums(nums) {
        this->original = nums;
        this->nums = nums;
    }

    vector<int> reset() {
        return original;
    }

    vector<int> shuffle() {
        std::random_device rd;
        for (int i = 0; i < original.size(); i++) {
            int index = rd() % original.size() + i;
            int temp = nums[i];
            nums[i] = nums[index];
            nums[index] = temp;
        }
        return nums;
    }
};

int main() {
    static const int arr[] = {16, 2, 77, 29};
    Solution solution({16, 2, 77, 29});
    vector<int> res = solution.shuffle();
    cout << "res" << std::endl;
    for (int i = 0; i <= res.size() - 1; i++) {
        cout << res[i] << "\n";
    };
}
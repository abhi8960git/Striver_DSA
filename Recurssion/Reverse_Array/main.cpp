#include <iostream>
#include <vector>

std::vector<int> reverseArray(int n, std::vector<int> &nums) {
    std::vector<int> reverseArray;
    
    for(int i = nums.size() - 1; i >= 0; i--) {
        reverseArray.push_back(nums[i]);
    }

    return reverseArray;
}

int main() {
    // Example usage:
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::vector<int> reversed = reverseArray(nums.size(), nums);

    std::cout << "Original Array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Reversed Array: ";
    for (int num : reversed) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

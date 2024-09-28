//Leetcode Solution Submit Code successfully.....
//If u run this code in vscode or any other online editor without main funcion , not working....
//First you understand and after u simply run this code with some modificatin...

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; // to store the number and its index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // calculate the needed complement
            if (numMap.find(complement) != numMap.end()) {
                // if complement exists, return the indices
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i; // store the index of the current number
        }

        return {}; // return an empty vector if no solution is found
    }
};


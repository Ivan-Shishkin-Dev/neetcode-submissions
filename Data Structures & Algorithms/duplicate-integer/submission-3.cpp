class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> numbers;
        for (int i = 0; i < nums.size(); ++i){
            numbers[nums[i]] += 1;
            if (numbers[nums[i]] >= 2) return true;
        }
        return false;
    }
};
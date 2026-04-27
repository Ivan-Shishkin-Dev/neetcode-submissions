class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numbers;
        
        int difference = 0;
        //Populating the array
        for (int i = 0; i < nums.size(); ++i) {
            difference = target - nums[i];  
            if (numbers.contains(difference)){
                std::vector<int> answer = {numbers[difference], i};
                return answer;
            } else {
                numbers[nums[i]] = i; 
            }

        }

    }
};

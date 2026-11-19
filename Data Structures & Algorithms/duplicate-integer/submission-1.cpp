class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        std::set<int> mySet;
        for (int i = 0; i < size; i++){
            mySet.insert(nums[i]);
        }
        return mySet.size()< size;
    }
};

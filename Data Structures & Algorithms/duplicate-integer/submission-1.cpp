class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int> u1;
        for(int i = 0 ; i < nums.size() ; i++){
            u1[nums[i]]++;
        }   
        for (auto & it : u1){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};
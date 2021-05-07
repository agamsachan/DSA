class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            for(int j = i + 1; j < nums.size(); j++){
                
                sum = nums[i] + nums[j];
                
                if(sum == target){
                    indices.push_back(i);
                    indices.push_back(j);
                    break;
                }
                if(sum == target)
                    break;
            }
        }
        
        return indices;
    }
};
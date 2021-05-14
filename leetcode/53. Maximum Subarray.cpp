class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxElement = *max_element(nums.cbegin(), nums.cend());
        
        if(maxElement < 0){
            return maxElement;
        }
        
        else{
        
        int maxSum = 0, sum = 0;
        
        for(auto i : nums){
            sum += i;
            if(sum < 0){
                sum = 0;
            }
            else if (sum > maxSum){
                maxSum = sum;
            }
        }
        
        return maxSum;
        
        }
    }
};

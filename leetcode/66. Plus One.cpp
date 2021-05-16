class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        digits[length-1] += 1;
        
        for(int i = length - 1; i > 0; i--){
            if(digits[i] > 9){
                digits[i] = 0;
                digits[i - 1] += 1;
            }
        }
        
        if(digits[0] > 9){
            digits[0] = 1;
            digits.push_back(0);
        }
        
        return digits;
    }
};

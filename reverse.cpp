class Solution {
public:
    int reverse(int x) {
        
        long long int r = 0;
        
        while(x != 0){
            r = r*10 + x%10;
            // cout << r << " ";
            x /= 10;
        }
        
        if(r < int(pow(-2,31)) || r > int(pow(2,31) - 1)){
            return 0;
        }
        
        return r;
        
    }
};
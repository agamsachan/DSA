class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> umap;
        
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        
        int sum = 0;
        
        // cout << umap.at('I') << " ";
        
        for(int i = 0; i < s.length()-1; i++ ){
            
            if(umap.at(s[i]) < umap.at(s[i+1])){
                sum = sum - umap.at(s[i]);
            }
            else{
                sum = sum + umap.at(s[i]);
            }
            
        }
        
        return (sum + umap.at(s[s.length()-1]));
        
    }
};
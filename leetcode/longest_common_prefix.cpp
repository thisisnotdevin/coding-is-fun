class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    
        string s="";
        if(strs.size()==1 || strs[0].empty()){
            return strs[0];
        }
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>strs[j].length()){
                    return s;
                }
                if(strs[j][i]!=ch){
                    return s;   
                }
            }
            s.push_back(ch);
        }
        return s;
    
    }
};
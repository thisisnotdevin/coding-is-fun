class Solution {
public:
       int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
 
        int ans=0;
        int x=0;
        for(int i =0; i <boxTypes.size();i++)
        {
            ans=min(boxTypes[i][0],truckSize);
            truckSize-=ans;
            x+=(ans*boxTypes[i][1]);
            
            if(truckSize==0)
                break;
        }
        return x;
    }

};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto y:m){
            if(y.second>=2){
                return true;
            }
        }
        return false;
    }
};
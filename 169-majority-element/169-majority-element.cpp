class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(int list:nums){
            if(count==0){
                candidate=list;
                }
            if(candidate==list){
                count+=1;}
            
            else {
                count-=1;
            }
            }
            return candidate;
        }
        
    
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();
        
        int start=0;
        int end= row*col-1;
        int mid= start +(end-start)/2;
        
        while(start<=end){
          int  midelement= matrix[mid/col][mid%col];
            
            if(midelement==target){
                return 1;
            }
            if(midelement<target){
                start =mid+1;
            }
            else{
                end=mid-1;
            }
            
              mid=start+(end-start)/2;   
        }
        return 0;
        
    }
};
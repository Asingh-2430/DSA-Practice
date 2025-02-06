class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, maxcount=0;
        //since we are going to traverse the array in an single line
        //we will store the val as we go
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                //this is the final evaluation 
                if(count>maxcount){
                    maxcount=count;

                }
                count=0;
                
            }
        }
        if(count>maxcount){
            return count;

        }
        return maxcount;

        
    }
};

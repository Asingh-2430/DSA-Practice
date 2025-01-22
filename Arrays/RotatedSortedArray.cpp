class Solution {
public:
    bool check(vector<int>& nums) {
        //now we will see the number of pairs that are there 
        int count =0;
        for(int i =1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
            //while also considering the case when the last element is greater than the first element
            if(nums[nums.size()-1]>nums[0]){
                count++;
            }
            return count<=1;

        }
        
    
};

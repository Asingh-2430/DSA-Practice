class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //we will consider 2 pointers that will be left and right
        int left=0,right=0;
        while(right<nums.size()){
            if(nums[right]==0){
                right++;

            }
            else{
                int temp = nums[right];
                nums[right]=nums[left];
                nums[left]=temp;
                left++;
                right++;
            }
        }
        
    }
};

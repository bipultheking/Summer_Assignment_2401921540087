class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low = 1;
         int result = 1;
        int n = nums.size();
        if(n<=1){
            return n;
        }
        else{
            for(int i =1;i<n;i++){
                if(nums[i]==nums[i-1]){
                    continue;
                }else{
                    nums[low]= nums[i];
                    low++;
                    result++;
                }

            }
        }return result;
        
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        //only negative element
        if(pos.size()==0){
            for(i=0;i<n;i++){
                nums[i]=nums[i]*nums[i];
            }
            reverse(nums.begin(),nums.end());
            return nums;
        }
        //only positive eelement
        else if(neg.size()==0){
            for(i=0;i<n;i++){
                nums[i]=nums[i]*nums[i];
            }
            // reverse(nums.begi(),nums.end());
            return nums;
        }
        //for negative and positive both
        else { for(i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }for(i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            int i=0;
            int j=0;
            
            vector<int>res;
            
            while(i<pos.size() && j<neg.size()){
                if(pos[i]<neg[j]){
                    res.push_back(pos[i]);
                     
                    
                    i++;
                }
                else{
                    res.push_back(neg[j]);
                    
                    j++;
                }
            }
            while(i<pos.size()){
                 res.push_back(pos[i]);
                i++;
            }
            while(j<neg.size()){
                res.push_back(neg[j]);
                j++;
            }
            return res;

        }
        


        
    }
};
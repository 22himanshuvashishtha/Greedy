class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool flag=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                flag=false;
            }
        }
        if(flag==true)return 0;
        else
        return 1;
    }
};

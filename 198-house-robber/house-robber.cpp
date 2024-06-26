class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = nums[0];
        int prev2=0;

        for(int i=1;i<nums.size();i++)
        {
            int take = nums[i];
            if(i>1) take+=prev2;

            int nottake = 0 + prev1;

            int curri = max(take,nottake);
            prev2=prev1;
            prev1=curri;
        }
        return prev1;
    }
};
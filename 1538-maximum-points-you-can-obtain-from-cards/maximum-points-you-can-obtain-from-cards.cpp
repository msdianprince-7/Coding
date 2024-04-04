class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int leftsum=0;
        int rightsum=0;
        int maxsum=0;

        for(int i=0;i<=k-1;i++)
        {
            leftsum = leftsum+arr[i];
            maxsum = leftsum;
        }
        int rightIndex = arr.size()-1;

        for(int i=k-1;i>=0;i--)
        {
            leftsum= leftsum-arr[i];
            rightsum =  rightsum+arr[rightIndex];
            rightIndex = rightIndex-1;

            maxsum = max(maxsum,leftsum+rightsum);
        }

    return maxsum;

    }
};
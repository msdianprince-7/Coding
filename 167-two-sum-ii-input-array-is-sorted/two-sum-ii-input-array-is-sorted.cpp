class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0;
        int j = num.size()-1;

        int n = num.size();
        vector<int> result;

        while(i<j)
        {
            int sum = num[i]+num[j];

              if(sum>target) j--;
              else if(sum<target) i++;
              else{
                   result.push_back(i+1);
                   result.push_back(j+1);

                   break;
              }
        }
        return result;
    }
};
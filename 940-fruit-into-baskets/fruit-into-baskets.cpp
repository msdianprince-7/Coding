class Solution {
public:
    int totalFruit(vector<int>& a) {
        int l=0,r=0,maxlen=0;
        map<int,int>mpp;
        int n=a.size();

        while(r<n)
        {
            mpp[a[r]]++;
            
            if(mpp.size()<=2)
            {
                maxlen=max(maxlen,r-l+1);

            }
            else
            {
                mpp[a[l]]--;
                if(mpp[a[l]]==0) mpp.erase(a[l]);
                l++;
            }
            r++;
        }
        return maxlen;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> mpp;

        for(int i = 0;i<n;i++) {
            mpp[nums[i]]++;
            }

        vector<vector<int>> buckets(n+1);

        for(auto i = mpp.begin();i!=mpp.end();i++)
        {
            buckets[i->second].push_back(i->first);
        }

        vector<int> result;

for (int i = nums.size(); i >= 0; i--) {
    if (result.size() >= k) {
        break;
    }
    if (!buckets[i].empty()) {
        result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }
}
        return result;
       
    }
};
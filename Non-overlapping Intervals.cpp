class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
        vector<pair<int,pair<int,int>>>v;
        for(int i=0;i<n;i++){
            v.push_back({i, {intervals[i][0], intervals[i][1]}});
        }
        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second.second < b.second.second;
        });
        int lasttime = v[0].second.second;
        for(int i=1;i<n;i++){
            int currenttime = v[i].second.first;
            if(currenttime < lasttime){
                count++;
            }else{
                lasttime=v[i].second.second;
            }
        }
        return count;
    }
};

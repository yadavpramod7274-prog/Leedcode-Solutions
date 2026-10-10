class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
    map<int,long long>mp;
        

        long long k = 1LL * k1 + k2, sum = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            mp[d]++;
            sum += d;
        }

        if (k >= sum) return 0;

        while (k > 0) {
            int d = mp.rbegin()->first;
            long long cnt = mp[d];
            mp.erase(d);

            int next = mp.empty() ? 0 : mp.rbegin()->first;
            long long need = 1LL * (d - next) * cnt;

            if (need <= k) {
                mp[next] += cnt;
                k -= need;
            } else {
                long long dec = k / cnt;
                long long rem = k % cnt;

                mp[d - dec] += cnt - rem;
                if (rem > 0)
                    mp[d - dec - 1] += rem;

                k = 0;
            }
        }

        long long ans = 0;
        for (auto p : mp)
            ans += 1LL * p.first * p.first * p.second;

        return ans;
    }

};
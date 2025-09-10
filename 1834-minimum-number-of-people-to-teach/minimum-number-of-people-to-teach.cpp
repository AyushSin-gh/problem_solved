class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = languages.size();

        // Convert to sets for each user for fast lookup
        vector<unordered_set<int>> known(m + 1);
        for (int i = 0; i < m; i++) {
            for (int lang : languages[i]) {
                known[i + 1].insert(lang);
            }
        }

        // Step 1: Find friendships that cannot communicate
        vector<int> needTeachUsers;
        for (auto &fr : friendships) {
            int u = fr[0], v = fr[1];
            bool can = false;
            for (int lang : known[u]) {
                if (known[v].count(lang)) {
                    can = true;
                    break;
                }
            }
            if (!can) {
                needTeachUsers.push_back(u);
                needTeachUsers.push_back(v);
            }
        }

        // If everyone can already communicate, no teaching needed
        if (needTeachUsers.empty()) return 0;

        // Step 2: Candidates who may need teaching
        unordered_set<int> candidates(needTeachUsers.begin(), needTeachUsers.end());
        int ans = INT_MAX;

        // Step 3: Try teaching each language
        for (int lang = 1; lang <= n; lang++) {
            int cnt = 0;
            for (int user : candidates) {
                if (!known[user].count(lang)) {
                    cnt++;
                }
            }
            ans = min(ans, cnt);
        }

        return ans;
    }
};

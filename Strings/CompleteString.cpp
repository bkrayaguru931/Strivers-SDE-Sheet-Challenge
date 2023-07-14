#include <bits/stdc++.h> 
string completeString(int n, vector<string>& a) {
    unordered_set<string> s;
    string res = "";

    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    for (const auto& i : a) {
        bool flag = true;
        int m = i.size();

        for (int j = 1; j <= m; j++) {
            string t = i.substr(0, j);

            if (s.find(t) == s.end()) {
                flag = false;
                break;
            }
        }

        if (flag) {
            if (res.empty()) {
                res = i;
            } else if (res.size() == m) {
                res = min(res, i);
            } else if (res.size() < m) {
                res = i;
            }
        }
    }

    if (!res.empty())
        return res;

    return "None";
}//not optimal 

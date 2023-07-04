#include <bits/stdc++.h> 
// bool findPattern(string p, string s)
// {
    //1->
    // int x = p.length(); 
    // int y = s.length(); 
    // for (int i = 0; i <= y - x; i++) {
    //     int j;
    //     for (j = 0; j < x; j++) {
    //         if (p[j] != s[i + j]) {
    //             break;
    //         }
    //     }
    //     if (j == x) {
    //         return true; 
    //     }
    // }
    // return false;
    

    //2->
    // return strstr(s.c_str(),p.c_str());

    //3->(kmp)
    vector<int> buildLPSArray(string p) {
    int m = p.length();
    vector<int> lps(m, 0);
    int len = 0;
    int i = 1;

    while (i < m) {
        if (p[i] == p[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

bool findPattern(string p, string s) {
    int m = p.length();
    int n = s.length();

    vector<int> lps = buildLPSArray(p);

    int i = 0;
    int j = 0;

    while (j < n) {
        if (p[i] == s[j]) {
            i++;
            j++;

            if (i == m) {
                return true;
            }
        } else {
            if (i != 0) {
                i = lps[i - 1];
            } else {
                j++;
            }
        }
    }

    return false;

}

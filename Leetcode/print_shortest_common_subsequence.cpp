#include <bits/stdc++.h>
using namespace std;

string shortestSupersequence(string s1, string s2)
{
    int m = s1.size(), n = s2.size();
    string ans = "";

    // Step 1: Create DP table for LCS
int t[m+1][n+1];
for (int i = 0; i < m+1; i++) {
        for (int j = 0; j < n+1; j++) {
if(i==0||j==0){
t[i][j]=0;
}

        }}
    for (int i = 1; i < m+1; i++) {
        for (int j = 1; j <n+1; j++) {
            if (s1[i - 1] == s2[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];
            else
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
        }
    }

    // Step 2: Backtrack to build the supersequence
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            ans.push_back(s1[i - 1]);
            i--; j--;
        }
        else if (t[i - 1][j] > t[i][j - 1]) {
            ans.push_back(s1[i - 1]);
            i--;
        } else {
            ans.push_back(s2[j - 1]);
            j--;
        }
    }

    while (i > 0) {
        ans.push_back(s1[i - 1]);
        i--;
    }
    while (j > 0) {
        ans.push_back(s2[j - 1]);
        j--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


#include<bits/stdc++.h>
using namespace std;
bool tab(string s, string t){
    int n = s.length();
    int m = t.length();

    vector<vector<bool>> dp(n+1, vector<bool> (m+1, false));
    dp[0][0] = true;

    for(int i = 1; i <= m; i++){
        if(s[i-1] == '*'){
            dp[0][i] = dp[0][i-1];
        }else{
            dp[0][i] = false;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s[i-1] == t[j-1] || t[j-1] == "?"){
                dp[i][j] = dp[i-1][j-1];
            }
        }
    }
}
int main()
{
 string s = "aa";
 string t = "a";

 cout << tab(s, t);
  return 0;
}
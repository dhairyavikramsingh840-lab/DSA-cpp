#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char firstUniqChar(string s) {
        queue<char> q;
        int freq[26] ={0};

        for(int i =0; i<s.size(); i++){
            char ch =  s[i];
            q.push(ch);
            freq[ch-'a']++;
        }
        while(!q.empty() && freq[q.front() -'a']>1){
            q.pop();
        }

        if(q.empty()){
            return -1;
        }else{
           return  q.front();
        }
    }
};
int main (){
    Solution str;
    string s  = "adhdfbibdund";
     cout << str.firstUniqChar(s);
}
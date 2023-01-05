#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        map<char,int> srt,gus;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                b++;
            }
            else{
                srt[secret[i]]++;
                gus[guess[i]]++;
            }
        }
        for(auto i: srt){
            if(gus.find(i.first)!=gus.end()){
                c+=min(i.second,gus[i.first]);
            }
        }
        string ans="";
        ans+=to_string(b)+"A"+to_string(c)+"B";
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> v;
    void combine(int start,vector<int> &ans, int n,int k){
        if(k==ans.size() && n==0){
            v.push_back(ans);
            return;
        }
        else{
            for(int i=start;i<=9;i++){
                ans.push_back(i);
                combine(i+1,ans,n-i,k);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ans;
        combine(1,ans,n,k);
        return v;
    }
};
//
// Created by WangRuoFan on 2021/9/7.
//

#include<bits\stdc++.h>
using namespace std;

vector<vector<int>> premute(vector<int>& nums){
    // 40分钟限时不够了 暴力算法
    vector<vector<int>> res;
    for(int i = 0; i < nums.size() ;i++){
        for(int j = 1; j < nums.size(); j++){
            vector<int> tempVec = nums;
            int temp = tempVec[i];
            tempVec[i] = tempVec[j];
            tempVec[j] = temp;
            res.push_back(tempVec);
        }
    }
    return res;
}
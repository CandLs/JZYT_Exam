//
// Created by WangRuoFan on 2021/9/7.
//
#include<bits\stdc++.h>
using namespace std;

// 延伸思考
//  采用流式模式 多次读取文件1建立哈希表 再多次读取文件2从哈希表读出数据 将结果输入到文件3
//  如果数字重复内容较多 理论上仍可使用当前方法
//  如果数字较大考虑使用 long long 或 string 存储


vector<int> intersect(vector<int>& nums1,vector<int>& nums2){
    vector<int> res;
    if(nums1.size() < 1 || nums2.size() < 1) return res;
    unordered_map<int, int> cacheMap;
    for(int x : nums1){
        if(cacheMap.find(x) == cacheMap.end()){
            cacheMap[x] = 1;
        }else{
            cacheMap[x] += 1;
        }
    }

    for(int x : nums2){
        auto iter = cacheMap.find(x);
        if(iter != cacheMap.end()){
            int key = iter->first;
            if(iter->second > 1) iter->second -= 1;
            else cacheMap.erase(iter);
            res.push_back(key);
        }
    }
    return res;
}
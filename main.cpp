#include<bits\stdc++.h>
#include "exam2.h"
using namespace std;

vector<int> intersect(vector<int>& nums1,vector<int>& nums2);
vector<vector<int>> premute(vector<int>& nums);

int main(){
    // exam1
    {
        vector<int> vec1{1,2,2,1};
        vector<int> vec2{2,2};
        vector<int> vec3 = intersect(vec1, vec2);
        for(int x : vec3){
            cout << x << endl;
        }
    }
    // exam3
    {
        vector<int> vec{1,2,3};
        vector<vector<int>> res = premute(vec);
        for(int i = 0; i < res.size(); i++){
            for(int j = 0; j < res[0].size() ; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
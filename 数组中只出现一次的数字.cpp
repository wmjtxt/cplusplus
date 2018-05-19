 ///
 /// @file    :数组中只出现一次的数字.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-19 10:28:31(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int maxnum = data[0], minnum = data[0];
        for(int i = 1; i < data.size(); i++){
            if(maxnum < data[i])
                maxnum = data[i];
            if(minnum > data[i])
                minnum = data[i];
        }
        int d = maxnum - minnum; //差
        vector<int> temp(d+1);
        for(int i = 0; i < data.size(); i++){
            temp[data[i]-minnum]++;
        }
        int flag = 0;
        *num1 = *num2 = 0;
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == 1){
                if(flag == 0){
                    *num1 = i+minnum;
                    flag = 1;
                    continue;
                }
                *num2 = i+minnum;
            }
        }
    }
};

int main(){
	Solution s;
	return 0;
}

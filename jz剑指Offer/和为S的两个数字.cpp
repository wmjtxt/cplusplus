 ///
 /// @file    :和为S的两个数字.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-19 20:43:22(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int>::iterator minnum, maxnum;
        vector<int> res;
		if(array.empty()) return res;
        minnum = array.begin();
        maxnum = array.end()-1;
        while(maxnum > minnum){
            if(*minnum + *maxnum == sum){
                res.push_back(*minnum);
                res.push_back(*maxnum);
                break;
            }
            else if(*maxnum + *minnum > sum)
                maxnum--;
            else
                minnum++;
        }
        return res;
    }
};

int main(){
	Solution test;
//	vector<int> a = {1,2,3,4,5,9,20};
	vector<int> a;
	int s = 21;
	for(auto m : test.FindNumbersWithSum(a,s))
		cout << m << " ";
	cout << endl;
	return 0;
}

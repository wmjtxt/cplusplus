 ///
 /// @file    :第一个只出现一次的字符.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 14:35:17(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	int FirstNotRepeatingChar(string str){
		int index = -1;
		map<char, int> cnt;
		for(int i = 0; i < str.size(); i++){
			cnt[str[i]]++;
		}
		for(int i = 0; i < str.size(); i++){
			if(cnt[str[i]]==1){
				index = i;
				break;
			}
		}
		return index;
	}
};


int main(){
	Solution s;
	string str;
	while(cin >> str){
		cout << s.FirstNotRepeatingChar(str) << endl;
	}
	return 0;
}

 ///
 /// @file    :2.替换空格.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-24 11:21:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
        length = 0;
		while(str[length] != '\0') ++length;

		char *res;
		res = new char [3*length];
		int idx = 0, idx1 = 0, idx2 = 0;
		while(str[idx1] != '\0'){
			if(str[idx1] != ' ')
			{
				res[idx2] = str[idx1];
				++idx1;
				++idx2;
			}
			else{
				res[idx2] = '%';
				res[idx2+1] = '2';
				res[idx2+2] = '0';
				idx2 += 3;
				++idx1;
			}
		}
		res[idx2] = '\0';
		while(res[idx]!='\0')
		{
			str[idx] = res[idx];
			++idx;
		}
		str[idx2] = '\0';
		length = idx2;
	}
};
int main(){
	
	return 0;
}

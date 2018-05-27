 ///
 /// @file    :字符流中第一个不重复的字符.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-27 15:49:53(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution
{
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
		s += ch;
		hash[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
		int size = s.size();
		for(int i = 0; i < size; i++)
			if(hash[s[i]] == 1)
				return s[i];
		return '#';
    }
private:
	string s;
	char hash[256] = {0};
};

int main(){
	
	return 0;
}

 ///
 /// @file    :数组中只出现一次的数字.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-19 10:28:31(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void FindNumsAppearOnce(vector<int> data,int* num1,int *num2){
		if(data.size()<2)
			return ;
		int size=data.size();
		int temp=data[0];
		for(int i=1;i<size;i++)
			temp=temp^data[i];
		if(temp==0)
			return ;
		int index=0;
		while((temp&1)==0){
			temp=temp>>1;
			++index;
		}
		*num1=*num2=0;
		for(int i=0;i<size;i++)
		{
			if(IsBit(data[i],index))
				*num1^=data[i];
			else
				*num2^=data[i];
		}
	}
	bool IsBit(int num,int index)
	{
		num=num>>index;
		return (num&1);
	}
};

int main(){
	Solution s;
	return 0;
}

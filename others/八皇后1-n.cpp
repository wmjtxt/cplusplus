 ///
 /// @file    :八皇后.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-23 16:54:18(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <unistd.h>
using namespace std;
class EightQueen{
public:
	EightQueen(int n)
	: _n(n)
	, _count(0)
	, _gEightQueen(new int[n]())
	{}
	int gCount()
	{
		eight_queen(0);
		return _count;
	}
	int check_pos_valid(int loop, int value)//检查是否存在有多个皇后在同一行/列/对角线的情况{
	{
		int index;
		int data;
		for(index = 0; index < loop; index++)
		{
			data = _gEightQueen[index];
			if(value == data)
				return 0;
			if((index + data) == (loop + value))
				return 0;
			if((index - data) == (loop - value))
				return 0;
		}
		return 1;
	}
	void eight_queen(int index)
	{
		int loop;
		for(loop = 0; loop < _n; loop++)
		{
			if(check_pos_valid(index, loop))
			{
				_gEightQueen[index] = loop;
				if((_n-1) == index)
				{
					_count++;
					_gEightQueen[index] = 0;
					return;
				}
				eight_queen(index+1);
				_gEightQueen[index] = 0;
			}
		}
	}
private:
	int _n;
	int _count;
	int* _gEightQueen;
};

int main(){
	int n;
	while(cin>>n)
		for(int i = 1; i <= n; i++)
		{
			EightQueen test(i);
			cout << i << "皇后total:" << test.gCount() << endl;
		}
	return 0;
}

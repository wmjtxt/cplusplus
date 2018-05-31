 ///
 /// @file    :数据流中的中位数.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-31 21:46:33(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution{
public:
	priority_queue<int,vector<int>,less<int> > minheap;
	priority_queue<int,vector<int>,greater<int> > maxheap;

	void Insert(int num)
	{
		if(minheap.empty() || num <= minheap.top())
			minheap.push(num);
		else 
			maxheap.push(num);
		if(minheap.size() == maxheap.size() + 2)
			maxheap.push(minheap.top()), minheap.pop();
		if(minheap.size() + 1 == maxheap.size())
			minheap.push(maxheap.top()), maxheap.pop();
	}
	double GetMedian()
	{
		return minheap.size() == maxheap.size() ? (minheap.top()+maxheap.top())/2.0 : minheap.top();
	}
};

int main(){
	
	return 0;
}

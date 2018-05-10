 ///
 /// @file    :quickhand1.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 19:32:39(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int fac(int n){
	if(n < 2) return 1;
	return n*fac(n-1);
}

int con(int m, int n){
	if(m < n) return 0;
	if(m == n) return 1;
	return fac(m)/(fac(n)*fac(m-n));
}

int main(){
	int k;
	cin >> k;
	int m[k], n[k];
	for(int i = 0; i < k; i++)
		cin >> m[i] >> n[i];
	for(int i = 0; i < k; i++)
		cout << con(m[i], n[i]) << endl;
	return 0;
}

 ///
 /// @file    :quickhand3.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 20:26:47(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <cmath>
using namespace std;

int fun(int n){
	int res = 1;
	double temp = 1.0;
	double sn = (3+sqrt(5))/2;
	while(n-- >= 1){
		temp*=sn;
		//res*=((3+sqrt(5))/2);
	}
	return (int)temp+1;
}

int main(){
	int m;
	cin >> m;
	int a[m];
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cout << fun(a[i]) << endl;
	}
	return 0;
}

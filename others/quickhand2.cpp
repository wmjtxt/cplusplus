 ///
 /// @file    :quickhand2.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-10 20:15:26(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++){
		if(a[i]%3)
			cout << "lucky" << endl;
		else
			cout << "don't be discouraged" << endl;
	}
	return 0;
}

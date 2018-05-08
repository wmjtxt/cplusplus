#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers){
		int len = numbers.size(), result = 0, cnt = 1, temp = 1;
		if(len == 1)
			return 1;
		sort(numbers.begin(),numbers.end());
		for(int i = 0; i < len-1; i++){
			if(numbers[i] == numbers[i+1]){
				temp++;
			}
			else{
				if(cnt < temp){
					cnt = temp;
					result = numbers[i];
				}
				temp = 1;
			}
		}
		if(cnt > len/2)
			return result;
		return 0;
	}
};

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	Solution s;
	cout << s.MoreThanHalfNum_Solution(a) << endl;
	return 0;
}

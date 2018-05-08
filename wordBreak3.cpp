#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <queue>
#include <algorithm>
#include <numeric>//accmulate
#include <functional>//greater<int>()!!!
using namespace std;

class Solution {
public:
	bool wordBreak(string s, unordered_set<string> &dict) {
		int n = s.length();
		vector<bool> dp(n+1,false);
		dp[0] = true;
		for(int j = 1; j <= n; j++){
			for(int i = j; i >= 0; i--){
				if(dp[i] && dict.find(s.substr(i,j-i)) != dict.end()){
							dp[j] = true;
							break;
						}
			}
		}
		return dp[n];
	}
};

int main(){
    Solution solution;
    unordered_set<string> dict1 = {"aaaa","aaa"};
    unordered_set<string> dict = {"cat","cats","and","sand","dog"};
    if(solution.wordBreak("aaaaaaa",dict1))
    	cout << "true" << endl;
    else
	cout << "false" << endl;

    return 0;
}

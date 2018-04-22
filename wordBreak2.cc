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
		dp = new vector<bool>[s.size()];
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = i; j < s.size(); j++)
			{
				dp[i].push_back(match(s.substr(i, j - i + 1), dict));
			}
		}
		
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < dp[i].size(); j++)
			{
				cout << dp[i][j] << " ";
				}
				cout << endl;
			}
		
		if(output(s.size() - 1, s))
			return true;
		else
			return false;
	}
	bool match(string s, unordered_set<string> &dict)
	{
		if (dict.find(s) != dict.end()) return true;
		else return false;
	}
	bool output(int i, string s)
	{
		if (i == -1)//递归退出条件
		{
			/*
			string str;
			for (int j = mystring.size() - 1; j >= 0; j--)
			{
				str += mystring[j];
				if (j != 0) str += " ";
			}
			result.push_back(str);
			*/
			cout << "1" << endl;
			return true;
		}
		else
		{
			for (int k = i; k >= 0; k--) //error!!!  for (int k = 0; k < i; k++)
			{
				if (dp[k][i - k])//dp[k][i-k]:偏移为k，截断长度i-k+1
				{
					//mystring.push_back(s.substr(k, i - k + 1));
			cout << "2" << endl;
					return output(k - 1, s);//递归:dp[0][i]:偏移为0，截断长度i+1      i=k-1,则截断长度为k,与递归前偏移k互补
					//mystring.pop_back();
				}
			}
		}
		cout << "3" <<endl;
		return false;
	}
	vector<string> result;
	vector<string> mystring;
	vector<bool> *dp;
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

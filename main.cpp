#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		int romanToInt(string s)
		{
			int roman[256] = {};
			roman['I'] = 1;
			roman['V'] = 5;
			roman['X'] = 10;
			roman['L'] = 50;
			roman['C'] = 100;
			roman['D'] = 500;
			roman['M'] = 1000;
			
			int ans = 0;
			
			for(int i = 0 ; i < s.length(); i++)
			{
				if(i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]])
				{
					ans -= roman[s[i]];
				}	
				else
				{
					ans += roman[s[i]];
				}	
			}
			return ans;	
		}
};

int main()
{
	Solution solution;
	string temp;

	cout << "Type roman number you want to change to digit ===> ";	
	while(cin >> temp)
	{
		if(temp == "q" || temp == "Q") break;
		int result = solution.romanToInt(temp);
		cout << result << endl;
		cout << "Press Q or q to exit program ===> ";
	}

	return 0;
}

//#include<iostream>
//#include<string>
//#include<cassert>
//#include<stack>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isValid(string s) 
//	{
//		stack<char> stack;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//				stack.push(s[i]);
//			else
//			{
//				if (stack.size() == 0)
//					return false;
//				
//				char c = stack.top();
//				stack.pop();
//
//				char match;
//				if (s[i] == ')')
//					match = '(';
//				else if(s[i] == ']')
//					match = '[';
//				else
//				{
//					assert(s[i] == '}');
//					match = '{';
//				}
//				if (c != match)
//					return false;
//			}
//		}
//		if (stack.size() != 0)
//			return false;
//
//		return true;
//
//	}
//};
//
//int main()
//{
//	string s = "{[()]}";
//
//	bool ret = Solution().isValid(s);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
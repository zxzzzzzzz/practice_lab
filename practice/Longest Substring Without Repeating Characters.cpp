//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	//ʱ�临�Ӷȣ�O(n)
//	//�ռ临�Ӷȣ�O(1)
//	int lengthOfLongestSubstring(string s)
//	{
//		int freq[256] = { 0 };
//		int l=0, r=-1;//nums[l...r]Ϊ���ǵĻ�������
//		int res = 0;
//		while (l < s.size())
//		{
//			if (r+1<s.size() && freq[s[r + 1]] == 0)
//			{
//				r++;
//				freq[s[r]]++;
//			}
//			else
//			{
//				freq[s[l]]--;
//				l++;
//			}
//			res = max(res, r - l + 1);
//
//		}
//		return res;
//	}
//};
//int main()
//{
//		string s= "abcabcbb";
//		int r=Solution().lengthOfLongestSubstring(s);
//	
//		cout <<r<< endl;
//	
//		system("pause");
//	return 0;
//}
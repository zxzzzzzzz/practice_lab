//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<xfunctional>
////455�⣬̰���㷨
//using namespace std;
////ʱ�临�Ӷȣ�O(nlogn)
//class Solution {
//public:
//	int findContentChildren(vector<int>& g, vector<int>& s) {
//		sort(g.begin(), g.end());
//		sort(s.begin(), s.end());
//
//		int gi = g.size() - 1;
//		int si = s.size() - 1;
//		int res = 0;
//		while (gi >= 0 && si >= 0)
//		{
//			if (s[si] >= g[gi])
//			{
//				res++;
//				si--;
//				gi--;
//			}
//			else
//			{
//				gi--;
//			}
//
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	int arr1[] = { 1,2,3 };//3������
//	int arr2[] = {1,1};//2������
//	vector<int> g(arr1,arr1 + sizeof(arr1) / sizeof(int));
//	vector<int> s(arr2, arr2 + sizeof(arr2) / sizeof(int));
//
//	int res = Solution().findContentChildren(g, s);
//	cout << res << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution
//{
//public:
//	//时间复杂度：O(n)
//	//空间复杂度：O(1)
//	int minSubArrayLen(int s, vector<int>& nums)
//	{
//		int l=0, r=-1;//nums[l...r]为我们的滑动窗口
//		int sum = 0;
//		int res = nums.size() + 1;
//
//		while (l < nums.size())
//		{
//			if (r+1<nums.size() && sum < s) 
//			{
//				r++;
//				sum += nums[r];
//			}
//			else
//			{
//				sum -= nums[l];
//				l++;
//			}
//			if (sum >= s)
//				res = min(res, r - l + 1);
//		}
//		if (res == nums.size() + 1)
//			return 0;
//		return res;
//	}
//};
//int main()
//{
//		int arr[] = { 2,3,1,2,4,3 };
//		vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//	
//		int r=Solution().minSubArrayLen(7, vec);
//	
//		cout <<r<< endl;
//	
//		system("pause");
//	return 0;
//}
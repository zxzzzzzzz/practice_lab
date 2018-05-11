//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<cassert>
//
//using namespace std;
////滑动窗口+查找表
//class Solution
//{
//public:
////时间复杂度O(n)；
////空间复杂度O(k)；
//	bool containsNearbyDuplicate(vector<int>& nums, int k){
//		unordered_set<int> record;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (record.find(nums[i]) != record.end())
//				return true;
//			record.insert(nums[i]);
//
//			//保持record中最多有k个元素
//			if (record.size() == k + 1)
//				record.erase(nums[i - k]);
//		}
//		return false;
//	}
//
//};
//
//int main()
//{
//	int arr[] = { 1,2,3,1};
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	bool res=Solution().containsNearbyDuplicate(vec,3);
//
//	cout << res << endl;
//
//	system("pause");
//	return 0;
//}
//

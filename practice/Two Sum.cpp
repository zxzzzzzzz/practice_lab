//#include<iostream>
//#include<vector>
//#include<cassert>
//#include<unordered_map>
//
//using namespace std;
//
////查找表实现
//class Solution
//{
//public:
////时间复杂度O(nlogn)；
////空间复杂度O(n)；
//	vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> record;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			int temp = target - nums[i];
//			if (record.find(temp) != record.end())
//			{
//				int res[2] = { record[temp],i };
//				return vector<int>(res, res + 2);
//			}
//			record[nums[i]] = i;
//		}
//
//		throw invalid_argument("the input has no solution");
//	}
//
//};
//
//int main()
//{
//	int arr[] = { 2,7,11,15 };
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	vector<int> array=Solution().twoSum(vec,9);
//
//	cout << "[ ";
//	for (int i = 0; i < array.size(); i++)
//		cout << array[i] << " ";
//	cout << "]";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//

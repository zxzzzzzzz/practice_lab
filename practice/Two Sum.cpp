//#include<iostream>
//#include<vector>
//#include<cassert>
//#include<unordered_map>
//
//using namespace std;
//
////���ұ�ʵ��
//class Solution
//{
//public:
////ʱ�临�Ӷ�O(nlogn)��
////�ռ临�Ӷ�O(n)��
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

//#include<iostream>
//#include<vector>
//#include<cassert>
//
//using namespace std;
//
//class Solution
//{
//public:
////时间复杂度O(n^2)；
////空间复杂度O(n)；
//	//vector<int> twoSum(vector<int>& numbers, int target) {
//	//	vector<int> arr;
//	//	for (int i = 0; i<numbers.size(); i++)
//	//		for (int j = i + 1; j<numbers.size(); j++)
//	//		{
//	//			if (numbers[i] + numbers[j] == target)
//	//			{
//	//				arr.push_back(i + 1);
//	//				arr.push_back(j + 1);
//	//			}
//
//	//		}
//	//	return arr;
//	//}
//
//////改进版:二分查找
//////时间复杂度O(nlogn)；
//////空间复杂度O(n);
////	vector<int> twoSum(vector<int>& numbers, int target) {
////		vector<int> arr;
////		for (int i = 0; i < numbers.size()-1; i++)
////		{
////			int temp = target - numbers[i];
////			int l = i+1, r = numbers.size() - 1;//在[l...r]的范围内寻找target
////            while (l<=r)
////			{
////				int mid = l + (r - l) / 2;
////				if (numbers[mid] == temp)
////				{
////					arr.push_back(i + 1);
////					arr.push_back(mid + 1);
////				}
////				if (temp > numbers[mid])
////					l = mid + 1;
////				else
////					r = mid - 1;				 
////			}
////		}
////		return arr;
////	}
//
//
//////	//终极版:对撞指针
//////	//时间复杂度O(n)；
//////	//空间复杂度O(1)；
////	vector<int> twoSum(vector<int>& numbers, int target) {
////		vector<int> arr;
////		int i = 0, j = numbers.size() - 1;
////		while (i < j)
////		{
////			if (numbers[i] + numbers[j] == target)
////			{
////				arr.push_back(i + 1);
////				arr.push_back(j + 1);
////				return arr;
////			}
////			else if (numbers[i] + numbers[j] < target)
////				i++;
////			else
////				j--;
////		}		
////	}
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

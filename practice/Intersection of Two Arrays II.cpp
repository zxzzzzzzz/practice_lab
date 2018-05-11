//#include<iostream>
//#include<vector>
//#include<cassert>
//#include<map>
//
//using namespace std;
//
//class Solution
//{
//public:
//////时间复杂度O(nlogn)；
//////空间复杂度O(n)；
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
//	{

////O(nlogn)
//		map<int,int> record;
//		for (int i = 0; i < nums1.size(); i++)
//		{
//			record[nums1[i]]++;
//		}
//
////O(nlogn)
//		vector<int> resultVector;
//		for (int i = 0; i < nums2.size(); i++)
//			if (record[nums2[i]] > 0)
//			{
//				resultVector.push_back(nums2[i]);
//				record[nums2[i]]--;
//			}
//
//		return resultVector;
//	}
//
//
//};
//
//int main()
//{
//	int arr1[] = { 1,2,2,1 };
//	int arr2[] = { 2,2 };
//	vector<int> vec1(arr1, arr1 + sizeof(arr1) / sizeof(int));
//	vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(int));
//	vector<int> array=Solution().intersection(vec1, vec2);
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

//#include<iostream>
//#include<vector>
//#include<cassert>
//#include<set>
//
//using namespace std;
//
//class Solution
//{
//public:
////	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
////	{
////		set<int> record;
////		for (int i = 0; i < nums1.size(); i++)
////		{
////			record.insert(nums1[i]);
////		}
////		set<int> resultSet;
////		for (int i = 0; i < nums2.size(); i++)
////			if (record.find(nums2[i] )!= record.end())
////				resultSet.insert(nums2[i]);
////		vector<int> resultVector;
////		for (set<int>::iterator iter = resultSet.begin(); iter != resultSet.end(); iter++)
////			resultVector.push_back(*iter);
////
////		return resultVector;
////	}
//
////改进版:
////时间复杂度O(nlogn)；
////空间复杂度O(n)；
	//vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	//{

	////O(nlogn)
	//	set<int> record(nums1.begin(),nums1.end());

	////O(nlogn)
	//	set<int> resultSet;
	//	for (int i = 0; i < nums2.size(); i++)
	//		if (record.find(nums2[i]) != record.end())
	//			resultSet.insert(nums2[i]);

	////O(n)
	//	return vector<int>(resultSet.begin(),resultSet.end());		
	//}
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

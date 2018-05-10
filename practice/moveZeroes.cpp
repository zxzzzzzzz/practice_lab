//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution
//{
//public:
////时间复杂度O(n)；
////空间复杂度O(n)；
//	//void moveZeroes(vector<int>& nums)
//	//{
//	//	vector<int> nonZeroElements;
//	//	
//	//	for (int i = 0; i < nums.size(); i++)
//	//		if (nums[i])
//	//			nonZeroElements.push_back(nums[i]);
//	//	for (int i = 0; i < nonZeroElements.size(); i++)
//	//		nums[i] = nonZeroElements[i];
//	//	for (int i = nonZeroElements.size(); i < nums.size(); i++)
//	//		nums[i] = 0;
//	//}
//
//	//改进版
//	//时间复杂度O(n)；
//	//空间复杂度O(1)；
//	//void moveZeroes(vector<int>& nums)
//	//{
//	//	int k = 0;
//	//	for (int i = 0; i < nums.size(); i++)
//	//		if (nums[i])
//	//		{
//	//			nums[k++] = nums[i];
//	//		}
//	//	for (int j = k; j < nums.size(); j++)
//	//		nums[j] = 0;
//
//	//}
//
//	//终极版
//	//时间复杂度O(n)；
//	//空间复杂度O(1)；
//	//void swap(int& a, int& b)
//	//{
//	//	int temp = a;
//	//	a = b;
//	//	b = temp;
//	//}
//	void moveZeroes(vector<int>& nums)
//	{
//		int k = 0;
//		for (int i = 0; i < nums.size(); i++)
//			if (nums[i])
//				if (i != k)
//					swap(nums[k++], nums[i]);
//				else
//					k++;
//
//	}
//};
//
//int main()
//{
//	int arr[] = { 0,1,0,3,12 };
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	Solution().moveZeroes(vec);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//

//#include<iostream>
//#include<vector>
//#include<cassert>
//
//using namespace std;
//
//class Solution
//{
//public:
//////时间复杂度O(n)；
//////空间复杂度O(1)；O(k)，k为元素取值范围；
////	void sortColors(vector<int>& nums)
////	{
////		int count[3] = { 0 };//存放0，1，2三个元素的频率
////		for (int i = 0; i < nums.size(); i++)
////		{
////			assert(nums[i] >= 0 && nums[i] <= 2);
////			count[nums[i]]++;
////		}
////		int index = 0;
////		for (int i = 0; i < count[0]; i++)
////			nums[index++] = 0;
////		for (int i = 0; i < count[1]; i++)
////			nums[index++] = 1;
////		for (int i = 0; i < count[2]; i++)
////			nums[index++] = 2;
////
////	}
//
//	//改进版：3路快排
//	//时间复杂度O(n)；
//	//空间复杂度O(1)；O(k)，k为元素取值范围；
//	//只遍历一遍数组
//	void sortColors(vector<int>& nums)
//	{
//		int zero = -1;//nums[0...zero]==0;
//		int two = nums.size();//nums[zero...n-1]==2;
//		for (int i = 0; i < two;)
//		{
//			if (nums[i] == 1)
//				i++;
//			else if (nums[i] == 2)
//				swap(nums[i], nums[--two]);
//			else
//			{
//				assert(nums[i]==0);
//				swap(nums[++zero], nums[i++]);
//			}
//		}
//	}
//};
//
//int main()
//{
//	int arr[] = { 0,1,0,0,1,1,1,2 };
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	Solution().sortColors(vec);
//
//	for (int i = 0; i < vec.size(); i++)
//		cout << vec[i] << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//

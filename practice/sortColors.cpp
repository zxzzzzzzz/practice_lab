//#include<iostream>
//#include<vector>
//#include<cassert>
//
//using namespace std;
//
//class Solution
//{
//public:
//////ʱ�临�Ӷ�O(n)��
//////�ռ临�Ӷ�O(1)��O(k)��kΪԪ��ȡֵ��Χ��
////	void sortColors(vector<int>& nums)
////	{
////		int count[3] = { 0 };//���0��1��2����Ԫ�ص�Ƶ��
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
//	//�Ľ��棺3·����
//	//ʱ�临�Ӷ�O(n)��
//	//�ռ临�Ӷ�O(1)��O(k)��kΪԪ��ȡֵ��Χ��
//	//ֻ����һ������
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

//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<cassert>
//
//using namespace std;
////��������+���ұ�
//class Solution
//{
//public:
////ʱ�临�Ӷ�O(n)��
////�ռ临�Ӷ�O(k)��
//	bool containsNearbyDuplicate(vector<int>& nums, int k){
//		unordered_set<int> record;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (record.find(nums[i]) != record.end())
//				return true;
//			record.insert(nums[i]);
//
//			//����record�������k��Ԫ��
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

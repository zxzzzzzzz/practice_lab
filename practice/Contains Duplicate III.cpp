//#include<iostream>
//#include<vector>
//#include<set>
//#include<cassert>
//#include<algorithm>
//
//using namespace std;
////��������+���ұ�
//class Solution
//{
//public:
//	//ʱ�临�Ӷ�O(n)��
//	//�ռ临�Ӷ�O(k)��
//	bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//		set<long long> record;//�����������
//		for (int i = 0; i < nums.size(); i++)
//		{
//			//if (record.find(nums[i]) != record.end())
//			//	return true;
//			if (record.lower_bound((long long)nums[i] - (long long)t) != record.end() &&
//				*record.lower_bound((long long)nums[i] - (long long)t) <= (long long)nums[i] + (long long)t)
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
//	int arr[] = { 1,2,3,1 };
//	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
//
//	bool res = Solution().containsNearbyAlmostDuplicate(vec, 4, 0);
//
//	cout << res << endl;
//
//	system("pause");
//	return 0;
//}
//

//#include<iostream>
//#include<queue>
//#include<cassert>
//#include<unordered_map>
//#include<functional>
//using namespace std;
//
//class Solution {
//public:
//	//347题
//	//时间复杂度:O(nlogk)
//	vector<int> topKFrequent(vector<int>& nums, int k) {
//		assert(k>0);
//		//统计每个元素出现的频率
//		unordered_map<int, int> freq;
//		for (int i = 0; i < nums.size(); i++)
//			freq[nums[i]]++;
//
//		assert(k<=freq.size());
//
//		//扫描freq，维护当前出现频率最高的k个元素
//		//在优先队列中，按照频率排序，所以数据对是（频率，元素）的形式  , vector<pair<int, int>>, greater<pair<int, int>>
//		priority_queue<pair<int, int>> pq;
//		for (unordered_map<int, int>::iterator iter = freq.begin(); iter != freq.end(); iter++)
//		{
//			if (pq.size() == k)
//			{
//				if (iter->second > pq.top().first)
//				{
//					pq.pop();
//					pq.push(make_pair(iter->second, iter->first));
//				}
//			}
//			else
//				pq.push(make_pair(iter->second, iter->first));
//		}
//		vector<int> res;
//		while (!pq.empty())
//		{
//			res.push_back(pq.top().second);
//			pq.pop();
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,1,1,2,2,3 };
//	vector<int> nums(arr, arr + sizeof(arr) / sizeof(int));
//	int k = 2;
//
//	vector<int> res = Solution().topKFrequent(nums, k);
//	cout << "[";
//	for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++)
//		cout << *iter << " ";
//	cout <<"]"<< endl;
//	system("pause");
//	return 0;
//}
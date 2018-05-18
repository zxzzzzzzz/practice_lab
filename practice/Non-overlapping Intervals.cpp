//#include<iostream>
//#include<vector>
//#include<algorithm>
////435�⣬̰���㷨�Ͷ�̬�滮�Ĺ�ϵ
//using namespace std;
//
//// Definition for an interval.
//struct Interval {
//    int start;
//    int end;
//    Interval() : start(0), end(0) {}
//    Interval(int s, int e) : start(s), end(e) {}
//};
//
//////��̬�滮����
////bool compare(const Interval &a, const Interval &b)
////{
////	if (a.start != b.start)
////		return a.start < b.start;
////	return a.end < b.end;
////}
////
////class Solution {
////public:
////	int eraseOverlapIntervals(vector<Interval>& intervals) {
////		if (intervals.size() == 0)
////			return 0;
////		sort(intervals.begin(), intervals.end(),compare);
////
////		//memo[i]��ʾʹ��intervals[0...i]�������ܹ��ɵ�����ص���������
////		vector<int> memo(intervals.size(), 1);
////		for (int i = 1; i < intervals.size(); i++)
////			//memo[i]
////			for (int j = 0; j < i; j++)
////				if (intervals[i].start >= intervals[j].end)
////					memo[i] = max(memo[i], 1 + memo[j]);
////		int res = 0;
////		for (int i = 0; i < memo.size(); i++)
////			res = max(res, memo[i]);
////		return intervals.size() - res;
////	}
////};
//
//
////̰���㷨:O(n)
//bool compare(const Interval &a, const Interval &b)
//{
//	if (a.end != b.end)
//		return a.end < b.end;
//	return a.start < b.start;
//}
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<Interval>& intervals) {
//		if (intervals.size() == 0)
//			return 0;
//		sort(intervals.begin(), intervals.end(),compare);
//
//		int res = 1;
//		int pre = 0;
//		for (int i = 1; i < intervals.size(); i++)
//			if (intervals[i].start >= intervals[pre].end)
//			{
//				res++;
//				pre = i;
//			}
//		return intervals.size() - res;
//	}
//};
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}
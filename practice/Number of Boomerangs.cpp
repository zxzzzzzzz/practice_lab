//#include<iostream>
//#include<vector>
//#include<cassert>
//#include<unordered_map>
//
//using namespace std;
//
////查找表实现
//class Solution
//{
//public:
//	//时间复杂度O(n^2)；
//	//空间复杂度O(n)；
//	int numberOfBoomerangs(vector<pair<int, int>>& points)
//	{
//		int res = 0;
//		for (int i = 0; i < points.size(); i++)
//		{
//			unordered_map<int, int> record;//<距离，次数>
//			for (int j = 0; j < points.size(); j++)
//				if (j != i)
//					record[dis(points[i], points[j])]++;
//			for (unordered_map<int, int>::iterator iter = record.begin();
//				iter != record.end(); iter++)
//				if (iter->second >= 2)
//					res += (iter->second)*(iter->second - 1);
//		}
//		return res;
//	}
//private:
//	int dis(const pair<int, int> &pa, const pair<int, int> &pb)
//	{
//		return (pa.first - pb.first)*(pa.first - pb.first) +
//			(pa.second - pb.second)*(pa.second - pb.second);
//	}
//
//};
//
//int main()
//{
//	pair<int, int> A(0,0);
//	pair<int, int> B(1, 0);
//	pair<int, int> C(2, 0);
//
//	vector<pair<int, int>> points;
//	points.push_back(A);
//	points.push_back(B);
//	points.push_back(C);
//	int res = Solution().numberOfBoomerangs(points);
//
//	cout << res << endl;
//
//	system("pause");
//	return 0;
//}
//

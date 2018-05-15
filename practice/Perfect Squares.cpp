//#include<iostream>
//#include<vector>
//#include<queue>
//#include<stdexcept>
//#include<cassert>
//
//using namespace std;
//
//class Solution {
//public:
//	//279题
//	int numSquares(int n) {
//		assert(n > 0);
//		queue<pair<int, int>> q;//第几个数字，经历几段路径
//		q.push(make_pair(n, 0));
//
//		vector<bool> visited(n + 1, false);
//		visited[n] = true;
//
//		while (!q.empty())
//		{
//			int num = q.front().first;
//			int step = q.front().second;
//			q.pop();
//
//			if (num == 0)
//				return step;
//
//			for (int i = 1; num - i*i >= 0; i++)
//			{
//				if(!visited[num-i*i])
//				{
//					q.push(make_pair(num - i*i, step + 1));
//					visited[num - i*i] = true;
//				}
//			}
//		}
//		throw invalid_argument("No Solution.");
//	}
//};
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}
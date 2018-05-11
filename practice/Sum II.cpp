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
////时间复杂度O(n^2)；
////空间复杂度O(n^2)；
//	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) 
//	{
//		assert(A.size() == B.size() && B.size() == C.size() && C.size() == D.size());
//		unordered_map<int, int> record;
//		for(int i=0;i<C.size();i++)
//			for (int j = 0; j < D.size(); j++)
//			{
//				record[C[i] + D[j]]++;
//			}
//		int res = 0;
//		for (int i = 0; i<A.size(); i++)
//			for (int j = 0; j < B.size(); j++)
//			{
//				if (record.find(0 - A[i] - B[j]) != record.end())
//					res += record[0 - A[i] - B[j]];
//			}
//		return res;
//	}
//
//};
//
//int main()
//{
//	int A[] = { 1,2 };
//	int B[] = { -2,-1 };
//	int C[] = { -1,2 };
//	int D[] = { 0,2 };
//	vector<int> A1(A, A + sizeof(A) / sizeof(int));
//	vector<int> B1(B, B + sizeof(B) / sizeof(int));
//	vector<int> C1(C, C + sizeof(C) / sizeof(int));
//	vector<int> D1(D, D + sizeof(D) / sizeof(int));
//
//	int res=Solution().fourSumCount(A1,B1,C1,D1);
//
//	cout<< res << endl;
//
//	system("pause");
//	return 0;
//}
//

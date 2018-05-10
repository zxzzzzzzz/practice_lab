//#include<iostream>
//#include<cmath>
//#include<cassert>
//#include<ctime>
//#include"MyUtil.h"
//
//using namespace std;
//
//template<typename T>
//int binarySearch(T arr[], int n, T target)
//{
//	int l = 0, r = n - 1;//ÔÚ[l...r]µÄ·¶Î§ÄÚÑ°ÕÒtarget
//	while (l<=r)
//	{
//		int mid = l+(r-l) / 2;
//		if (arr[mid] == target)
//			return mid;
//
//		if (target > arr[mid])
//			l = mid + 1;
//		else
//			r = mid - 1;
//
//	}
//	return -1;
//}
//
//int main()
//{
//	int n = 1000000;
//	int* data = MyUtil::generateOrderedArray(n);
//
//	clock_t startTime = clock();
//	for (int i = 0; i < n; i++)
//		assert(i == binarySearch(data, n, i));
//	clock_t endTime = clock();
//
//	cout << "binarySearch test complete." << endl;
//	cout << "Time cost :" << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
//
//	system("pause");
//	return 0;
//}
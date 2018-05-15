//#include<iostream>
//
//using namespace std;
//
////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
////创建链表
//ListNode* createLinkedList(int arr[], int n)
//{
//	if (n == 0)
//		return NULL;
//	ListNode* head = new ListNode(arr[0]);
//	ListNode* curNode = head;
//	for (int i = 1; i < n; i++)
//	{
//		curNode->next = new ListNode(arr[i]);
//		curNode = curNode->next;
//	}
//	return head;
//}
////打印链表
//void printLinkedList(ListNode* head)
//{
//	ListNode* curNode = head;
//	while (curNode != NULL)
//	{
//		cout << curNode->val << "->";
//		curNode = curNode->next;
//	}
//	cout << "NULL" << endl;
//	return;
//}
////释放内存
//void deleteLinkedlist(ListNode* head)
//{
//	ListNode* curNode = head;
//	while (curNode != NULL)
//	{
//		ListNode* delNode = curNode;
//		curNode = curNode->next;
//		delete delNode;
//	}
//	return;
//}
//
////时间复杂度O(n)
////空间复杂度O(1)
//class Solution {
//public:
//	//设置虚拟头节点
//	ListNode* swapPairs(ListNode* head)
//	{
//		ListNode* dummyHead = new ListNode(0);//设置虚拟节点
//		dummyHead->next = head;
//
//		ListNode* p= dummyHead;
//		while (p->next && p->next->next)
//		{
//			ListNode* node1 = p->next;
//			ListNode* node2 = node1->next;
//			ListNode* next = node2->next;
//
//			node2->next = node1;
//			node1->next = next;
//			p->next = node2;
//
//			p = node1;
//
//		}
//
//		ListNode* retNode = dummyHead->next;
//		delete dummyHead;
//
//		return retNode;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int n = sizeof(arr) / sizeof(int);
//
//	ListNode* head = createLinkedList(arr, n);
//	printLinkedList(head);
//
//	ListNode* head2 = Solution().swapPairs(head);
//	printLinkedList(head2);
//
//	deleteLinkedlist(head2);
//
//	system("pause");
//	return 0;
//}
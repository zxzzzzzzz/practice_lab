//#include<iostream>
//
//using namespace std;
//
////Definition for singly-linked list.
//struct ListNode {
//	int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
////��������
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
////��ӡ����
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
//
////�ͷ��ڴ�
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
////ʱ�临�Ӷ�O(n)
////�ռ临�Ӷ�O(1)
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head)
//	{
//		ListNode* pre = NULL;
//		ListNode* cur = head;
//		while (cur != NULL)
//		{
//			ListNode* next = cur->next;
//
//			cur->next = pre;
//			pre = cur;
//			cur = next;
//		}
//		return pre;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int n = sizeof(arr) / sizeof(int);
//
//	ListNode* head = createLinkedList(arr, n);
//	printLinkedList(head);
//
//	ListNode* head2 = Solution().reverseList(head);
//	printLinkedList(head2);
//
//	deleteLinkedlist(head2);
//
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<cassert>
//
//using namespace std;
//
////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
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
//	//��������ͷ�ڵ�
//	ListNode* removeNthFromEnd(ListNode* head, int n)
//	{
//		assert(n >= 0);
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//
//		ListNode* p = dummyHead;
//		ListNode* q = dummyHead;
//		for (int i = 0; i < n + 1; i++)
//		{
//			assert(q);
//			q = q->next;
//		}
//		while (q != NULL)
//		{
//			p = p->next;
//			q = q->next;
//		}
//		ListNode* delNode = p->next;
//		p->next = delNode->next;
//		delete delNode;
//		
//		ListNode* retNode = dummyHead->next;
//		delete dummyHead;
//		return retNode;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int nn = sizeof(arr) / sizeof(int);
//	int n = 2;
//
//	ListNode* head = createLinkedList(arr, nn);
//	printLinkedList(head);
//
//	ListNode* head2 = Solution().removeNthFromEnd(head,n);
//	printLinkedList(head2);
//
//	deleteLinkedlist(head2);
//
//	system("pause");
//	return 0;
//}
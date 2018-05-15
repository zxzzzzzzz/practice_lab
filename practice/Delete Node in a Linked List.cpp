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
//	void deleteNode(ListNode* node)
//	{
//		if (node == NULL)
//			return;
//
//		if (node->next == NULL)
//		{
//			delete node;
//			node = NULL;
//			return;
//		}
//		node->val = node->next->val;
//		ListNode* delNode = node->next;
//		node->next = delNode->next;
//
//		delete delNode;
//
//		return;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int n = sizeof(arr) / sizeof(int);
//
//	ListNode* head = createLinkedList(arr, n);
//	printLinkedList(head);
//
//	ListNode* node= head;
//	while (node)
//	{
//		node = node->next;
//		if (node->val == 3)
//			break;
//	}
//	Solution().deleteNode(node);
//	printLinkedList(head);
//
//	deleteLinkedlist(head);
//
//	system("pause");
//	return 0;
//}
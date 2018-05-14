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
//	////考虑各种情况
//	//ListNode* removeElements(ListNode* head, int val)
//	//{
//	//	while(head!=NULL && head->val == val)
//	//	{
//	//		ListNode* delNode = head;
//	//		head = delNode->next;
//	//		delete delNode;
//	//	}
//	//	if (head == NULL)
//	//		return NULL;
//	//	ListNode* cur = head;
//	//	while (cur->next != NULL)
//	//	{
//	//		if (cur->next->val == val)
//	//		{
//	//			//删除cur->next
//	//			ListNode* delNode = cur->next;
//	//			cur->next = delNode->next;
//	//			delete delNode;
//	//		}
//	//		else
//	//			cur = cur->next;
//	//	}
//	//	return head;
//	//}
//	//设置虚拟头节点
//	ListNode* removeElements(ListNode* head, int val)
//	{
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* cur = dummyHead;
//		while (cur->next != NULL)
//		{
//			if (cur->next->val == val)
//			{
//				//删除cur->next
//				ListNode* delNode = cur->next;
//				cur->next = delNode->next;
//				delete delNode;
//			}
//			else
//				cur = cur->next;
//		}
//
//		ListNode* retNode = dummyHead->next;
//		delete dummyHead;
//		return retNode;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,2,6,3,4,5,6 };
//	int n = sizeof(arr) / sizeof(int);
//	int val = 6;
//
//	ListNode* head = createLinkedList(arr, n);
//	printLinkedList(head);
//
//	ListNode* head2 = Solution().removeElements(head,val);
//	printLinkedList(head2);
//
//	deleteLinkedlist(head2);
//
//	system("pause");
//	return 0;
//}
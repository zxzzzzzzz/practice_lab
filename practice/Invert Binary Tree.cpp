//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<cassert>
//#include<algorithm>
//#include<queue>
////��תһ�ö�����
//using namespace std;
//
//// Definition for a binary tree node.
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//struct Command
//{
//	string s;
//	TreeNode* node;
//	Command(string s, TreeNode* node) :s(s), node(node) {}
//};
////����һ�ö�����
//TreeNode* createTree(int *arr, int len)
//{
//	TreeNode* root = new TreeNode(arr[0]);
//	queue<TreeNode*> que;
//	que.push(root);
//	TreeNode* now;
//	now = root;
//	int i = 1;
//	while (!que.empty())
//	{
//		now = que.front();
//		que.pop();
//		if (arr[i] != 0)
//			now->left = new TreeNode(arr[i++]);
//		else
//		{
//			now->left = NULL;
//			i++;
//		}
//		if (arr[i] != 0)
//			now->right = new TreeNode(arr[i++]);
//		else
//		{
//			now->right = NULL;
//			i++;
//		}
//		que.push(now->left);
//		que.push(now->right);
//		if (i == len)
//			break;
//	}
//	return root;
//}
////��α�����ӡ������
//void printTree(TreeNode* root)
//{
//	TreeNode* r = root;
//	queue<TreeNode*> que;
//	que.push(r);
//	while (!que.empty())
//	{
//		r = que.front();
//		cout << r->val;
//		que.pop();
//		if (r->left != NULL) {
//			que.push(r->left);
//		}
//		if (r->right != NULL) {
//			que.push(r->right);
//		}
//	}
//}
////�鿴�������д��ڲ�����ĳһ����ֵ
//bool contain(TreeNode* root, int key)
//{
//	if (root == NULL)
//		return false;
//	if (key == root->val)
//		return true;
//	if (contain(root->left, key) || contain(root->right, key))
//		return true;
//	return false;
//}
////�����Ŷ����������ڴ���ͷ�
//void destroy(TreeNode* root)
//{
//	if (root == NULL)
//		return;
//	destroy(root->left);
//	destroy(root->right);
//	delete root;
//	//count--;
//}
//class Solution {
//public:
//	//226��
//	TreeNode* invertTree(TreeNode* root) {
//		if (root == NULL)
//			return NULL;
//		invertTree(root->left);
//		invertTree(root->right);
//		swap(root->left, root->right);
//
//		return root;
//	}
//};
//
//int main()
//{
//	int arr[] = { 4,2,7,1,3,6,9 };
//	int len = sizeof(arr) / sizeof(int);
//	TreeNode* root = createTree(arr, len);
//
//	TreeNode* ret = Solution().invertTree(root);
//	printTree(ret);
//	system("pause");
//	return 0;
//}
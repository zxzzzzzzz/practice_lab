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
//	//257��
//	vector<string> binaryTreePaths(TreeNode* root) {
//		vector<string> res;
//
//		if (root == NULL)
//			return res;
//		if (root->left == NULL &&root->right == NULL)
//		{
//			res.push_back(to_string(root->val));
//			return res;
//		}
//
//		vector<string> leftS = binaryTreePaths(root->left);
//		for (int i = 0; i < leftS.size(); i++)
//			res.push_back(to_string(root->val) + "->" + leftS[i]);
//		vector<string> rightS = binaryTreePaths(root->right);
//		for (int i = 0; i < rightS.size(); i++)
//			res.push_back(to_string(root->val) + "->" + rightS[i]);
//
//		return res;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1,2,3,0,5 };
//	int len = sizeof(arr) / sizeof(int);
//	TreeNode* root = createTree(arr, len);
//
//	vector<string> ret = Solution().binaryTreePaths(root);
//	for (vector<string>::iterator iter = ret.begin(); iter != ret.end(); iter++)
//		cout << *iter << "";
//	system("pause");
//	return 0;
//}
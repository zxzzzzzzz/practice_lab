//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<cassert>
//#include<algorithm>
//#include<queue>
////求二叉树的最大深度
//using namespace std;
//
//// Definition for a binary tree node.
//typedef struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//}TreeNode;
//struct Command
//{
//	string s;
//	TreeNode* node;
//	Command(string s, TreeNode* node) :s(s), node(node) {}
//};
////创建一棵二叉树
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
////查看二叉树中存在不存在某一个键值
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
////对整颗二叉树进行内存的释放
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
//	//104题
//	int maxDepth(TreeNode* root) {
//		if(root==NULL)
//			return 0;
//		int leftMaxDepth = maxDepth(root->left);
//		int rightMaxDepth = maxDepth(root->right);
//		return max(leftMaxDepth, rightMaxDepth) + 1;
//	}
//};
//
//int main()
//{
//	int arr[] = { 3, 9, 20, 0, 0, 15, 7 };
//	int len = sizeof(arr) / sizeof(int);
//	TreeNode* root = createTree(arr, len);
//
//	int ret = Solution().maxDepth(root);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
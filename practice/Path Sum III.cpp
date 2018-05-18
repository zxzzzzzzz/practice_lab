//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<cassert>
//#include<algorithm>
//#include<queue>
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
////层次遍历打印二叉树
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
//class solution {
//public:
//	//112题
//	//在以root为根节点的二叉树中，寻找和为sum的路径，返回这样的路径个数
//	int pathSum(TreeNode* root, int sum)
//	{
//		if (root == NULL)
//			return 0;
//		int res = findPath(root, sum);
//		res += pathSum(root->left, sum);
//		res += pathSum(root->right, sum);
//
//		return res;
//	}
//private:
//	//在以node为根节点的二叉树中，寻找包含node的路径，和为num
//	//返回这样的路径个数
//	int findPath(TreeNode* node, int num)
//	{
//		if (node == NULL)
//			return 0;
//		int res = 0;
//		if (node->val == num)
//			res += 1;
//		res += findPath(node->left, num - node->val);
//		res += findPath(node->right, num - node->val);
//
//		return res;
//	}
//};
//
//int main()
//{
//	int arr[] = { 10, 5, -3, 3, 2, 0, 11,3,-2,0,1 };
//	int len = sizeof(arr) / sizeof(int);
//	TreeNode* root = createTree(arr, len);
//	int sum = 8;
//	int ret = solution().pathSum(root,sum);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
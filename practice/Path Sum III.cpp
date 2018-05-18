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
//class solution {
//public:
//	//112��
//	//����rootΪ���ڵ�Ķ������У�Ѱ�Һ�Ϊsum��·��������������·������
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
//	//����nodeΪ���ڵ�Ķ������У�Ѱ�Ұ���node��·������Ϊnum
//	//����������·������
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
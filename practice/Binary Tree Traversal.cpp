//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//#include<cassert>
//#include<queue>
////��������ǰ�����������������������
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
//	//ģ���˵ݹ���̵�ϵͳջ
//	//ǰ�����,144��
//	vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> res;
//		if (root == NULL)
//			return res;
//		stack<Command> stack;
//		stack.push(Command("go", root));
//		while (!stack.empty())
//		{
//			Command command = stack.top();
//			stack.pop();
//
//			if (command.s == "print")
//				res.push_back(command.node->val);
//			else
//			{
//				assert(command.s == "go");
//				if (command.node->right)
//					stack.push(Command("go", command.node->right));
//				if (command.node->left)
//					stack.push(Command("go", command.node->left));
//				stack.push(Command("print", command.node));
//			}
//		}
//		return res;
//	}
//	//�������,94��
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> res;
//		if (root == NULL)
//			return res;
//		stack<Command> stack;
//		stack.push(Command("go", root));
//		while (!stack.empty())
//		{
//			Command command = stack.top();
//			stack.pop();
//
//			if (command.s == "print")
//				res.push_back(command.node->val);
//			else
//			{
//				assert(command.s == "go");
//				if (command.node->right)
//					stack.push(Command("go", command.node->right));
//				stack.push(Command("print", command.node));
//				if (command.node->left)
//					stack.push(Command("go", command.node->left));
//				
//			}
//		}
//		return res;
//	}
//	//�������,145��
//	vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> res;
//		if (root == NULL)
//			return res;
//		stack<Command> stack;
//		stack.push(Command("go", root));
//		while (!stack.empty())
//		{
//			Command command = stack.top();
//			stack.pop();
//
//			if (command.s == "print")
//				res.push_back(command.node->val);
//			else
//			{
//				assert(command.s == "go");
//				stack.push(Command("print", command.node));
//				if (command.node->right)
//					stack.push(Command("go", command.node->right));
//				if (command.node->left)
//					stack.push(Command("go", command.node->left));
//
//			}
//		}
//		return res;
//	}
//	//�������,102��
//	vector<vector<int>> levelOrder(TreeNode* root)
//	{
//		vector<vector<int>> res;
//		if (root == NULL)
//			return res;
//		queue<pair<TreeNode*, int>> q;
//		q.push(make_pair(root, 0));
//		while (!q.size())
//		{
//			TreeNode* node = q.front().first;
//			int level = q.front().second;
//			q.pop();
//
//			if (level == res.size())
//				res.push_back(vector<int>());
//			res[level].push_back(node->val);
//
//			if (node->left)
//				q.push(make_pair(node->left, level + 1));
//			if (node->right)
//				q.push(make_pair(node->right, level + 1));
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	int arr[] = { 1, 0, 2,3};
//	int len = sizeof(arr) / sizeof(int);
//	TreeNode* root = createTree(arr, len);
//
//	vector<int> ret = Solution().preorderTraversal(root);
//	cout << "ǰ������Ľ��Ϊ��";
//	for (vector<int>::iterator iter = ret.begin(); iter != ret.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	vector<int> ret1 = Solution().inorderTraversal(root);
//	cout << "��������Ľ��Ϊ��";
//	for (vector<int>::iterator iter = ret1.begin(); iter != ret1.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	vector<int> ret2 = Solution().postorderTraversal(root);
//	cout << "��������Ľ��Ϊ��";
//	for (vector<int>::iterator iter = ret2.begin(); iter != ret2.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;
class TreeNode {
public:
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void inorder(TreeNode *root);
void preorder(TreeNode *root);
//ʵ�������maxTree�������鹹��һ�ö�����������ͷ�ڵ�������������������ֵ����



class maxTree {
public:
	//ʹ�ô������ʵ�֣���Ϊ����Ѿ���һ����ȫ�����������������κ�һ�����������ֵ��������ͷ��
	TreeNode * getMaxTree(vector<int> arr)
	{
		//���ȼ����д����
		priority_queue<int, vector<int>, less<int>> heap;
		for (int i = 0; i < arr.size(); i++)
		{
			heap.push(arr[i]);
		}
		//�Ѵ���ѽ�Ϊ������
		TreeNode *root = new TreeNode(heap.top()); //��
		heap.pop();
		stack<TreeNode *> s;
		s.push(root);
		while (!heap.empty() && !s.empty())
		{
			TreeNode *head = s.top();
			s.pop();
			//�������������Һ��ӣ�
			//Ȼ��ѹջ����ѹ�Һ��ӣ���ѹ����

			if (!heap.empty())
			{
				TreeNode *left = new TreeNode(heap.top());
				head->left = left;
				heap.pop();
			}
			if (!heap.empty())
			{
				TreeNode *right = new TreeNode(heap.top());
				head->right = right;
				heap.pop();
			}
;
			if(head->right != nullptr) s.push(head->right);
			if (head->left != nullptr) s.push(head->left);
		}
		return root;
	}
	

	//ʹ�õ���ջ����maxTree��
	//��һ��ֵ��������������ΪNull���ұ����������ΪNull����ô���ֵ����ͷ�ڵ�
	//��һ��ֵ�����Ҷ���ֵ����ô��ѡ��С�ģ�����������
	//��һ��ֵ������ֻ��һ����ֵ����ô��ֱ�ӹ���������

	TreeNode* getMaxTree2(vector<int> arr)
	{
		//������Ҫһ����ϣ��
		unordered_map<int, TreeNode *> map;
		//�Ȱ����е�������Node�ŵ���ϣ������
		for (int i = 0; i < arr.size(); i++)
		{
			TreeNode *cur = new TreeNode(arr[i]);
			map.insert({ i, cur });//���ظ�����
		}
		//��һ��ջ���ӵ׵����Ӵ�С��
		stack<int> s;//ջ����ŵ���λ����Ϣ
		TreeNode *root = nullptr;
		for (int i = 0; i < arr.size(); i++)
		{
			while(!s.empty() && arr[s.top()] < arr[i])
			{
				int index = s.top();
				s.pop();
				int rightMore = arr[i];
				int leftMore = s.empty() ? INT_MAX : arr[s.top()];
				int father_index = rightMore < leftMore ? i : s.top();
				if (map[father_index]->left == nullptr) map[father_index]->left = map[index];
				else map[father_index]->right = map[index];
			}
			s.push(i);
		}
		//�����ұ߱�������û��
		while (!s.empty())
		{
			int index = s.top();
			s.pop();
			int rightMore = INT_MAX;
			int leftMore = s.empty() ? INT_MAX : s.top();
			if (leftMore == INT_MAX) root = map[index];
			else
			{
				int father_index = s.top();
				if (map[father_index]->left == nullptr) map[father_index]->left = map[index];
				else map[father_index]->right = map[index];
			}
		}
		return root;
	}
};

int main()
{
	vector<int> arr{3,2,4,1,0,5};
	maxTree m;
	TreeNode *root = m.getMaxTree(arr);
	preorder(root);
	cout << endl;
	inorder(root);
	
	cout << endl;
	TreeNode *root1 = m.getMaxTree2(arr);
	preorder(root1);
	cout << endl;
	inorder(root1);
	getchar();

	return 0;
}

//�������
void inorder(TreeNode *root)
{
	if (root == nullptr) return;
	
	inorder(root->left);
	cout << root->val << ",";
	inorder(root->right);
}
void preorder(TreeNode *root)
{
	if (root == nullptr) return;
	cout << root->val << ",";
	preorder(root->left);
	preorder(root->right);
}
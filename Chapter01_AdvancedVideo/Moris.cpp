#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

class TreeNode {
public:
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

class Moris {
public:
	void MorisPre(TreeNode *root)
	{
		if (root == nullptr) return;
		TreeNode *cur = root;
		TreeNode *mostRight = nullptr;
		//����ǰ�ڵ㵽�վ�ֹͣ
		while (cur != nullptr)
		{
			mostRight = cur->left; 
			//����ǰ�ڵ�������������ô��ȥ�������������ҽڵ㿴��
			if (mostRight != nullptr)
			{
				while (mostRight->right != nullptr && mostRight->right != cur)
				{
					mostRight = mostRight->right;
				}
				//���������������ҽڵ����ָ��ָ��գ�˵����һ��������ǰ�ڵ�cur
				//������ָ��ָ��ǰ�ڵ㣬��ǰ�ڵ������ƶ�
				if (mostRight->right == nullptr)
				{
					cout << cur->val << ",";
					mostRight->right = cur;
					cur = cur->left;
				}
				//���������������ҽڵ����ָ��ָ��ǰ�ڵ㣬˵���ǵڶ���������ǰ�ڵ�cur
				//������ָ��ָ��գ���ǰ�ڵ������ƶ�
				else
				{
					mostRight->right = nullptr;
					cur = cur->right;
				}
			}

			//����ǰ�ڵ�û������������ôֻ��������ǰ�ڵ�һ�Σ��ɿ�����һ����ڶ�����ͬ��
			//��ǰ�ڵ������ƶ�
			else
			{
				cout << cur->val << ",";
				cur = cur->right;
			}
		}
	}

	//Moris �������
	void MorisIn(TreeNode *root)
	{
		//��������ڵڶ��ε���һ���ڵ�ʱ��ӡ
		if (root == nullptr) return;
		TreeNode *cur = root;
		TreeNode *mostRight = nullptr;
		while (cur != nullptr)
		{
			mostRight = cur->left;
			//��鵱ǰ�ڵ���������Ƿ�Ϊ��
			//������������
			if (mostRight != nullptr)
			{
				//ȥ�����������ҽڵ�,ֱ������ڵ����ָ��ָ��ջ�ָ��ǰ�ڵ��ͣ
				while (mostRight->right != nullptr && mostRight->right != cur)
				{
					mostRight = mostRight->right;
				}
				if (mostRight->right == nullptr)//��һ�ε���cur
				{
					mostRight->right = cur;
					cur = cur->left;
				}
				else
				{
					//�ڶ��ε���cur
					cout << cur->val << ",";
					mostRight->right = nullptr;
					cur = cur->right;
				}
			}
			//���ǵ�ǰ�ڵ��������Ϊ�գ���ôֻ�ܵ��ﵱǰ�ڵ�һ��
			//�൱�ڵ�һ����ڶ�����ͬ
			else
			{
				cout << cur->val << ",";
				cur = cur->right;
			}
		}
	}

	//�������
	// Moris���ֻ�ܵ���һ���ڵ����Σ������������Ҫ�ǵ����ε�������ڵ㡣
	//���ں�������Ĺ������£�ֻ��ϵ���Ե������εĽڵ㣨����������Ϊ�յĽڵ㣩
	//ֻ�ڵڶ��ε�������ڵ��ʱ�������ӡ
	//��������һ���ڵ㷢���������������ǿգ���ô�����ӡ�����������ұ߽�
	//�ں����˳�֮ǰ�����ӡ���������ұ߽磨�������ڵ㣩
	void MorisPos(TreeNode *root)
	{
		if (root == nullptr) return;
		TreeNode *cur = root;
		TreeNode *mostRight = nullptr;
		while (cur != nullptr)
		{
			mostRight = cur->left; 
			//�����������ڣ���ô�Ϳ��Ե�������ڵ�����
			if (mostRight != nullptr)
			{
				while (mostRight->right != nullptr && mostRight->right != cur)
				{
					mostRight = mostRight->right;
				}
				//��һ�ε��ﵱǰ�ڵ�
				if (mostRight->right == nullptr)
				{
					mostRight->right = cur;
					cur = cur->left;
				}
				//�ڶ��ε��ﵱǰ�ڵ�
				else
				{
					//�����ӡ��ǰ�ڵ����������ұ߽�
					mostRight->right = nullptr;//ע������ڽ����ҽڵ����ָ��ָ���֮���ٴ�ӡ���������ұ߽�
					printEdge(cur->left);
					cur = cur->right;
				}
			}
			//��������������
			else
			{
				cur = cur->right;
			}
		}
		//��������ӡ���������ұ߽�
		printEdge(root);
	}
	//�����ӡһ�������ұ߽�,�������ڵ�
	void printEdge(TreeNode *root)
	{
		TreeNode *tail = reverseEdge(root);//tail��Ҫ�����ٷ�ת����
		TreeNode *cur = tail;
		while (cur!= nullptr)
		{
			cout << cur->val << ",";
			cur = cur->right;
		}
		reverseEdge(tail);
	}

	//��תһ�������ұ߽�
	TreeNode* reverseEdge(TreeNode *node)
	{
		TreeNode *pre = nullptr;
		TreeNode *next = nullptr;
		while (node != nullptr)
		{
			next = node->right;
			node->right = pre;
			pre = node;
			node = next;
		}
		return pre;
	}
};

int main()
{
	TreeNode A1(1);
	TreeNode A2(2);
	TreeNode A3(3);
	TreeNode A4(4);
	TreeNode A5(5);
	TreeNode A6(6);
	TreeNode A7(7);
	A1.left = &A2;
	A1.right = &A3;
	A2.left = &A4;
	A2.right = &A5;
	A3.left = &A6;
	A3.right = &A7;

	Moris m;
	cout << "MorisPre: ";
	m.MorisPre(&A1);
	cout << endl;
	cout << "MorisIn: ";
	m.MorisIn(&A1);
	cout << endl;
	cout << "MorisPos: ";
	m.MorisPos(&A1);
	cout << endl;
	getchar();
	return 0;
}
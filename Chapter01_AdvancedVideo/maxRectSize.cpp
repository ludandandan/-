#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

class maxRect {
public:
	int maxRectFromBottom(vector<int> arr)
	{
		//���������arr���ɵ�ֱ��ͼ��������ľ��ε����
		//��ÿһ��Ϊ�߶��������������������ı�����߶�С������ֹͣ��
		//��¼λ����Ϣ���ڼ�����ε����
		stack<int> s; //�ӵ׵�����С����
		int maxArea = INT_MIN;
		for (int i = 0; i < arr.size(); i++)
		{
			while (!s.empty() && arr[s.top()] > arr[i])
			{
				int index = s.top();
				s.pop();
				//������arr[index]Ϊ�ߵľ��ε�������
				int r = i;
				int l = s.empty() ? -1 : s.top();
				int area = arr[index] * (r - l - 1);
				maxArea = max(area, maxArea);
			}
			s.push(i);
		}
		while (!s.empty())
		{
			int index = s.top();
			s.pop();
			int r = arr.size();
			int l = s.empty()? -1:s.top();
			int area = arr[index] * (r - l - 1);
			maxArea = max(area, maxArea);
		}
		return maxArea;
	}

	int maxRect2(vector<vector<int>> m)
	{
		//������Ӿ�������
		//�ֱ������ÿһ��Ϊ��ʱ�������������Ȼ����������������ֵ
		if (m.empty() || m[0].empty()) return 0;
		int maxArea = INT_MIN;
		int r = m.size();
		int c = m[0].size();
		vector<int> height(c, 0);
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				height[j] = m[i][j] == 0 ? 0 : height[j] + 1;
			}
			maxArea = max(maxArea, maxRectFromBottom(height));
		}
		return maxArea;
	}
};

int main()
{
	vector<int> arr{4,3,2,5,6};
	maxRect m;
	int maxArea = m.maxRectFromBottom(arr);
	cout << maxArea << endl;
	vector<vector<int>> ma{
		{1, 0, 1, 1},
		{1, 1, 1, 1},
		{1, 1, 1, 0}
	};
	int maxArea2 = m.maxRect2(ma);
	cout << maxArea2 << endl;
	getchar();
	return 0;
}
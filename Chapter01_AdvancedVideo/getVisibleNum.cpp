#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>
#include <iostream>
using namespace std;

class Record {
public:
	int val;
	int times;
	Record(int x): val(x), times(1){}
};

class getVisibleNum {
public:
	//����û���ظ����ֵ����飬������O(1)ʱ���ڵõ��ɼ�ɽ��Ե�����
	int getVisibleNumNoRepeat(vector<int> arr)
	{
		if (arr.empty() || arr.size() == 1) return 0;
		if (arr.size() == 2) return 1;
		int n = arr.size();
		return 2 * n - 3;
	}
	//����C_{k}^2�ĺ���
	//����k=1��ô����0��
	int getInternalSum(int k)
	{
		return k == 1 ? 0 : (k*(k - 1) / 2);
	}
	//���ڿ������ظ����ֵ����飬��O(N)ʱ���ڵõ��ɼ�ɽ��Ե�����
	int getVisibelNumRepeat(vector<int> arr)
	{
		if (arr.empty() || arr.size() == 1) return 0;
		if (arr.size() == 2) return 1;
		stack<Record> s;//����ջ���ӵ׵����Ӵ�С
		int res = 0;//��¼ɽ��Ե�����
		//���ҵ����ֵ���ڵ�λ�ã������λ�ÿ�ʼ���б���
		int max_index;
		int maxval = INT_MIN;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] > maxval)
			{
				maxval = arr[i];
				max_index = i;
			}
		}
		//��max_index��ʼ����
		int i = max_index;
		int c = 0;
		while (c == 0 || i != max_index)
		{
			c++;
			//���������ȵ�ǰջ����ģ�ջ��Ԫ�ص��������н���
			while (!s.empty() && s.top().val < arr[i])
			{
				res += getInternalSum(s.top().times) + 2 * s.top().times;
				s.pop();
			}
			//����������ȵ���ô����k++
			if (!s.empty() && s.top().val == arr[i]) ++s.top().times;
			else
			{
				Record r(arr[i]);
				s.push(r);
			}
			i++;
			if (i == arr.size()) i = 0;
		}

		//���ڱ��������Ժ���ջ���
		while (s.size() > 2)
		{
			//���ڵ�����3��4...�Ĵ�����������һ��
			res += getInternalSum(s.top().times) + 2 * s.top().times;
			s.pop();
		}

		//���ڵ�����2��,��Ҫ��������1��times
		if (s.size() == 2)
		{
			int times2 = s.top().times;
			s.pop();
			if (s.top().times >= 2) res += getInternalSum(times2) + 2 * times2;
			else res += getInternalSum(times2) + s.top().times;
		}
		if (s.size() == 1)
		{
			res += getInternalSum(s.top().times);
			s.pop();
		}
		return res;
	}
};

int main()
{
	vector<int> arr{2,5,4,3,5,4,2,4,4,5,3};
	getVisibleNum g;
	int res = g.getVisibelNumRepeat(arr);
	cout << res << endl;
	getchar();
	return 0;
}
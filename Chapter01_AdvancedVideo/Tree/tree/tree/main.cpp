#include <unordered_map>
#include <map>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

//����һ���ڵ㣬��ʾλ�ã��߶ȣ����ϻ�����
class Node {
public:
	int pos;
	int h;
	bool isUp;
	Node(int x, int y, bool z) :pos(x), h(y), isUp(z) {}
};
//����Node�ıȽϲ��ԣ�����λ�����򣬴�С������λ����ͬ����ô�����ϵķ���ǰ��
bool comparator(Node *o1, Node *o2)
{
	if (o1->pos != o2->pos)
		return o1->pos <= o2->pos;
	if (o1->isUp != o2->isUp)//��С����
		return o1->isUp;//���Ϻ���
	if (o1->h != o2->h)
		return o1->h >= o2->h;//�Ӵ�С
	return false;
}
class building {
public:
	vector<vector<int>> buildingOutline(vector<vector<int>> matrix)
	{
		//�����matrix����[��߽磬�ұ߽磬�߶�]��֯
		vector<vector<int>> res;
		if (matrix.empty() || matrix[0].empty()) return res;
		//�ȶ���Ϣ���в�֣�����Node,������ЩNode�ŵ�vector��
		int n = matrix.size();//һ���ж��ٶ���¥
							  //��ô�ͻ���2*n��Node��Ϣ
		vector<Node*> nodes(2 * n);
		for (int i = 0; i < n; i++)
		{
			nodes[2 * i] = new Node(matrix[i][0], matrix[i][2], true);//��
			nodes[2 * i + 1] = new Node(matrix[i][1], matrix[i][2], false); //��
		}
		//��nodes��������
		sort(nodes.begin(), nodes.end(), comparator);//����λ�ô�С�����������

													 //��һ��map���߶��߼����ֵ�������key��ʾ�߶ȣ�value��ʾ����߶ȵ����ڻ��м���
													 //���map��ʵʱ���µģ���ĳ���߶���ȥ�ˣ������ͻᱻ�Ƴ�
													 //����һ��map����¼ÿ��λ�õ����߶ȣ������Ժ����ɽ����¼
		map<int, int> mapHeightTimes;
		map<int, int> mapPosMaxHeight;


		//��Nodes�е���Ϣ���뵽mapHeightTimes��
		for (int i = 0; i < 2 * n; i++)
		{
			if (nodes[i]->isUp)
			{
				//�������ϵģ���ô��鵱ǰMap���Ƿ�������߶ȣ�û�оͲ���һ�����оͽ�����value��1
				if (mapHeightTimes.count(nodes[i]->h) == 0)
				{
					mapHeightTimes.insert({ nodes[i]->h, 1 });
				}
				else
				{
					mapHeightTimes[nodes[i]->h]++;
				}
			}
			else
			{
				//�������µģ���ô�ͼ�鵱ǰ����߶ȵĴ����Ƿ���1����1�Ļ�ֱ���Ƴ������ǵĻ�value-1
				if (mapHeightTimes[nodes[i]->h] == 1)
					mapHeightTimes.erase(nodes[i]->h);
				else
					mapHeightTimes[nodes[i]->h]--;
			}

			//ÿ����һ��Ԫ�أ������һ���й����λ��nodes[i]->pos����Ϣ��mapPosMaxHeight��,key��λ����Ϣ��value�����λ�õ����߶�
			//��map�����ǿյģ�Ҳ����������ƽ���ϣ���ô���λ�õ����߶Ⱦ���0
			if (mapHeightTimes.empty())
			{
				//��Ҫ�ȼ��map������û�У�û�в��룬�о��޸ģ����Map���ܸ���
				if (mapPosMaxHeight.count(nodes[i]->pos) == 0)
					mapPosMaxHeight.insert({ nodes[i]->pos, 0 });
				else
					mapPosMaxHeight[nodes[i]->pos] = 0;
			}
			else
			{
				//��Ҫ�ȼ��map������û�У�û�в��룬�о��޸ģ����Map���ܸ���
				if (mapPosMaxHeight.count(nodes[i]->pos) == 0)
					mapPosMaxHeight.insert({ nodes[i]->pos, (--mapHeightTimes.end())->first });
				else
					mapPosMaxHeight[nodes[i]->pos] = (--mapHeightTimes.end())->first;
				//mapPosMaxHeight.insert({ nodes[i]->pos, (--mapHeightTimes.end())->first });
			}
		}

		int start = 0;//֮ǰ��λ��
		int height = 0; //֮ǰ�ĸ߶�
						//����mapPosMaxHeight���ɽ��
		for (auto node : mapPosMaxHeight)
		{
			//���ǵ�ǰ�ĸ߶���֮ǰ�ĸ߶�һ������ô���Ժ��ԣ�
			//���ǲ�һ������ô��Ҫ����һ��������
			if (node.second != height)
			{
				//����֮ǰ�ĸ߶���0����ô����������һ�������¼
				//���ǲ���0
				if (height != 0)
				{
					//��֮ǰ����0�����ں�֮ǰ����һ������ô������һ���¼�¼
					vector<int> tmp;
					tmp.push_back(start);
					tmp.push_back(node.first);
					tmp.push_back(height);
					res.push_back(tmp);
				}
				start = node.first;
				height = node.second;
			}
		}
		return res;
	}
};


int main()
{
	map<int, int> m;

	vector<vector<int>> matrix{ {1,2,3},{ 1,2,4 },{ 1,2,3 },{ 1,2,4 } };
	building b;
	vector<vector<int>> outline = b.buildingOutline(matrix);
	for (auto e : outline)
	{
		for (auto r : e)
		{
			cout << r << ",";
		}
		cout << endl;
	}
	getchar();
	return 0;

}
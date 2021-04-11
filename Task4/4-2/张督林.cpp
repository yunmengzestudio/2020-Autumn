
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int i = 0, j;
	int Num;
	vector<int>vec;
	for (i = 0; i < 10; i++)
	{
		vec.push_back(i);
		cout << vec[i] << endl;
	}
	vec.erase(vec.begin() + 1, vec.begin() + 4);
	for (int k = 0; k < vec.size(); k++)
	{
		cout << vec[k];
	}
	vec.insert(vec.begin() + 2, 132);
	vec.clear();
	if (vec.empty())
		cout << endl;
	cout << "OMG" << endl;

	int q, w, el;
	queue<int>que;
	for (int j = 0; j <= 10; j++)
	{
		que.push(j);
	}
	q = que.back();
	w = que.front();
	cout << "front element is " << w << "last element is" << q << endl;
	que.pop();
	el = que.front();
	cout << el << endl;
}


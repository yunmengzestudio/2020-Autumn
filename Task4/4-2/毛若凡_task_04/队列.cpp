#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	int j;
	for (int i = 0;i <5; i++)
	{
		cout << "输入数据";
		cin >> j;
		q.push(j);
	}
	if (!q.empty())
	{
		cout << "队列不为空" << endl;
		cout << "q中有" << q.size() << "个元素" << endl;
	}
	cout << "队头元素为：" << q.front() << endl;
	cout << "队尾元素为：" << q.back() << endl;
	cout << "输出队列";
	for (int i = 0; i < 5; i++)
	{
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
	}
}
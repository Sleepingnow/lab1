#include<iostream>
#include"stack.h"
using namespace std;

int main()
{
	Stack s;
	int num[100];
	char str[100];
	int i = 0, j;
	cout << "��ASCII����ʽ����(��������ASCII�룬�Կո������Ҫ����ʱ���롮0��)"; 
	while (1)
	{
		cin >> num[i]; //��������ASCII�룬�Կո������Ҫ����ʱ���롮0��
		if (num[i] == 0) 
			break;
		i++;
	}
	cout << "��ASCII�봮����Ϊ:" << endl;
	for (j = 0; j < i; j++)
	{
		str[j] = (char)num[j];
		cout << str[j];
		s.push(str[j]);
	}
	cout << endl;
	int size,mark = 1;
	size = s.size();
	char e;
	for (i = 0; i < size / 2; i++)
	{
		s.pop(e);
		if (e != str[i])
			mark = 0;
	}
	if (mark == 0)
		printf("���ǻ����ַ���\n");
	else
		printf("�ǻ����ַ���\n");
	system("pause");
	return 0;
}
/*
**����������**

ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������

���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա

ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ

���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
*/

#include<iostream>
#include<string>

using namespace std;


void input(struct teacher* tea, int len);

//ע�⣺ѧ���ṹ��һ��Ҫ����ʦ�ṹ��֮ǰ������
//�ӽṹ���ȴ�����
//2.����ѧ���ṹ��
struct student
{
	string name;
	int score;

};
//1.������ʦ�ṹ��
struct teacher
{
	string name;
	student stu[5];
};

void main()
{
	struct teacher tea[3];
	input(tea, 3);
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 5; j++)
		{
			cout <<  tea[i].stu[j].score << endl;
			
		}

	}
	system("pause");
}
void input( struct teacher* tea,int len)
{
	
	for (int i = 0; i < len; i++)
	{
		cout << "input the score of the num" << i + 1 << " teacher" << endl;
		for (int j = 0; j < 5; j++)
		{
			cin >> tea[i].stu[j].score;
		}
		


	}
}
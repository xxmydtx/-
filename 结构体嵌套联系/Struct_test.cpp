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


void inputTeacher(struct teacher* tea, int len);
void printTeacher(struct teacher* tea, int len);
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
	student stuArray[5];
};

void main()
{
	struct teacher teaArray[3];


	int len = sizeof(teaArray) / sizeof(teaArray[0]);

	inputTeacher(teaArray, len);
	printTeacher(teaArray, len);

	system("pause");
}
void inputTeacher( struct teacher* tea,int len)
{
	string name_seed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tea[i].name = "Teacher_";
		tea[i].name += name_seed[i];

		cout << "������ʦ"<< tea[i].name <<"�����ѧ���ɼ�" << endl;
		for (int j = 0; j < 5; j++)
		{
			cin >> tea[i].stuArray[j].score;
		}
	}
}

void printTeacher(struct teacher* tea, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tea[i].name << "�����ѧ���ɼ�Ϊ��";
		for (int j = 0; j < 5; j++)
		{
			cout << tea[i].stuArray[j].score<<" ";
		}
		cout << endl;
	}
}
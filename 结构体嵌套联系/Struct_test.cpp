/*
**案例描述：**

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。
*/

#include<iostream>
#include<string>

using namespace std;


void inputTeacher(struct teacher* tea, int len);
void printTeacher(struct teacher* tea, int len);
//注意：学生结构体一定要在老师结构体之前创建。
//子结构体先创立。
//2.创建学生结构体
struct student
{
	string name;
	int score;

};
//1.创建老师结构体
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

		cout << "输入老师"<< tea[i].name <<"的五个学生成绩" << endl;
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
		cout << tea[i].name << "的五个学生成绩为：";
		for (int j = 0; j < 5; j++)
		{
			cout << tea[i].stuArray[j].score<<" ";
		}
		cout << endl;
	}
}
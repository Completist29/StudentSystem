#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
	Student()
	{
		name;
		cls = 0;
		grade;
	}
	~Student()
	{
		delete []name;
	}
	void putIn();
	void display();

private:
	char* name = new char[20];
	int cls;
	string grade;
};
void Student::putIn()
{
	cin >> name >> cls >> grade;
}
void Student::display()
{
	cout << "姓名：" << name << " 班级：" << cls << " 年级：" << grade << endl;
}

int creatNum()
{
	cout << "请输入要存放的数据数量：";
	int x;
	cin >> x;
	cout << "输入格式：姓名 班级 年级" << endl;
	return x;
}
void text(void)
{
	cout << "----[a].显示数据\n";
	cout << "----[b].修改数据\n";
	cout << "----[c].清屏\n";
	cout << "功能选择:";
}
void control(void)
{
	cout << "----[学 生 数 据 管 理 系 统]----" << endl;
	cout << "请输入要存放的数据数量：";
	int num;
	cin >> num;
	cout << "输入格式：姓名 班级 年级" << endl;
	Student* stu = new Student[num];
	for (int i = 0; i < num; i++)
		stu[i].putIn();
	system("cls");
	cout << "输入完成\n";
	while (1)
	{
		text();
		char ch;
		cin >> ch;
		if (ch == 'a')
		{
			for (int i = 0; i < num; i++)
			{
				cout << "[NO." << i + 1 << "] ";
				stu[i].display();
			}
		}
		else if (ch == 'b')
		{
			cout << "请输入需要更改的数据的序号：";
			int no_1;
			cin >> no_1;
			cout << "输入：";
			stu[no_1 - 1].putIn();
		}
		else if (ch == 'c')
			system("cls");
	}
}
int main()
{
	control();
	system("pause");
	return 0;
}

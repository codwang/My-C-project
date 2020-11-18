#include<iostream>
#include<string>
#pragma warning(disable:4996)
using namespace std;
class Student {
private:
	int _age;
	string _name;
	string _sex;
public:
	static int id;
public:
	Student(int age  , string name , string sex)
		:_age(age)  //初始化
		,_name(name)
		,_sex(sex)
	{
		cout << "构造函数Student" << this << endl;
		   //赋值
	}
	/*Student() 
	{
		cout << "无参构造函数:" << this << endl;
	}*/
	explicit Student(int age = 0)
	{
		_age = age;
		cout << "单参构造函数:" << this << endl;
	}
	Student(Student& d)
	{
		cout << "拷贝构造函数Student&" << this <<endl;
		this->_age = d._age;
		this->_name = d._name;
		this->_sex = d._sex;
		
	}
	~Student()
	{
		cout << "析构函数~Student" << this<<endl;
	}
	bool operator==(const Student &d)
	{
		cout << "运算符重载" << endl;
		return _age == d._age && _name == d._name && _sex == d._sex;
	}
	//Student& operator=(const Student& d)
	//{
	//	cout << "重载运算符=" << this<<endl;
	//	(*this)._age = d._age;
	//	(*this)._name = d._name;
	//	(*this)._sex = d._sex;
	//	return *this;
	//}
	void Show()
	{
		cout << "年龄:" << _age << "姓名:" << _name << "性别:" << _sex << endl;
	}

};
int Student::id = 0;


//Student TestStudent1(Student d)
//{
//	Student temp(d);
//	temp = d;
//	return temp;
//}
//Student& TestStudent1(Student& d)
//{
//	Student temp(d);
//	temp = d;
//	return d;
//}
//void TestStudent()
//{
//	Student s1(19, "lisi", "w");
//	Student s2(s1);
//	s2 = TestStudent1(s1);
//}

//int main()
//{
//	//Student s1(15);
//	//Student s2(19, "lisi", "w");
//	//Student s3(s2);
//	//TestStudent();
//	//cout << s1.id << endl;
//	Student x;
//	Student y = x;
//	x = y;
//	return 0;
//}
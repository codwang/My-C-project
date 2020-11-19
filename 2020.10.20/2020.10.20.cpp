#include<iostream>
#include<string>
#pragma warning(disable:4996)
using namespace std;
#if 0
class Solution {
public:
	static int sum;
	static int i;
	class Sum {
	public:
		Sum() {
			sum += i;
			i++;
		}
		~Sum() {
			sum = 0;
			i = 1;
		}
	};
public:
	int Sum_Solution(int n)
	{
		//Sum arr[n];
		return sum;
	}
};
int Solution::sum = 0;
int Solution::i = 1;
#endif
#if 0
class Person {
public:
	Person() {
		
		cout << "无参构造函数Person()" <<this <<endl;
	}
	~Person() {
		cout << "析构函数~Person()" << this << endl;
	}
private:
	int age;
	string name;
};
class Student {
public:
	Student() {
		arr = (int*)malloc(sizeof(int) * 10);
		cout << "无参构造函数Student()" <<this <<endl;
	}
	Student(int age, string name , string sex) {
		_age = age;
		_name = name;
		_sex = sex;
		cout << "带参构造函数Student(int age, string name, string sex)" << this << endl;
	}
	~Student() {
		free(arr);
		cout << "析构函数~Student()" << this << endl;
	}
	Student(const Student &d) {
		cout << "拷贝构造函数Student(const Student& d)" << this << endl;
		_age = d._age;
		_name = d._name;
		_sex = d._sex;
	}
	bool operator==(const Student& d) {
			return _age == d._age
				&& _name == d._name
				&& _sex == d._sex;
	}
	Student& operator=(const Student& d) {
		if (this != &d) {
			_age = d._age;
			_name = d._name;
			_sex = d._sex;
		}
		return *this;
	}
	void Show1()const {
		cout << "const成员函数" << endl;
		
	}
	void Show()  {
		cout << "非const成员函数" << endl;
		cout << _age << "-" << _name << "-" << _sex << endl;
	}
	void Show() const{
		cout << "const成员函数" << endl;
		cout << _age << "-" << _name << "-" << _sex << endl;
	}
public:
	int _age;
	string _name;
	string _sex;
	int* arr;
	//Person p;
};
//bool operator==(const Student& d1, const Student& d2) {
//	return d1._age == d2._age
//	&& d1._name == d2._name
//		&& d1._sex == d2._sex;
//}
int main()
{
	Student s1;
	s1.Show();
	s1.Show1();
	const Student s2;
	s2.Show();
	s2.Show1();
    return 0;
}
#endif
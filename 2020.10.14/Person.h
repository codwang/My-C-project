#pragma once
//ÀàµÄÉùÃ÷
class Person
{
public:
	void InitPerson(const char *name,const char *gender,int age);
	void Eat();
	void Sleep();
	void PrintPersonInfo();
public:
	char _name[20];
	char _gender[3];
	int _age;
};


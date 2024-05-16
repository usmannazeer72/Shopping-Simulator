#pragma once
#include<iostream>
#include <fstream>
#include <string>
using namespace std;

//User class that will be inherited by admin Manager Customer
class User
{
protected:
	char name[40];
	char Password[20];
	char Gender[6];
	char cnic[14];
	int phoneno;
	int age;
	char Address[50];

public:
	User()
	{}
	User(string n, string p, string g, string c, int phoneno, int age, string add)
	{
		strcpy_s(name, n.c_str());
		strcpy_s(Password, p.c_str());
		strcpy_s(Gender, g.c_str());
		strcpy_s(cnic, c.c_str());
		this->phoneno = phoneno;
		this->age = age;
		strcpy_s(Address, add.c_str());
	}
	void setCnic(string c)
	{
		strcpy_s(cnic, c.c_str());
	}
	void setPassword(string p)
	{
		strcpy_s(Password, p.c_str());
	}
	void setGender(string g)
	{
		strcpy_s(Gender, g.c_str());
	}
	void setname(string n)
	{
		strcpy_s(name, n.c_str());
	}
	void setaddress(string add)
	{
		strcpy_s(Address, add.c_str());
	}
	void setphone(int phoneno)
	{
		this->phoneno = phoneno;
	}
	void setage(int age)
	{
		this->age = age;
	}
	string getname()
	{
		return name;
	}
	string getpassword()
	{
		return Password;
	}
	string getCnic()
	{
		return cnic;
	}
	string getGender()
	{
		return Gender;
	}
	string getAddress()
	{
		return Address;
	}
	int getphone()
	{
		return phoneno;
	}
	int getage()
	{
		return age;
	}
	//POLYMORPHICALLY PASSING LOGIN FUNCTION TO INHERITED CLASSES
	virtual bool check_pass(string p)
	{
		int up = 0, low = 0, num = 0, spc = 0;

		for (int i = 0; i < p.length(); i++)
		{
			if (p[i] >= 'A' && p[i] <= 'Z')
			{
				up++;
			}
			else if (p[i] >= 'a' && p[i] <= 'z')
			{
				low++;
			}
			else if (p[i] >= '0' && p[i] <= '9')
			{
				num++;
			}
			else
			{
				spc++;

			}
		}

		if (spc >= 1 && low >= 1 && num >= 1 && up >= 1 && p.length() >= 8)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//POLYMORPHICALLY PASSING CNIC CHECK FUNCTION TO INHERITED CLASSES
	virtual bool check_cnic(string c)
	{
		if (c.length() > 0 && c.length() < 14)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	virtual void display()
	{

		cout << "NAME			 : " << name << endl;
		cout << "Password			 : " << Password << endl;
		cout << "CNIC			 : " << cnic << endl;
		cout << "GENDER			 : " << Gender << endl;
		cout << "AGE			 : " << age << endl;
		cout << "PHONENO			 : " << phoneno << endl;
		cout << "ADDRESS			 : " << Address << endl;
	}
};





#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "User.h"
#include "OShopping.h"
#include "Feedback.h"
using namespace std;

class Customer1 :public User
{

public:
	
	FeedBack fb;
	Customer1() {}
	Customer1(string n,string p,string g,string c,int phoneno,int age,string add)
	{
		strcpy_s(name, n.c_str());
		strcpy_s(Password, p.c_str());
		strcpy_s(Gender, g.c_str());
		strcpy_s(cnic, c.c_str());
		this->phoneno = phoneno;
		this->age = age;
		strcpy_s(Address, add.c_str());
	}
	bool check_pass(string p)
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

	bool check_cnic(string c)
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
	void display()
	{

		cout << "NAME			 : " << name << endl;
		cout << "Password			 : " << Password << endl;
		cout << "CNIC			 : " << cnic << endl;
		cout << "GENDER			 : " << Gender << endl;
		cout << "AGE			 : " << age << endl;
		cout << "PHONENO			 : " << phoneno << endl;
		cout << "ADDRESS			 : " << Address << endl;
	}
	void R_loginCustomer(string n1)
	{
		Customer1 temp;
		ifstream fin("Cu3.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{
			temp.getname();
			temp.getpassword();
		}
		fin.close();
	}
	void W_loginCustomer(string n1, Customer1 A)
	{

		ofstream fout("Cu3.dat", ios::binary | ios::app);
		if (fout.write((char*)&A, sizeof(A)))
		{
			cout << "";
		}
		fout.close();
	}

	void W_RegisterCustomer(string n1, Customer1 A)
	{
		ofstream fout("CM3.dat", ios::binary | ios::app);
		if (fout.write((char*)&A, sizeof(A)))
		{
			cout << "";
		}
		fout.close();
	}
	void R_RegisterCustomer(string n1)
	{
		Customer1 A;
		ifstream fin("CM3.dat", ios::binary | ios::app);
		if (fin.read((char*)&A, sizeof(A)))
		{
			A.getname();
			A.getpassword();
			A.getGender();
			A.getCnic();
			A.getage();
			A.getphone();
			A.getAddress();
		}
		fin.close();
	}

	void Shopping()
	{
		
		int ch;
		
		
			cout << " Do you want to give Feedback Y/N" << endl;
			cin >> ch;
			if (ch == 1)
			{
				fb.giveFeedback();
				fb.DisplayFeedback();
			}
			else
			{
				cout << " Thank you " << endl;
			}
	}
};

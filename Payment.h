#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "OShopping.h"
using namespace std;


// E-TRANSACTION class that will allow user to make e-transaction
class ETransaction
{
protected:
	char wallet[20];
public:
	ETransaction() {}
	ETransaction(string w)
	{
		strcpy_s(wallet, w.c_str());
	}
	virtual void setwallet(string w)
	{
		strcpy_s(wallet, w.c_str());
	}
	virtual string getwallet()
	{
		return wallet;
	}

};

// Bank class that will allow user to make transaction through bank
class Bank
{
protected:
	char wallet[20];
public:
	Bank() {}
	Bank(string w)
	{
		strcpy_s(wallet, w.c_str());
	}
	virtual void setwallet(string w)
	{
		strcpy_s(wallet, w.c_str());
	}
	virtual string getwallet()
	{
		return wallet;
	}

};

// Paymet class that wil allow user to make transaction
class Payment : public Bank, public ETransaction
{
protected:
	int totalprice;
	int Amount;
	OnlineShopping* O;
	char wallet[50];
	int mode1;
public:
	Payment() 
	{
	   
	}
	Payment(int t, OnlineShopping* o, string w, int m)
	{
		strcpy_s(wallet, w.c_str());
		totalprice = t;
		O = o;
		mode1 = m;
		
	}
	void setwallet(string w)
	{
		strcpy_s(wallet, w.c_str());
	}
	string getwallet()
	{
		return wallet;
	}
	void setAmount(int a)
	{
		Amount = a;
	}
	int getmount()
	{
		return Amount;
	}
	void setmode(int m)
	{
		mode1 = m;
	}
	int getmode()
	{
		return mode1;
	}
	// A function that will alow user to choose mode of payment
	void modeofPayment()
	{
		int mode;
		int am;
		string bs;
		string rs;
		string e;
		ETransaction E;
		Bank B;
		Payment temp;
		cout << " Please choose your mode of payment" << endl;
		cout << " 1. Cash on delivery " << endl;
		cout << " 2. Bank transfer " << endl;
		cout << " 3. E-transaction " << endl;
		cin >> mode;
		setmode(mode);
		if (mode == 1)
		{
			cout << " Enter the store you are buying from " << endl;
			cin >> bs;
			cout << " Enter the city you are present " << endl;
			cin >> rs;
			if (bs == rs)
			{
				totalprice = O->getTp() + 30;
				cout << " The total Payment for order with delivery charges is :" << endl;
				cout << " " << totalprice << endl;
				temp.setAmount(10000);
			am = temp.getmount() - totalprice;
			cout << totalprice << endl;
			cout << " Balance " <<  endl;
			cout << am << endl;
			}
			else
			{
				totalprice = O->getTp() + 50;
				cout << " The total Payment for order with delivery charges is :" << endl;
				cout << " " << totalprice << endl;
				temp.setAmount(10000);
			am = temp.getmount() - totalprice;
			cout << totalprice << endl;
			cout << " Balance " <<  endl;
			cout << am << endl;
			}
			ifstream fin("Payment.dat", ios::binary | ios::app);
			if (fin.read((char*)&temp, sizeof(temp)))
			{
				temp.totalprice;
			}
			fin.close();

			ofstream fout("Payment.dat", ios::binary | ios::app);
			if (fout.write((char*)&temp, sizeof(temp)))
			{
				cout << "";
			}
			fout.close();
		}

		else if (mode == 2)
		{
			cout << " Enter your Bank name " << endl;
			cin >> e;
			temp.setwallet(e);

			cout << "    " << temp.getwallet() << "    " << endl;
			totalprice = O->getTp() + 25;
			cout << " The total Payment for order with transaction fee is :" << endl;
			cout << " " << totalprice << endl;
			cout << " Amount Paid " << endl;
			temp.setAmount(10000);
			am = temp.getmount() - totalprice;
			cout << totalprice << endl;
			cout << " Balance " <<  endl;
			cout << am << endl;
			ifstream fin("Payment.dat", ios::binary | ios::app);
			if (fin.read((char*)&temp, sizeof(temp)))
			{
				temp.getwallet();
			}
			fin.close();
			Payment temp;
			ofstream fout("Payment.dat", ios::binary | ios::app);
			if (fout.write((char*)&temp, sizeof(temp)))
			{
				cout << "";
			}
			fout.close();
		}
		else if (mode == 3)
		{
			cout << " Enter your Wallet name " << endl;
			cin >> e;
			temp.setwallet(e);
			cout << "    " << temp.getwallet() << "    " << endl;
			totalprice = O->getTp() + 15;
			cout << " The total Payment for order with transaction fee is :" << endl;
			cout << " " << totalprice << endl;
			temp.setAmount(10000);
			am = temp.getmount() - totalprice;
			cout << totalprice << endl;
			cout << " Balance " <<  endl;
			cout << am << endl;
			ifstream fin("Payment.dat", ios::binary | ios::app);
			if (fin.read((char*)&temp, sizeof(temp)))
			{
				temp.getwallet();
			}
			fin.close();
			Payment temp;
			ofstream fout("Payment.dat", ios::binary | ios::app);
			if (fout.write((char*)&temp, sizeof(temp)))
			{
				cout << "";
			}
			fout.close();
		}

	}

};


// A class that will allow admin to run simulation system

class Simulation : public Payment, public OnlineShopping
{
protected:
	char mode[50];
	float time1;
public:

	Simulation()
	{}
	Simulation(string m, int t)
	{
		strcpy_s(mode, m.c_str());
		time1 = t;
	}
	void setmode(string m)
	{
		strcpy_s(mode, m.c_str());
	}
	string getmode()
	{
		return mode;
	}
	void settime(float t)
	{
		time1 = t;
	}
	float gettime()
	{
		return time1;
	}
	void SimulationConfiguration()
	{
		float ti;
		float t;
		Simulation S;
		string m;
		cout << " Please Enter No of items customer wants to buy " << endl;
		cin >> ti;
		t = ti * 5;
		cout << " Please enter the mode of transaction " << endl;
		cin >> m;
		setmode(m);
		settime(t);
		if (m == "Debit Card")
		{
			t = gettime() * 2;
			t = t / 60;
			settime(t);
		}
		else if (m == "Cash")
		{
			t = gettime() * 1;
			t = t / 60;
			settime(t);
		}
		else if (m == "Cash")
		{
			t = gettime() * 2.5;
			t = t / 60;
			settime(t);
		}

		cout << " Total checkout time is " << endl;
		cout << gettime();

		ifstream fin("Sim.dat", ios::binary | ios::app);
		if (fin.read((char*)&S, sizeof(S)))
		{
			S.getmode();
			S.gettime();
		}
		fin.close();
		Payment temp;
		ofstream fout("Sim.dat", ios::binary | ios::app);
		if (fout.write((char*)&S, sizeof(S)))
		{
			cout << "";
		}
		fout.close();
	}
	void CheckoutSimulation()
	{
		float t;
		string m;
		Simulation S;
		t = S.getsize1() * 5;
		cout << " Please enter the mode of transaction " << endl;
		cin >> m;
		S.setmode(m);
		S.settime(t);
		if (m == "DebitCard")
		{
			t = gettime() * 2;
			t = t / 60;
			S.settime(t);
		}
		else if (m == "Cash")
		{
			t = gettime() * 1;
			t = t / 60;
			S.settime(t);
		}
		else if (m == "Cheque")
		{
			t = S.gettime() * 2.5;
			t = t / 60;
			S.settime(t);
		}

		cout << " Total checkout time is " << endl;
		cout << S.gettime();

		ifstream fin("Sim1.dat", ios::binary | ios::app);
		if (fin.read((char*)&S, sizeof(S)))
		{
			S.getmode();
			S.gettime();
		}
		fin.close();
		Payment temp;
		ofstream fout("Sim1.dat", ios::binary | ios::app);
		if (fout.write((char*)&S, sizeof(S)))
		{
			cout << "";
		}
		fout.close();

	}
};



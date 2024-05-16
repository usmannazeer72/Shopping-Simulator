#pragma once
#include<iostream>
#include <fstream>
#include <string>
using namespace std;


// feedback class will allow user to give his feedback so that store can improve their provided services
class FeedBack
{
protected:
	char opinion[100];
	int stars;
public:
	FeedBack() {}
	FeedBack(string op, int s)
	{
		strcpy_s(opinion, op.c_str());
		stars = s;
	}
	void setOpinion(string op)
	{
		strcpy_s(opinion, op.c_str());
	}
	void setstar(int s)
	{
		stars = s;
	}
	string getopinion()
	{
		return opinion;
	}
	int getstar()
	{
		return stars;
	}

	void giveFeedback()
	{
		string fb;
		int st;
		cout << " Please enter your feedback " << endl;
		cin >> fb;
		setOpinion(fb);
		cout << " Please give your rating " << endl;
		cin >> st;
		setstar(st);

	}
	void DisplayFeedback()
	{
		cout << getopinion() << endl;
		if (getstar() == 1)
		{
			cout << "*" << endl;
		}
		else if (getstar() == 2)
		{
			cout << "**" << endl;
		}
		else if (getstar() == 3)
		{
			cout << "***" << endl;
		}
		else if (getstar() == 4)
		{
			cout << "****" << endl;
		}
		else if (getstar() == 5)
		{
			cout << "*****" << endl;
		}

	}
};

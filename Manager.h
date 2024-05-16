#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "User.h"
#include "Inventory.h"
#include "Feedback.h"
using namespace std;

//Manager class that will inherit user class
// Aggregated with feedback and inventory
class Manager : public User
{
protected:
	Inventory* I;
	FeedBack* fb;
public:
	Manager() {}
	Manager(string n, string p, string g, string c, int phoneno, int age, string add, Inventory* I1, FeedBack* f)
	{
		strcpy_s(name, n.c_str());
		strcpy_s(Password, p.c_str());
		strcpy_s(Gender, g.c_str());
		strcpy_s(cnic, c.c_str());
		this->phoneno = phoneno;
		this->age = age;
		strcpy_s(Address, add.c_str());
		I = I1;
		fb = f;
	}
	void DisplayManager()
	{
		cout << "NAME			 : " << name << endl;
		cout << "Password			 : " << Password << endl;
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
	//reading and writing login files
	void R_loginManager(string n1)
	{
		Manager temp;
		ifstream fin("Ma3.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{
			temp.getname();
			temp.getpassword();
		}
		fin.close();
	}
	void W_loginManager(string n1, Manager A)
	{

		ofstream fout("Ma3.dat", ios::binary | ios::app);
		if (fout.write((char*)&A, sizeof(A)))
		{
			cout << "";
		}
		fout.close();
	}
	//  A function that will help Manager to manage inventory  to add/remove or update items
	void ManageInventory()
	{
		Admin A;
		Inventory k;
		string store1;
		string i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i13, i14, i12, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25;
		int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20;
		int option;
		char c;
		do
		{
			cout << " Do you want to Add / Delete / Update / Search / View Inventory items" << endl;
			cout << " 1. Add " << endl;
			cout << " 2. Delete " << endl;
			cout << " 3. Update " << endl;
			cout << " 4. Search " << endl;
			cout << " 5. View " << endl;
			cin >> option;
			if (option == 1)
			{
				cout << " Enter the store you want to add items to inventory" << endl;
				cin >> store1;
				A.setstore(store1);
				if (store1 =="Islamabad")
				{
					cout << " Please Enter items into the inventory" << endl;
					cin >> i1;
					cin >> i2;
					cin >> i3;
					cin >> i4;
					cin >> i5;
					cin >> i6;
					cin >> i7;
					cin >> i8;
					cin >> i9;
					cin >> i10;
					cin >> i11;
					cin >> i12;
					cin >> i13;
					cin >> i14;
					cin >> i15;
					cin >> i16;
					cin >> i17;
					cin >> i18;
					cin >> i19;
					cin >> i20;
					cout << " Please Enter Quantity of each item" << endl;
					cin >> p1;
					cin >> p2;
					cin >> p3;
					cin >> p4;
					cin >> p5;
					cin >> p6;
					cin >> p7;
					cin >> p8;
					cin >> p9;
					cin >> p10;
					cin >> p11;
					cin >> p12;
					cin >> p13;
					cin >> p14;
					cin >> p15;
					cin >> p16;
					cin >> p17;
					cin >> p18;
					cin >> p19;
					cin >> p20;
				}
				else if (store1 == "Lahore")
				{
					cout << " Please Enter items into the inventory" << endl;
					cin >> i1;
					cin >> i2;
					cin >> i3;
					cin >> i4;
					cin >> i5;
					cin >> i6;
					cin >> i7;
					cin >> i8;
					cin >> i9;
					cin >> i10;
					cin >> i11;
					cin >> i12;
					cin >> i13;
					cin >> i14;
					cin >> i15;
					cin >> i16;
					cin >> i17;
					cin >> i18;
					cin >> i19;
					cin >> i20;
					cout << " Please Enter Quantity of each item" << endl;
					cin >> p1;
					cin >> p2;
					cin >> p3;
					cin >> p4;
					cin >> p5;
					cin >> p6;
					cin >> p7;
					cin >> p8;
					cin >> p9;
					cin >> p10;
					cin >> p11;
					cin >> p12;
					cin >> p13;
					cin >> p14;
					cin >> p15;
					cin >> p16;
					cin >> p17;
					cin >> p18;
					cin >> p19;
					cin >> p20;
				}
				else if (store1 =="Karachi")
				{
					cout << " Please Enter items into the inventory" << endl;
					cin >> i1;
					cin >> i2;
					cin >> i3;
					cin >> i4;
					cin >> i5;
					cin >> i6;
					cin >> i7;
					cin >> i8;
					cin >> i9;
					cin >> i10;
					cin >> i11;
					cin >> i12;
					cin >> i13;
					cin >> i14;
					cin >> i15;
					cin >> i16;
					cin >> i17;
					cin >> i18;
					cin >> i19;
					cin >> i20;
					cout << " Please Enter Quantity of each item" << endl;
					cin >> p1;
					cin >> p2;
					cin >> p3;
					cin >> p4;
					cin >> p5;
					cin >> p6;
					cin >> p7;
					cin >> p8;
					cin >> p9;
					cin >> p10;
					cin >> p11;
					cin >> p12;
					cin >> p13;
					cin >> p14;
					cin >> p15;
					cin >> p16;
					cin >> p17;
					cin >> p18;
					cin >> p19;
					cin >> p20;
				}
				I->setitem1(i1);
				I->setitem2(i2);
				I->setitem3(i3);
				I->setitem4(i4);
				I->setitem5(i5);
				I->setitem6(i6);
				I->setitem7(i7);
				I->setitem8(i8);
				I->setitem9(i9);
				I->setitem10(i10);
				I->setitem11(i11);
				I->setitem12(i12);
				I->setitem13(i13);
				I->setitem14(i14);
				I->setitem15(i15);
				I->setitem16(i16);
				I->setitem17(i17);
				I->setitem18(i18);
				I->setitem19(i19);
				I->setitem20(i20);
				I->setp1(p1);
				I->setp2(p2);
				I->setp3(p3);
				I->setp4(p4);
				I->setp5(p5);
				I->setp6(p6);
				I->setp7(p7);
				I->setp8(p8);
				I->setp9(p9);
				I->setp10(p10);
				I->setp11(p11);
				I->setp12(p12);
				I->setp13(p13);
				I->setp14(p14);
				I->setp15(p15);
				I->setp16(p16);
				I->setp17(p17);
				I->setp18(p18);
				I->setp19(p19);
				I->setp20(p20);
				if (store1 == "Islamabad")
				{
					string s1 = "chicken";
					I->I_AddInventoryitems(s1);
					I->WriteIsl(*I, s1);
				}
				else if (store1 == "Lahore")
				{
					string s1 = "chicken";
					I->L_AddInventoryitems(s1);
					I->WriteLah(*I, s1);
				}
				else if (store1 == "Karachi")
				{
					string s1 = "chicken";
					I->K_AddInventoryitems(s1);
					I->WriteKar(*I, s1);
				}

			}
			else if (option == 2)
			{
				
				cout << " Enter the store you want to add items to inventory" << endl;
				cin >> store1;
				if (store1 == "Islamabad")
				{
					string s1;
					cout << " Enter the item you want to delete" << endl;
					cin >> s1;
					I->I_deleteInventoryitems(s1);
				}
				else if (store1 == "Lahore")
				{
					string s1;
					cout << " Enter the item you want to delete" << endl;
					cin >> s1;
					I->L_deleteInventoryitems(s1);
				}
				else if (store1 == "Karachi")
				{
					string s1;
					cout << " Enter the item you want to delete" << endl;
					cin >> s1;
					I->K_deleteInventoryitems(s1);
				}

			}
			else if (option == 3)
			{
				
				cout << " Enter the store you want to add items to inventory" << endl;
				cin >> store1;
				if (store1 == "Islamabad")
				{
					cout << " Please Enter Quantity of each item" << endl;
					cin >> p1;
					cin >> p2;
					cin >> p3;
					cin >> p4;
					cin >> p5;
					cin >> p6;
					cin >> p7;
					cin >> p8;
					cin >> p9;
					cin >> p10;
					cin >> p11;
					cin >> p12;
					cin >> p13;
					cin >> p14;
					cin >> p15;
					cin >> p16;
					cin >> p17;
					cin >> p18;
					cin >> p19;
					cin >> p20;
					I->setp1(p1);
					I->setp2(p2);
					I->setp3(p3);
					I->setp4(p4);
					I->setp5(p5);
					I->setp6(p6);
					I->setp7(p7);
					I->setp8(p8);
					I->setp9(p9);
					I->setp10(p10);
					I->setp11(p11);
					I->setp12(p12);
					I->setp13(p13);
					I->setp14(p14);
					I->setp15(p15);
					I->setp16(p16);
					I->setp17(p17);
					I->setp18(p18);
					I->setp19(p19);
					I->setp20(p20);
					I->I_UpdateInventoryitems(*I);
				}
				else if (store1 == "Lahore")
				{
					cout << " Please Enter Quantity of each item" << endl;
					cin >> p1;
					cin >> p2;
					cin >> p3;
					cin >> p4;
					cin >> p5;
					cin >> p6;
					cin >> p7;
					cin >> p8;
					cin >> p9;
					cin >> p10;
					cin >> p11;
					cin >> p12;
					cin >> p13;
					cin >> p14;
					cin >> p15;
					cin >> p16;
					cin >> p17;
					cin >> p18;
					cin >> p19;
					cin >> p20;
					I->setp1(p1);
					I->setp2(p2);
					I->setp3(p3);
					I->setp4(p4);
					I->setp5(p5);
					I->setp6(p6);
					I->setp7(p7);
					I->setp8(p8);
					I->setp9(p9);
					I->setp10(p10);
					I->setp11(p11);
					I->setp12(p12);
					I->setp13(p13);
					I->setp14(p14);
					I->setp15(p15);
					I->setp16(p16);
					I->setp17(p17);
					I->setp18(p18);
					I->setp19(p19);
					I->setp20(p20);
					I->L_UpdateInventoryitems(*I);
				}
				else if (store1 == "Karachi")
				{
					cout << " Please Enter Quantity of each item" << endl;
					cin >> p1;
					cin >> p2;
					cin >> p3;
					cin >> p4;
					cin >> p5;
					cin >> p6;
					cin >> p7;
					cin >> p8;
					cin >> p9;
					cin >> p10;
					cin >> p11;
					cin >> p12;
					cin >> p13;
					cin >> p14;
					cin >> p15;
					cin >> p16;
					cin >> p17;
					cin >> p18;
					cin >> p19;
					cin >> p20;
					I->setp1(p1);
					I->setp2(p2);
					I->setp3(p3);
					I->setp4(p4);
					I->setp5(p5);
					I->setp6(p6);
					I->setp7(p7);
					I->setp8(p8);
					I->setp9(p9);
					I->setp10(p10);
					I->setp11(p11);
					I->setp12(p12);
					I->setp13(p13);
					I->setp14(p14);
					I->setp15(p15);
					I->setp16(p16);
					I->setp17(p17);
					I->setp18(p18);
					I->setp19(p19);
					I->setp20(p20);
					I->K_UpdateInventoryitems(*I);
				}
			}
			else if (option == 4)
			{
				I->searchItems();
			}
			else if (option == 5)
			{
				I->viewInventoryItems();
			}

			cout << " Do you want to countinue Y/N " << endl;
			cin >> c;
		} while (c == 'Y' || c == 'y');
	}

	// Manager will view feedback from customers
	void Feedback1()
	{
		fb->DisplayFeedback();
	}
};







#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "Admin.h"

// A store class that will hold items at each store

using namespace std;
class Store
{
public:
	char item1[30];
	char item2[30];
	char item3[30];
	char item4[30];
	char item5[30];
	char item6[30];
	char item7[30];
	char item8[30];
	char item9[30];
	char item10[30];
	char item11[30];
	char item12[30];
	char item13[30];
	char item14[30];
	char item15[30];
	char item16[30];
	char item17[30];
	char item18[30];
	char item19[30];
	char item20[30];
	int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20;
	Store()
	{
		p1 = 100;
		p2 = 100;
		p3 = 100;
		p4 = 100;
		p5 = 100;
		p6 = 100;
		p7 = 100;
		p8 = 100;
		p9 = 100;
		p10 = 100;
		p11 = 100;
		p12 = 100;
		p13 = 100;
		p14 = 100;
		p15 = 100;
		p16 = 100;
		p17 = 100;
		p18 = 100;
		p19 = 100;
		p20 = 100;

	}
	Store(string i1, string i2, string i3, string i4, string i5, string i6, string i7, string i8, string i9, string i10, string i11, string i12, string i13, string i14, string i15, string i16, string i17, string i18, string i19, string i20)
	{
		strcpy_s(item1, i1.c_str());
		strcpy_s(item2, i2.c_str());
		strcpy_s(item3, i3.c_str());
		strcpy_s(item4, i4.c_str());
		strcpy_s(item5, i5.c_str());
		strcpy_s(item6, i6.c_str());
		strcpy_s(item7, i7.c_str());
		strcpy_s(item8, i8.c_str());
		strcpy_s(item9, i9.c_str());
		strcpy_s(item10, i10.c_str());
		strcpy_s(item1, i11.c_str());
		strcpy_s(item11, i12.c_str());
		strcpy_s(item12, i12.c_str());
		strcpy_s(item13, i13.c_str());
		strcpy_s(item14, i14.c_str());
		strcpy_s(item15, i15.c_str());
		strcpy_s(item16, i16.c_str());
		strcpy_s(item17, i17.c_str());
		strcpy_s(item18, i18.c_str());
		strcpy_s(item19, i19.c_str());
		strcpy_s(item20, i20.c_str());
	}
	void setitem1(string i1) { strcpy_s(item1, i1.c_str()); }
	void setitem2(string i2) { strcpy_s(item2, i2.c_str()); }
	void setitem3(string i3) { strcpy_s(item3, i3.c_str()); }
	void setitem4(string i4) { strcpy_s(item4, i4.c_str()); }
	void setitem5(string i5) { strcpy_s(item5, i5.c_str()); }
	void setitem6(string i6) { strcpy_s(item6, i6.c_str()); }
	void setitem7(string i7) { strcpy_s(item7, i7.c_str()); }
	void setitem8(string i8) { strcpy_s(item8, i8.c_str()); }
	void setitem9(string i9) { strcpy_s(item9, i9.c_str()); }
	void setitem10(string i10) { strcpy_s(item10, i10.c_str()); }
	void setitem11(string i11) { strcpy_s(item11, i11.c_str()); }
	void setitem12(string i12) { strcpy_s(item12, i12.c_str()); }
	void setitem13(string i13) { strcpy_s(item13, i13.c_str()); }
	void setitem14(string i14) { strcpy_s(item14, i14.c_str()); }
	void setitem15(string i15) { strcpy_s(item15, i15.c_str()); }
	void setitem16(string i16) { strcpy_s(item16, i16.c_str()); }
	void setitem17(string i17) { strcpy_s(item17, i17.c_str()); }
	void setitem18(string i18) { strcpy_s(item18, i18.c_str()); }
	void setitem19(string i19) { strcpy_s(item19, i19.c_str()); }
	void setitem20(string i20) { strcpy_s(item20, i20.c_str()); }
	void setp1(int p1) { this->p1 = p1; }
	void setp2(int p2) { this->p2 = p2; }
	void setp3(int p3) { this->p3 = p3; }
	void setp4(int p4) { this->p4 = p4; }
	void setp5(int p5) { this->p5 = p5; }
	void setp6(int p6) { this->p6 = p6; }
	void setp7(int p7) { this->p7 = p7; }
	void setp8(int p8) { this->p8 = p8; }
	void setp9(int p9) { this->p9 = p9; }
	void setp10(int p10) { this->p10 = p10; }
	void setp11(int p11) { this->p11 = p11; }
	void setp12(int p12) { this->p12 = p12; }
	void setp13(int p13) { this->p13 = p13; }
	void setp14(int p14) { this->p14 = p14; }
	void setp15(int p15) { this->p15 = p15; }
	void setp16(int p16) { this->p16 = p16; }
	void setp17(int p17) { this->p17 = p17; }
	void setp18(int p18) { this->p18 = p18; }
	void setp19(int p19) { this->p19 = p19; }
	void setp20(int p20) { this->p20 = p20; }
	string getitem1() { return item1; }
	string getitem2() { return item2; }
	string getitem3() { return item3; }
	string getitem4() { return item4; }
	string getitem5() { return item5; }
	string getitem6() { return item6; }
	string getitem7() { return item7; }
	string getitem8() { return item8; }
	string getitem9() { return item9; }
	string getitem10() { return item10; }
	string getitem11() { return item11; }
	string getitem12() { return item12; }
	string getitem13() { return item13; }
	string getitem14() { return item14; }
	string getitem15() { return item15; }
	string getitem16() { return item16; }
	string getitem17() { return item17; }
	string getitem18() { return item18; }
	string getitem19() { return item19; }
	string getitem20() { return item20; }
	int getp1() { return p1; }
	int getp2() { return p2; }
	int getp3() { return p3; }
	int getp4() { return p4; }
	int getp5() { return p5; }
	int getp6() { return p6; }
	int getp7() { return p7; }
	int getp8() { return p8; }
	int getp9() { return p9; }
	int getp10() { return p10; }
	int getp11() { return p11; }
	int getp12() { return p12; }
	int getp13() { return p13; }
	int getp14() { return p14; }
	int getp15() { return p15; }
	int getp16() { return p16; }
	int getp17() { return p17; }
	int getp18() { return p18; }
	int getp19() { return p19; }
	int getp20() { return p20; }
};

// Inherits store class 
// AGGREATED with Manager class
class Inventory :public Store
{
public:
	Store s;
	Inventory() {}

	// Adding items to the inventory


	void I_AddInventoryitems(string p1)
	{
		Inventory temp;
		ifstream fin("Isl.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{

			temp.getitem1();
			temp.getitem2();
			temp.getitem3();
			temp.getitem4();
			temp.getitem5();
			temp.getitem6();
			temp.getitem7();
			temp.getitem8();
			temp.getitem9();
			temp.getitem10();
			temp.getitem11();
			temp.getitem12();
			temp.getitem13();
			temp.getitem14();
			temp.getitem15();
			temp.getitem16();
			temp.getitem17();
			temp.getitem18();
			temp.getitem19();
			temp.getitem20();
			temp.getp1();
			temp.getp2();
			temp.getp3();
			temp.getp4();
			temp.getp5();
			temp.getp6();
			temp.getp6();
			temp.getp7();
			temp.getp8();
			temp.getp9();
			temp.getp10();
			temp.getp11();
			temp.getp12();
			temp.getp13();
			temp.getp14();
			temp.getp15();
			temp.getp16();
			temp.getp17();
			temp.getp18();
			temp.getp19();
			temp.getp20();

		}
		fin.close();
	}
	void L_AddInventoryitems(string p1)
	{
		Inventory temp;
		ifstream fin("lah.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{

			temp.getitem1();
			temp.getitem2();
			temp.getitem3();
			temp.getitem4();
			temp.getitem5();
			temp.getitem6();
			temp.getitem7();
			temp.getitem8();
			temp.getitem9();
			temp.getitem10();
			temp.getitem11();
			temp.getitem12();
			temp.getitem13();
			temp.getitem14();
			temp.getitem15();
			temp.getitem16();
			temp.getitem17();
			temp.getitem18();
			temp.getitem19();
			temp.getitem20();
			temp.getp1();
			temp.getp2();
			temp.getp3();
			temp.getp4();
			temp.getp5();
			temp.getp6();
			temp.getp6();
			temp.getp7();
			temp.getp8();
			temp.getp9();
			temp.getp10();
			temp.getp11();
			temp.getp12();
			temp.getp13();
			temp.getp14();
			temp.getp15();
			temp.getp16();
			temp.getp17();
			temp.getp18();
			temp.getp19();
			temp.getp20();

		}
		fin.close();
	}
	void K_AddInventoryitems(string p1)
	{
		Inventory temp;
		ifstream fin("kar.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{

			temp.getitem1();
			temp.getitem2();
			temp.getitem3();
			temp.getitem4();
			temp.getitem5();
			temp.getitem6();
			temp.getitem7();
			temp.getitem8();
			temp.getitem9();
			temp.getitem10();
			temp.getitem11();
			temp.getitem12();
			temp.getitem13();
			temp.getitem14();
			temp.getitem15();
			temp.getitem16();
			temp.getitem17();
			temp.getitem18();
			temp.getitem19();
			temp.getitem20();
			temp.getp1();
			temp.getp2();
			temp.getp3();
			temp.getp4();
			temp.getp5();
			temp.getp6();
			temp.getp6();
			temp.getp7();
			temp.getp8();
			temp.getp9();
			temp.getp10();
			temp.getp11();
			temp.getp12();
			temp.getp13();
			temp.getp14();
			temp.getp15();
			temp.getp16();
			temp.getp17();
			temp.getp18();
			temp.getp19();
			temp.getp20();

		}
		fin.close();
	}

	// Writing data into the file

	void WriteIsl(Inventory temp, string p1)
	{
		ofstream fout("Isl.dat", ios::binary | ios::app);
		if (fout.write((char*)&temp, sizeof(temp)))
		{
			cout << "";
		}
		fout.close();
	}
	void WriteLah(Inventory  temp, string p1)
	{
		ofstream fout("lah.dat", ios::binary | ios::app);
		if (fout.write((char*)&temp, sizeof(temp)))
		{
			cout << "";
		}
		fout.close();
	}
	void WriteKar(Inventory  temp, string p1)
	{
		ofstream fout("kar.dat", ios::binary | ios::app);
		if (fout.write((char*)&temp, sizeof(temp)))
		{
			cout << "";
		}
		fout.close();
	}

	// Delete items from inventory

	void I_deleteInventoryitems(string P1)
	{
		Inventory temp;
		fstream myFile("t10.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp10.dat ", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			{
				myFile_temp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("Isl.dat");
		rename("t10.dat", "Isl.dat");

	}
	void L_deleteInventoryitems(string P1)
	{
		Inventory temp;
		fstream myFile("t10.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp10.dat ", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			{
				myFile_temp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("lah.dat");
		rename("t10.dat", "lah.dat");

	}

	void K_deleteInventoryitems(string P1)
	{
		Inventory temp;
		fstream myFile("t10.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp10.dat ", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			{
				myFile_temp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("Isl.dat");
		rename("t10.dat", "Isl.dat");

	}

	// Updating items from inventory

	void I_UpdateInventoryitems(Inventory temp)
	{
		fstream myFile("Isl.dat", ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {

			temp.getp1();
			temp.getp2();
			temp.getp3();
			temp.getp4();
			temp.getp5();
			temp.getp6();
			temp.getp7();
			temp.getp8();
			temp.getp9();
			temp.getp10();
			temp.getp11();
			temp.getp12();
			temp.getp13();
			temp.getp14();
			temp.getp15();
			temp.getp16();
			temp.getp17();
			temp.getp18();
			temp.getp19();
			temp.getp20();
			int current = myFile.tellg();
			int oneblock = sizeof(temp);
			myFile.seekg(current - oneblock, ios::beg);
			myFile.write((char*)&temp, sizeof(temp));
			break;
		}
		myFile.close();
	}

	void L_UpdateInventoryitems(Inventory temp)
	{
		fstream myFile("Isl.dat", ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {

			temp.getp1();
			temp.getp2();
			temp.getp3();
			temp.getp4();
			temp.getp5();
			temp.getp6();
			temp.getp7();
			temp.getp8();
			temp.getp9();
			temp.getp10();
			temp.getp11();
			temp.getp12();
			temp.getp13();
			temp.getp14();
			temp.getp15();
			temp.getp16();
			temp.getp17();
			temp.getp18();
			temp.getp19();
			temp.getp20();
			int current = myFile.tellg();
			int oneblock = sizeof(temp);
			myFile.seekg(current - oneblock, ios::beg);
			myFile.write((char*)&temp, sizeof(temp));
			break;
		}
		myFile.close();
	}
	void K_UpdateInventoryitems(Inventory temp)
	{
		fstream myFile("Isl.dat", ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {

			temp.getp1();
			temp.getp2();
			temp.getp3();
			temp.getp4();
			temp.getp5();
			temp.getp6();
			temp.getp7();
			temp.getp8();
			temp.getp9();
			temp.getp10();
			temp.getp11();
			temp.getp12();
			temp.getp13();
			temp.getp14();
			temp.getp15();
			temp.getp16();
			temp.getp17();
			temp.getp18();
			temp.getp19();
			temp.getp20();
			int current = myFile.tellg();
			int oneblock = sizeof(temp);
			myFile.seekg(current - oneblock, ios::beg);
			myFile.write((char*)&temp, sizeof(temp));
			break;
		}
		myFile.close();
	}
	void DisplayInventory()
	{
		cout << " ItemNo " << "    " << " Item " << "            " << " Quantity " << endl;
		cout << " 1.     " << "    " << getitem1() << "             " << getp1() << endl;
		cout << " 2.     " << "    " << getitem2() << "             " << getp2() << endl;
		cout << " 3.     " << "    " << getitem3() << "             " << getp3() << endl;
		cout << " 4.     " << "    " << getitem4() << "             " << getp4() << endl;
		cout << " 5.     " << "    " << getitem5() << "             " << getp5() << endl;
		cout << " 6.     " << "    " << getitem6() << "             " << getp6() << endl;
		cout << " 7.     " << "    " << getitem7() << "             " << getp7() << endl;
		cout << " 8.     " << "    " << getitem8() << "            " << getp8() << endl;
		cout << " 9.     " << "    " << getitem9() << "            " << getp9() << endl;
		cout << " 10.    " << "    " << getitem10() << "            " << getp10() << endl;
		cout << " 11.    " << "    " << getitem11() << "            " << getp11() << endl;
		cout << " 12.    " << "    " << getitem12() << "            " << getp12() << endl;
		cout << " 13.    " << "    " << getitem13() << "            " << getp13() << endl;
		cout << " 14.    " << "    " << getitem14() << "            " << getp14() << endl;
		cout << " 15.    " << "    " << getitem15() << "            " << getp15() << endl;
		cout << " 16.    " << "    " << getitem16() << "            " << getp16() << endl;
		cout << " 17.    " << "    " << getitem17() << "            " << getp17() << endl;
		cout << " 18.    " << "    " << getitem18() << "            " << getp18() << endl;
		cout << " 19.    " << "    " << getitem19() << "            " << getp19() << endl;
		cout << " 20.    " << "    " << getitem20() << "            " << getp20() << endl;
	}
	void searchItems()
	{
		Store Islamabad;
		Store Lahore;
		Store Karachi;
		string store;
		string item;
		cout << " Enter the store whose item you want to Search" << endl;
		cin >> store;
		if (store == "Islamabad")
		{
			Islamabad.setitem1("Chicken");
			Islamabad.setitem2("Mutton");
			Islamabad.setitem3("Milk");
			Islamabad.setitem4("Eggs");
			Islamabad.setitem5("Apple");
			Islamabad.setitem6("Mango");
			Islamabad.setitem7("Potato");
			Islamabad.setitem8("Onions");
			Islamabad.setitem9("Tomato");
			Islamabad.setitem10("Chocolate");
			Islamabad.setitem11("Chips");
			Islamabad.setitem12("Wheat");
			Islamabad.setitem13("Rice");
			Islamabad.setitem14("Spice");
			Islamabad.setitem15("Cereal");
			Islamabad.setitem16("Shampoo");
			Islamabad.setitem17("Soap");
			Islamabad.setitem18("Detergent");
			Islamabad.setitem19("Dishsoap");
			Islamabad.setitem20("Washroom Cleaner");
			cout << " Enter the Item you want to search " << endl;
			cin >> item;
			if ((Islamabad.getitem1() == item) || (Islamabad.getitem2() == item) || (Islamabad.getitem3() == item) || (Islamabad.getitem4() == item) || (Islamabad.getitem5() == item) || (Islamabad.getitem6() == item) || (Islamabad.getitem7() == item) || (Islamabad.getitem8() == item) || (Islamabad.getitem9() == item) || (Islamabad.getitem10() == item) || (Islamabad.getitem11() == item) || (Islamabad.getitem11() == item) || (Islamabad.getitem12() == item) || (Islamabad.getitem13() == item) || (Islamabad.getitem14() == item) || (Islamabad.getitem15() == item) || (Islamabad.getitem16() == item) || (Islamabad.getitem17() == item) || (Islamabad.getitem18() == item) || (Islamabad.getitem19() == item) || (Islamabad.getitem20() == item))
			{
				cout << " The item you want to search is available" << endl;
			}
			else
			{
				cout << "Item not available" << endl;
			}
		}
		else if (store == "Lahore")
		{
			Lahore.setitem1("Chicken");
			Lahore.setitem2("Beef");
			Lahore.setitem3("Milk");
			Lahore.setitem4("Eggs");
			Lahore.setitem5("Apple");
			Lahore.setitem6("Banana");
			Lahore.setitem7("Potato");
			Lahore.setitem8("Onions");
			Lahore.setitem9("Tomato");
			Lahore.setitem10("Chocolate");
			Lahore.setitem11("Biscuits");
			Lahore.setitem12("Wheat");
			Lahore.setitem13("Flour");
			Lahore.setitem14("Spice");
			Lahore.setitem15("Rice");
			Lahore.setitem16("Shampoo");
			Lahore.setitem17("Soap");
			Lahore.setitem18("Detergent");
			Lahore.setitem19("Dishsoap");
			Lahore.setitem20("Hand Sanitizer");
			cout << " Enter the Item you want to search " << endl;
			cin >> item;
			if ((Lahore.getitem1() == item) || (Lahore.getitem2() == item) || (Lahore.getitem3() == item) || (Lahore.getitem4() == item) || (Lahore.getitem5() == item) || (Lahore.getitem6() == item) || (Lahore.getitem7() == item) || (Lahore.getitem8() == item) || (Lahore.getitem9() == item) || (Lahore.getitem10() == item) || (Lahore.getitem11() == item) || (Lahore.getitem11() == item) || (Lahore.getitem12() == item) || (Lahore.getitem13() == item) || (Lahore.getitem14() == item) || (Lahore.getitem15() == item) || (Lahore.getitem16() == item) || (Lahore.getitem17() == item) || (Lahore.getitem18() == item) || (Lahore.getitem19() == item) || (Lahore.getitem20() == item))
			{
				cout << " The item you want to search is available" << endl;
			}
			else
			{
				cout << "Item not available" << endl;
			}
		}
		else if (store == "Karachi")
		{
			Karachi.setitem1("Fish");
			Karachi.setitem2("Beef");
			Karachi.setitem3("Milk");
			Karachi.setitem4("Eggs");
			Karachi.setitem5("Apple");
			Karachi.setitem6("Orange");
			Karachi.setitem7("Potato");
			Karachi.setitem8("Onions");
			Karachi.setitem9("Cucumber");
			Karachi.setitem10("Chocolate");
			Karachi.setitem11("Biscuits");
			Karachi.setitem12("Wheat");
			Karachi.setitem13("Flour");
			Karachi.setitem14("Spice");
			Karachi.setitem15("Rice");
			Karachi.setitem16("Shampoo");
			Karachi.setitem17("Soap");
			Karachi.setitem18("Detergent");
			Karachi.setitem19("Dishsoap");
			Karachi.setitem20("Hand Sanitizer");
			cout << " Enter the Item you want to search " << endl;
			cin >> item;
			if ((Karachi.getitem1() == item) || (Karachi.getitem2() == item) || (Karachi.getitem3() == item) || (Karachi.getitem4() == item) || (Karachi.getitem5() == item) || (Karachi.getitem6() == item) || (Karachi.getitem7() == item) || (Karachi.getitem8() == item) || (Karachi.getitem9() == item) || (Karachi.getitem10() == item) || (Karachi.getitem11() == item) || (Karachi.getitem11() == item) || (Karachi.getitem12() == item) || (Karachi.getitem13() == item) || (Karachi.getitem14() == item) || (Karachi.getitem15() == item) || (Karachi.getitem16() == item) || (Karachi.getitem17() == item) || (Karachi.getitem18() == item) || (Karachi.getitem19() == item) || (Karachi.getitem20() == item))
			{
				cout << " The item you want to search is available" << endl;
			}
			else
			{
				cout << "Item not available" << endl;
			}
		}
	}

	void viewInventoryItems()
	{
		Store Islamabad;
		Store Lahore;
		Store Karachi;
		string store;
		string item;
		cout << " Enter the store whose item you want to View" << endl;
		cin >> store;
		if (store == "Islamabad")
		{
			Islamabad.setitem1("Chicken");
			Islamabad.setitem2("Mutton");
			Islamabad.setitem3("Milk");
			Islamabad.setitem4("Eggs");
			Islamabad.setitem5("Apple");
			Islamabad.setitem6("Mango");
			Islamabad.setitem7("Potato");
			Islamabad.setitem8("Onions");
			Islamabad.setitem9("Tomato");
			Islamabad.setitem10("Chocolate");
			Islamabad.setitem11("Chips");
			Islamabad.setitem12("Wheat");
			Islamabad.setitem13("Rice");
			Islamabad.setitem14("Spice");
			Islamabad.setitem15("Cereal");
			Islamabad.setitem16("Shampoo");
			Islamabad.setitem17("Soap");
			Islamabad.setitem18("Detergent");
			Islamabad.setitem19("Dishsoap");
			Islamabad.setitem20("Washroom Cleaner");
			cout << " Enter the Item you want to View " << endl;
			cin >> item;
			if ((Islamabad.getitem1() == item) || (Islamabad.getitem2() == item) || (Islamabad.getitem3() == item) || (Islamabad.getitem4() == item) || (Islamabad.getitem5() == item) || (Islamabad.getitem6() == item) || (Islamabad.getitem7() == item) || (Islamabad.getitem8() == item) || (Islamabad.getitem9() == item) || (Islamabad.getitem10() == item) || (Islamabad.getitem11() == item) || (Islamabad.getitem11() == item) || (Islamabad.getitem12() == item) || (Islamabad.getitem13() == item) || (Islamabad.getitem14() == item) || (Islamabad.getitem15() == item) || (Islamabad.getitem16() == item) || (Islamabad.getitem17() == item) || (Islamabad.getitem18() == item) || (Islamabad.getitem19() == item) || (Islamabad.getitem20() == item))
			{
				cout << " The item you want to view is " << item;
			}
			else
			{
				cout << "Item not available" << endl;
			}
		}
		else if (store == "Lahore")
		{
			Lahore.setitem1("Chicken");
			Lahore.setitem2("Beef");
			Lahore.setitem3("Milk");
			Lahore.setitem4("Eggs");
			Lahore.setitem5("Apple");
			Lahore.setitem6("Banana");
			Lahore.setitem7("Potato");
			Lahore.setitem8("Onions");
			Lahore.setitem9("Tomato");
			Lahore.setitem10("Chocolate");
			Lahore.setitem11("Biscuits");
			Lahore.setitem12("Wheat");
			Lahore.setitem13("Flour");
			Lahore.setitem14("Spice");
			Lahore.setitem15("Rice");
			Lahore.setitem16("Shampoo");
			Lahore.setitem17("Soap");
			Lahore.setitem18("Detergent");
			Lahore.setitem19("Dishsoap");
			Lahore.setitem20("Hand Sanitizer");
			cout << " Enter the Item you want to View  " << endl;
			cin >> item;
			if ((Lahore.getitem1() == item) || (Lahore.getitem2() == item) || (Lahore.getitem3() == item) || (Lahore.getitem4() == item) || (Lahore.getitem5() == item) || (Lahore.getitem6() == item) || (Lahore.getitem7() == item) || (Lahore.getitem8() == item) || (Lahore.getitem9() == item) || (Lahore.getitem10() == item) || (Lahore.getitem11() == item) || (Lahore.getitem11() == item) || (Lahore.getitem12() == item) || (Lahore.getitem13() == item) || (Lahore.getitem14() == item) || (Lahore.getitem15() == item) || (Lahore.getitem16() == item) || (Lahore.getitem17() == item) || (Lahore.getitem18() == item) || (Lahore.getitem19() == item) || (Lahore.getitem20() == item))
			{
				cout << " The item you want to view is " << item;
			}
			else
			{
				cout << "Item not available" << endl;
			}
		}
		else if (store == "Karachi")
		{
			Karachi.setitem1("Fish");
			Karachi.setitem2("Beef");
			Karachi.setitem3("Milk");
			Karachi.setitem4("Eggs");
			Karachi.setitem5("Apple");
			Karachi.setitem6("Orange");
			Karachi.setitem7("Potato");
			Karachi.setitem8("Onions");
			Karachi.setitem9("Cucumber");
			Karachi.setitem10("Chocolate");
			Karachi.setitem11("Biscuits");
			Karachi.setitem12("Wheat");
			Karachi.setitem13("Flour");
			Karachi.setitem14("Spice");
			Karachi.setitem15("Rice");
			Karachi.setitem16("Shampoo");
			Karachi.setitem17("Soap");
			Karachi.setitem18("Detergent");
			Karachi.setitem19("Dishsoap");
			Karachi.setitem20("Hand Sanitizer");
			cout << " Enter the Item you want to View " << endl;
			cin >> item;
			if ((Karachi.getitem1() == item) || (Karachi.getitem2() == item) || (Karachi.getitem3() == item) || (Karachi.getitem4() == item) || (Karachi.getitem5() == item) || (Karachi.getitem6() == item) || (Karachi.getitem7() == item) || (Karachi.getitem8() == item) || (Karachi.getitem9() == item) || (Karachi.getitem10() == item) || (Karachi.getitem11() == item) || (Karachi.getitem11() == item) || (Karachi.getitem12() == item) || (Karachi.getitem13() == item) || (Karachi.getitem14() == item) || (Karachi.getitem15() == item) || (Karachi.getitem16() == item) || (Karachi.getitem17() == item) || (Karachi.getitem18() == item) || (Karachi.getitem19() == item) || (Karachi.getitem20() == item))
			{
				cout << " The item you want to view is " << item;
			}
			else
			{
				cout << "Item not available" << endl;
			}
		}
	}
};
#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "User.h"
#include "Product.h"
#include "Payment.h"
using namespace std;

//Admin Class that will inherit user class 
class Admin :public  User
{

protected:
	char store[100];
	ProductCatalog* P;
public:
	Admin() {}
	Admin(string n, string p, string g, string c, int phoneno, int age, string add, ProductCatalog* P1)
	{
		strcpy_s(name, n.c_str());
		strcpy_s(Password, p.c_str());
		strcpy_s(Gender, g.c_str());
		strcpy_s(cnic, c.c_str());
		this->phoneno = phoneno;
		this->age = age;
		strcpy_s(Address, add.c_str());
		P = P1;
	}
	Admin(string s)
	{
		strcpy_s(store, s.c_str());

	}
	void setstore(string s)
	{
		strcpy_s(store, s.c_str());
	}
	string getstore()
	{
		return store;
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
	//reading and writing login files
	void R_loginAdmin(string n1)
	{
		Admin temp;
		ifstream fin("Ad3.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{
			temp.getname();
			temp.getpassword();
		}
		fin.close();
	}
	void W_loginAdmin(string n1, Admin A)
	{

		ofstream fout("Ad3.dat", ios::binary | ios::app);
		if (fout.write((char*)&A, sizeof(A)))
		{
			cout << "";
		}
		fout.close();
	}
	//reading and writing Registration manager files
	void W_RegisterManager(string n1, Admin A)
	{
		ofstream file("Manager2.dat", ios::binary | ios::app);
		if (file.write((char*)&A, sizeof(A)))
		{
			cout << "";
		}
		file.close();
	}
	void R_RegisterManager(string n1)
	{
		Admin A;
		ifstream f2("Manager2.dat", ios::binary | ios::app);
		if (f2.read((char*)&A, sizeof(A)))
		{
			A.getname();
			A.getpassword();
			A.getGender();
			A.getCnic();
			A.getage();
			A.getphone();
			A.getAddress();
		}
		f2.close();
	}

	void R_Addstore(string s)
	{
		Admin A;
		ifstream fin("ST1.dat", ios::binary | ios::app);
		if (fin.read((char*)&A, sizeof(A)))
		{
			A.getstore();
		}
		fin.close();

	}

	void W_Addstore(string s, Admin A)
	{
		ofstream file("ST1.dat", ios::binary | ios::app);
		if (file.write((char*)&A, sizeof(A)))
		{
			cout << "";
		}
		file.close();
	}
	//deleting customer
	void Remove_customer(string s1)
	{
		Admin temp;
		fstream myFile("temp.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp.dat ", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			if (temp.getCnic() != s1) {
				myFile_temp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("CM3.dat");
		rename("temp.dat", "CM3.dat");
	}
	// spamming customer
	void spam_customer(string s1)
	{
		Admin A;
		if (A.getCnic() == s1)
		{
			A.Remove_customer(s1);
		}
	}
	void delete_store(string s1)
	{
		Admin temp;
		fstream myFile("temp1.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp1.dat ", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			if (temp.getname() != s1) {
				myFile_temp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("ST1.dat");
		rename("temp1.dat", "ST1.dat");
	}

	//  A function that will help admin to manage store that how many products he want to add/remove or update items
	void Manage_store()
	{
		char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c111, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32;
		int option;
		int opt1;
		cout << " Do you want to Add / Remove / Update items into the Product Catalog " << endl;
		cout << " 1. For Add items    " << endl;
		cout << " 2. For Remove items " << endl;
		cout << " 3. For Update items " << endl;
		cin >> option;
		if (option == 1)
		{
			cout << " Enter the type of product you want to add " << endl;
			cout << " 1. Perishable Product " << endl;
			cout << " 2. Non-Perishable Product " << endl;
			cout << " 3. Hygeinic Product " << endl;
			cout << " 4. Household Product " << endl;
			cin >> opt1;
			if (opt1 == 1)
			{
				cout << "Do you want to add Chicken into Catalog " << endl;
				cin >> c1;
				cout << "Do you want to add Mutton into Catalog  " << endl;
				cin >> c2;
				cout << "Do you want to add Beef into Catalog    " << endl;
				cin >> c3;
				cout << "Do you want to add Fish into Catalog    " << endl;
				cin >> c4;
				cout << "Do you want to add Milk into Catalog    " << endl;
				cin >> c5;
				cout << "Do you want to add Eggs into Catalog    " << endl;
				cin >> c6;
				cout << "Do you want to add Yougurt into Catalog " << endl;
				cin >> c7;
				cout << "Do you want to add Cheese into Catalog    " << endl;
				cin >> c8;
				cout << "Do you want to add Apple into Catalog     " << endl;
				cin >> c9;
				cout << "Do you want to add Orange into Catalog " << endl;
				cin >> c10;
				cout << "Do you want to add Banana into Catalog " << endl;
				cin >> c111;
				cout << "Do you want to add Watermelon into Catalog" << endl;
				cin >> c12;
				cout << "Do you want to add Mango into Catalog  " << endl;
				cin >> c13;
				cout << "Do you want to add Potato into Catalog " << endl;
				cin >> c14;
				cout << "Do you want to add Onion into Catalog " << endl;
				cin >> c15;
				cout << "Do you want to add Tomato into Catalog" << endl;
				cin >> c16;
				cout << "Do you want to add Cucumber into Catalog  " << endl;
				cin >> c17;
				cout << "Do you want to add Chocolate into Catalog " << endl;
				cin >> c18;
				cout << "Do you want to add Biscuits into Catalog " << endl;
				cin >> c19;
				cout << "Do you want to add Chips into Catalog" << endl;
				cin >> c20;
				cout << "Do you want to add Spices into Catalog  " << endl;
				cin >> c21;
				cout << "Do you want to add Lentils into Catalog " << endl;
				cin >> c22;
				cout << "Do you want to add Wheat into Catalog  " << endl;
				cin >> c23;
				cout << "Do you want to add Flour into Catalog " << endl;
				cin >> c24;
				cout << "Do you want to add Rice into Catalog  " << endl;
				cin >> c25;
				cout << "Do you want to add Cereal into Catalog " << endl;
				cin >> c26;
				cout << "Do you want to add Shampoo into Catalog  " << endl;
				cin >> c27;
				cout << "Do you want to add Soap  into Catalog " << endl;
				cin >> c28;
				cout << "Do you want to add Hand Sanitizier into Catalog  " << endl;
				cin >> c29;
				cout << "Do you want to add Detergent into Catalog " << endl;
				cin >> c30;
				cout << "Do you want to add DishSoap into Catalog  " << endl;
				cin >> c31;
				cout << "Do you want to add Washroom Cleaner into Catalog " << endl;
				cin >> c32;
			}
			if (c1 == 'Y' || c1 == 'y')
			{
				P->setchicken("Chicken");
				P->seti1(500);
			}
			else
			{
				P->setchicken("Chicken N/A");
				P->seti1(0);
			}
			if (c2 == 'Y' || c2 == 'y')
			{
				P->setMutton("Mutton");
				P->seti2(1200);
			}
			else
			{
				P->setMutton("Mutton N/A");
				P->seti2(0);
			}
			if (c3 == 'Y' || c3 == 'y')
			{
				P->setBeef("Beef");
				P->seti3(800);
			}
			else
			{
				P->setBeef("Beef N/A");
				P->seti3(0);
			}
			if (c4 == 'Y' || c4 == 'y')
			{
				P->setFish("Fish");
				P->seti4(1200);
			}
			else
			{
				P->setFish("Fish N/A");
				P->seti4(0);
			}
			if (c5 == 'Y' || c5 == 'y')
			{
				P->setMilk("Milk");
				P->seti5(160);
			}
			else
			{
				P->setMilk("Milk N/A");
				P->seti5(0);
			}
			if (c6 == 'Y' || c6 == 'y')
			{
				P->setEggs("Eggs");
				P->seti6(120);
			}
			else
			{
				P->setEggs("Eggs N/A");
				P->seti6(0);
			}
			if (c7 == 'Y' || c7 == 'y')
			{
				P->setYogurt("Yogurt");
				P->seti7(180);
			}
			else
			{
				P->setYogurt("Yogurt N/A");
				P->seti7(0);
			}
			if (c8 == 'Y' || c8 == 'y')
			{
				P->setCheese("Cheese");
				P->seti8(380);
			}
			else
			{
				P->setCheese("Cheese N/A");
				P->seti8(0);
			}
			if (c9 == 'Y' || c9 == 'y')
			{
				P->setApple("Apple");
				P->seti9(130);
			}
			else
			{
				P->setApple("Apple N/A");
				P->seti9(0);
			}
			if (c10 == 'Y' || c10 == 'y')
			{
				P->setBanana("Banana");
				P->seti11(110);
			}
			else
			{
				P->setBanana("Banana N/A");
				P->seti11(0);
			}
			if (c111 == 'Y' || c111 == 'y')
			{
				P->setOrange("Orange");
				P->seti10(140);
			}
			else
			{
				P->setOrange("Orange N/A");
				P->seti10(0);
			}
			if (c12 == 'Y' || c12 == 'y')
			{
				P->setWatermelon("Watermelon");
				P->seti12(45);
			}
			else
			{
				P->setWatermelon("Watermelon N/A");
				P->seti12(0);
			}
			if (c13 == 'Y' || c13 == 'y')
			{
				P->setMango("Mango");
				P->seti13(180);
			}
			else
			{
				P->setMango("Mango N/A");
				P->seti13(0);
			}
			if (c14 == 'Y' || c14 == 'y')
			{
				P->setPotato("Potato");
				P->seti14(60);
			}
			else
			{
				P->setPotato("Potato N/A");
				P->seti14(0);
			}
			if (c15 == 'Y' || c15 == 'y')
			{
				P->setOnions("Onions");
				P->seti15(80);
			}
			else
			{
				P->setOnions("Onions N/A");
				P->seti15(0);
			}
			if (c16 == 'Y' || c16 == 'y')
			{
				P->setTomato("Tomato");
				P->seti16(120);
			}
			else
			{
				P->setTomato("Tomato N/A");
				P->seti16(0);
			}
			if (c17 == 'Y' || c17 == 'y')
			{
				P->setCucumber("Cucumber");
				P->seti17(40);
			}
			else
			{
				P->setCucumber("Cucumber N/A");
				P->seti17(0);
			}
			if (c18 == 'Y' || c18 == 'y')
			{
				P->setChocolate("Chocolate");
				P->seti18(30);
			}
			else
			{
				P->setChocolate("Chocolate N/A");
				P->seti18(0);
			}
			if (c19 == 'Y' || c19 == 'y')
			{
				P->setBiscuits("Biscuits");
				P->seti19(30);
			}
			else
			{
				P->setBiscuits("Biscuits N/A");
				P->seti19(0);
			}
			if (c20 == 'Y' || c20 == 'y')
			{
				P->setChips("Chips");
				P->seti20(25);
			}
			else
			{
				P->setChips("Chips N/A");
				P->seti20(0);
			}
			if (c21 == 'Y' || c21 == 'y')
			{
				P->setSpice("Spice");
				P->seti21(2000);
			}
			else
			{
				P->setSpice("Spice N/A");
				P->seti21(0);
			}
			if (c22 == 'Y' || c22 == 'y')
			{
				P->setLentil("Lentil");
				P->seti22(340);
			}
			else
			{
				P->setLentil("Lentil N/A");
				P->seti22(0);
			}
			if (c23 == 'Y' || c23 == 'y')
			{
				P->setWheat("Wheat");
				P->seti23(90);
			}
			else
			{
				P->setWheat("Wheat N/A");
				P->seti23(0);
			}
			if (c24 == 'Y' || c24 == 'y')
			{
				P->setFlour("Flour");
				P->seti24(100);
			}
			else
			{
				P->setFlour("Flour N/A");
				P->seti24(0);
			}
			if (c25 == 'y' || c25 == 'Y')
			{
				P->setRice("Rice");
				P->seti25(360);
			}
			else
			{
				P->setRice("Rice N/A");
				P->seti25(0);
			}
			if (c26 == 'y' || c26 == 'Y')
			{
				P->setCeareal("Cereal");
				P->seti26(400);
			}
			else
			{
				P->setCeareal("Cereal N/A");
				P->seti26(0);
			}
			if (c27 == 'Y' || c27 == 'y')
			{
				P->setShampoo("Shampoo");
				P->seti27(500);
			}
			else
			{
				P->setShampoo("Shampoo N/A");
				P->seti27(0);
			}
			if (c28 == 'y' || c28 == 'Y')
			{
				P->setSoap("Soap");
				P->seti28(60);
			}
			else
			{
				P->setSoap("Soap N/A");
				P->seti28(0);
			}
			if (c29 == 'Y' || c29 == 'y')
			{
				P->setHS("Handsanitizer");
				P->seti29(150);
			}
			else
			{
				P->setHS("Handsanitizer N/A");
				P->seti29(0);
			}
			if (c30 == 'Y' || c30 == 'y')
			{
				P->setDetergent("Detergent");
				P->seti30(560);
			}
			else
			{
				P->setDetergent("Detergent N/A");
				P->seti30(0);
			}
			if (c31 == 'Y' || c31 == 'y')
			{
				P->setDishsoap("DishSoap");
				P->seti31(120);
			}
			else
			{
				P->setDishsoap("DishSoap N/A");
				P->seti31(0);
			}
			if (c32 == 'Y' || c32 == 'y')
			{
				P->setWC("Washroom Cleaner");
				P->seti32(300);
			}
			else
			{
				P->setWC("Washroom Cleaner N/A");
				P->seti32(0);
			}
			cout << " ItemNo " << "    " << " Item " << "            " << " Price " << endl;
			cout << " 1.     " << "    " << P->getChicken() << "            " << P->geti1() << endl;
			cout << " 2.     " << "    " << P->getMutton() << "             " << P->geti2() << endl;
			cout << " 3.     " << "    " << P->getBeef() << "               " << P->geti3() << endl;
			cout << " 4.     " << "    " << P->getFish() << "               " << P->geti4() << endl;
			cout << " 5.     " << "    " << P->getMilk() << "               " << P->geti5() << endl;
			cout << " 6.     " << "    " << P->getEggs() << "               " << P->geti6() << endl;
			cout << " 7.     " << "    " << P->getYogurt() << "             " << P->geti7() << endl;
			cout << " 8.     " << "    " << P->getCheese() << "             " << P->geti8() << endl;
			cout << " 9.     " << "    " << P->getApple() << "              " << P->geti9() << endl;
			cout << " 10.    " << "    " << P->getOrange() << "             " << P->geti10() << endl;
			cout << " 11.    " << "    " << P->getBanana() << "             " << P->geti11() << endl;
			cout << " 12.    " << "    " << P->getWatermelon() << "         " << P->geti12() << endl;
			cout << " 13.    " << "    " << P->getMango() << "              " << P->geti13() << endl;
			cout << " 14.    " << "    " << P->getPotato() << "             " << P->geti14() << endl;
			cout << " 15.    " << "    " << P->getOnions() << "             " << P->geti15() << endl;
			cout << " 16.    " << "    " << P->getTomato() << "             " << P->geti16() << endl;
			cout << " 17.    " << "    " << P->getCucumber() << "           " << P->geti17() << endl;
			cout << " 18.    " << "    " << P->getChocolate() << "          " << P->geti18() << endl;
			cout << " 19.    " << "    " << P->getBiscuits() << "           " << P->geti19() << endl;
			cout << " 20.    " << "    " << P->getChips() << "              " << P->geti20() << endl;
			cout << " 21.    " << "    " << P->getSpice() << "              " << P->geti21() << endl;
			cout << " 22.    " << "    " << P->getLentil() << "             " << P->geti22() << endl;
			cout << " 23.    " << "    " << P->getWheat() << "              " << P->geti23() << endl;
			cout << " 24.    " << "    " << P->getFlour() << "              " << P->geti24() << endl;
			cout << " 25.    " << "    " << P->getRice() << "               " << P->geti25() << endl;
			cout << " 26.    " << "    " << P->getCereal() << "             " << P->geti26() << endl;
			cout << " 27.    " << "    " << P->getShampoo() << "            " << P->geti27() << endl;
			cout << " 28.    " << "    " << P->getSoap() << "               " << P->geti28() << endl;
			cout << " 29.    " << "    " << P->getHS() << "      " << P->geti29() << endl;
			cout << " 30.    " << "    " << P->getDetergent() << "          " << P->geti30() << endl;
			cout << " 31.    " << "    " << P->getDishsoap() << "           " << P->geti31() << endl;
			cout << " 32.    " << "    " << P->getWC() << "   " << P->geti32() << endl;
			string s1 = "Chicken";
			ProductCatalog temp;
			P->W_Additems(s1, temp);
			P->Additems(s1);
		}
		else if (option == 2)
		{
			string s1;
			cout << " Enter item you want to delete " << endl;
			cin >> s1;
			P->deleteitems(s1);
		}
		else if (option == 3)
		{
			cout << " Enter the type of product you want to add " << endl;
			cout << " 1. Perishable Product " << endl;
			cout << " 2. Non-Perishable Product " << endl;
			cout << " 3. Hygeinic Product " << endl;
			cout << " 4. Household Product " << endl;
			cin >> opt1;
			if (opt1 == 1)
			{
				cout << "Do you want to add Chicken into Catalog " << endl;
				cin >> c1;
				cout << "Do you want to add Mutton into Catalog  " << endl;
				cin >> c2;
				cout << "Do you want to add Beef into Catalog    " << endl;
				cin >> c3;
				cout << "Do you want to add Fish into Catalog    " << endl;
				cin >> c4;
				cout << "Do you want to add Milk into Catalog    " << endl;
				cin >> c5;
				cout << "Do you want to add Eggs into Catalog    " << endl;
				cin >> c6;
				cout << "Do you want to add Yougurt into Catalog " << endl;
				cin >> c7;
				cout << "Do you want to add Cheese into Catalog    " << endl;
				cin >> c8;
				cout << "Do you want to add Apple into Catalog     " << endl;
				cin >> c9;
				cout << "Do you want to add Orange into Catalog " << endl;
				cin >> c10;
				cout << "Do you want to add Banana into Catalog " << endl;
				cin >> c111;
				cout << "Do you want to add Watermelon into Catalog" << endl;
				cin >> c12;
				cout << "Do you want to add Mango into Catalog  " << endl;
				cin >> c13;
				cout << "Do you want to add Potato into Catalog " << endl;
				cin >> c14;
				cout << "Do you want to add Onion into Catalog " << endl;
				cin >> c15;
				cout << "Do you want to add Tomato into Catalog" << endl;
				cin >> c16;
				cout << "Do you want to add Cucumber into Catalog  " << endl;
				cin >> c17;
			}
			else if (opt1 == 2)
			{
				cout << "Do you want to add Chocolate into Catalog " << endl;
				cin >> c18;
				cout << "Do you want to add Biscuits into Catalog " << endl;
				cin >> c19;
				cout << "Do you want to add Chips into Catalog" << endl;
				cin >> c20;
				cout << "Do you want to add Spices into Catalog  " << endl;
				cin >> c21;
				cout << "Do you want to add Lentils into Catalog " << endl;
				cin >> c22;
				cout << "Do you want to add Wheat into Catalog  " << endl;
				cin >> c23;
				cout << "Do you want to add Flour into Catalog " << endl;
				cin >> c24;
				cout << "Do you want to add Rice into Catalog  " << endl;
				cin >> c25;
				cout << "Do you want to add Cereal into Catalog " << endl;
				cin >> c26;
			}
			else if (opt1 == 3)
			{
				cout << "Do you want to add Shampoo into Catalog  " << endl;
				cin >> c27;
				cout << "Do you want to add Soap  into Catalog " << endl;
				cin >> c28;
				cout << "Do you want to add Hand Sanitizier into Catalog  " << endl;
				cin >> c29;
			}
			else if (opt1 == 4)
			{
				cout << "Do you want to add Detergent into Catalog " << endl;
				cin >> c30;
				cout << "Do you want to add DishSoap into Catalog  " << endl;
				cin >> c31;
				cout << "Do you want to add Washroom Cleaner into Catalog " << endl;
				cin >> c32;
			}
			if (c1 == 'Y' || c1 == 'y')
			{
				P->setchicken("Chicken");
				P->seti1(500);
			}
			else
			{
				P->setchicken("Chicken N/A");
				P->seti1(0);
			}
			if (c2 == 'Y' || c2 == 'y')
			{
				P->setMutton("Mutton");
				P->seti2(1200);
			}
			else
			{
				P->setMutton("Mutton N/A");
				P->seti2(0);
			}
			if (c3 == 'Y' || c3 == 'y')
			{
				P->setBeef("Beef");
				P->seti3(800);
			}
			else
			{
				P->setBeef("Beef N/A");
				P->seti3(0);
			}
			if (c4 == 'Y' || c4 == 'y')
			{
				P->setFish("Fish");
				P->seti4(200);
			}
			else
			{
				P->setFish("Fish N/A");
				P->seti4(0);
			}
			if (c5 == 'Y' || c5 == 'y')
			{
				P->setMilk("Milk");
				P->seti5(160);
			}
			else
			{
				P->setMilk("Milk N/A");
				P->seti5(0);
			}
			if (c6 == 'Y' || c6 == 'y')
			{
				P->setEggs("Eggs");
				P->seti6(120);
			}
			else
			{
				P->setEggs("Eggs N/A");
				P->seti6(0);
			}
			if (c7 == 'Y' || c7 == 'y')
			{
				P->setYogurt("Yogurt");
				P->seti7(180);
			}
			else
			{
				P->setYogurt("Yogurt N/A");
				P->seti7(0);
			}
			if (c8 == 'Y' || c8 == 'y')
			{
				P->setCheese("Cheese");
				P->seti8(380);
			}
			else
			{
				P->setCheese("Cheese N/A");
				P->seti8(0);
			}
			if (c9 == 'Y' || c9 == 'y')
			{
				P->setApple("Apple");
				P->seti9(130);
			}
			else
			{
				P->setApple("Apple N/A");
				P->seti9(0);
			}
			if (c10 == 'Y' || c10 == 'y')
			{
				P->setBanana("Banana");
				P->seti11(110);
			}
			else
			{
				P->setBanana("Banana N/A");
				P->seti11(0);
			}
			if (c111 == 'Y' || c111 == 'y')
			{
				P->setOrange("Orange");
				P->seti10(140);
			}
			else
			{
				P->setOrange("Orange N/A");
				P->seti10(0);
			}
			if (c12 == 'Y' || c12 == 'y')
			{
				P->setWatermelon("Watermelon");
				P->seti12(45);
			}
			else
			{
				P->setWatermelon("Watermelon N/A");
				P->seti12(0);
			}
			if (c13 == 'Y' || c13 == 'y')
			{
				P->setMango("Mango");
				P->seti13(180);
			}
			else
			{
				P->setMango("Mango N/A");
				P->seti13(0);
			}
			if (c14 == 'Y' || c14 == 'y')
			{
				P->setPotato("Potato");
				P->seti14(60);
			}
			else
			{
				P->setPotato("Potato N/A");
				P->seti14(0);
			}
			if (c15 == 'Y' || c15 == 'y')
			{
				P->setOnions("Onions");
				P->seti15(80);
			}
			else
			{
				P->setOnions("Onions N/A");
				P->seti15(0);
			}
			if (c16 == 'Y' || c16 == 'y')
			{
				P->setTomato("Tomato");
				P->seti16(120);
			}
			else
			{
				P->setTomato("Tomato N/A");
				P->seti16(0);
			}
			if (c17 == 'Y' || c17 == 'y')
			{
				P->setCucumber("Cucumber");
				P->seti17(40);
			}
			else
			{
				P->setCucumber("Cucumber N/A");
				P->seti17(0);
			}
			if (c18 == 'Y' || c18 == 'y')
			{
				P->setChocolate("Chocolate");
				P->seti18(30);
			}
			else
			{
				P->setChocolate("Chocolate N/A");
				P->seti18(0);
			}
			if (c19 == 'Y' || c19 == 'y')
			{
				P->setBiscuits("Biscuits");
				P->seti19(30);
			}
			else
			{
				P->setBiscuits("Biscuits N/A");
				P->seti19(0);
			}
			if (c20 == 'Y' || c20 == 'y')
			{
				P->setChips("Chips");
				P->seti20(25);
			}
			else
			{
				P->setChips("Chips N/A");
				P->seti20(0);
			}
			if (c21 == 'Y' || c21 == 'y')
			{
				P->setSpice("Spice");
				P->seti21(2000);
			}
			else
			{
				P->setSpice("Spice N/A");
				P->seti21(0);
			}
			if (c22 == 'Y' || c22 == 'y')
			{
				P->setLentil("Lentil");
				P->seti22(340);
			}
			else
			{
				P->setLentil("Lentil N/A");
				P->seti22(0);
			}
			if (c23 == 'Y' || c23 == 'y')
			{
				P->setWheat("Wheat");
				P->seti23(90);
			}
			else
			{
				P->setWheat("Wheat N/A");
				P->seti23(0);
			}
			if (c24 == 'Y' || c24 == 'y')
			{
				P->setFlour("Flour");
				P->seti24(100);
			}
			else
			{
				P->setFlour("Flour N/A");
				P->seti24(0);
			}
			if (c25 == 'y' || c25 == 'Y')
			{
				P->setRice("Rice");
				P->seti25(360);
			}
			else
			{
				P->setRice("Rice N/A");
				P->seti25(0);
			}
			if (c26 == 'y' || c26 == 'Y')
			{
				P->setCeareal("Cereal");
				P->seti26(400);
			}
			else
			{
				P->setCeareal("Cereal N/A");
				P->seti26(0);
			}
			if (c27 == 'Y' || c27 == 'y')
			{
				P->setShampoo("Shampoo");
				P->seti27(500);
			}
			else
			{
				P->setShampoo("Shampoo N/A");
				P->seti27(0);
			}
			if (c28 == 'y' || c28 == 'Y')
			{
				P->setSoap("Soap");
				P->seti28(60);
			}
			else
			{
				P->setSoap("Soap N/A");
				P->seti28(0);
			}
			if (c29 == 'Y' || c29 == 'y')
			{
				P->setHS("Handsanitizer");
				P->seti29(150);
			}
			else
			{
				P->setHS("Handsanitizer N/A");
				P->seti29(0);
			}
			if (c30 == 'Y' || c30 == 'y')
			{
				P->setDetergent("Detergent");
				P->seti30(560);
			}
			else
			{
				P->setDetergent("Detergent N/A");
				P->seti30(0);
			}
			if (c31 == 'Y' || c31 == 'y')
			{
				P->setDishsoap("DishSoap");
				P->seti31(120);
			}
			else
			{
				P->setDishsoap("DishSoap N/A");
				P->seti31(0);
			}
			if (c32 == 'Y' || c32 == 'y')
			{
				P->setWC("Washroom Cleaner");
				P->seti32(300);
			}
			else
			{
				P->setWC("Washroom Cleaner N/A");
				P->seti32(0);
			}
			cout << " ItemNo " << "    " << " Item " << "            " << " Price " << endl;
			cout << " 1.     " << "    " << P->getChicken() << "            " << P->geti1() << " per kg" << endl;
			cout << " 2.     " << "    " << P->getMutton() << "             " << P->geti2() << " per kg" << endl;
			cout << " 3.     " << "    " << P->getBeef() << "               " << P->geti3() << " per kg" << endl;
			cout << " 4.     " << "    " << P->getFish() << "               " << P->geti4() << " per kg" << endl;
			cout << " 5.     " << "    " << P->getMilk() << "               " << P->geti5() << " per pack" << endl;
			cout << " 6.     " << "    " << P->getEggs() << "               " << P->geti6() << " per dozen" << endl;
			cout << " 7.     " << "    " << P->getYogurt() << "             " << P->geti7() << " per pack" << endl;
			cout << " 8.     " << "    " << P->getCheese() << "             " << P->geti8() << " per pack" << endl;
			cout << " 9.     " << "    " << P->getApple() << "              " << P->geti9() << " per kg" << endl;
			cout << " 10.    " << "    " << P->getOrange() << "             " << P->geti10() << " per kg" << endl;
			cout << " 11.    " << "    " << P->getBanana() << "             " << P->geti11() << " per kg" << endl;
			cout << " 12.    " << "    " << P->getWatermelon() << "         " << P->geti12() << " per kg" << endl;
			cout << " 13.    " << "    " << P->getMango() << "              " << P->geti13() << " per kg" << endl;
			cout << " 14.    " << "    " << P->getPotato() << "             " << P->geti14() << " per kg" << endl;
			cout << " 15.    " << "    " << P->getOnions() << "             " << P->geti15() << " per kg" << endl;
			cout << " 16.    " << "    " << P->getTomato() << "             " << P->geti16() << " per kg" << endl;
			cout << " 17.    " << "    " << P->getCucumber() << "           " << P->geti17() << " per kg" << endl;
			cout << " 18.    " << "    " << P->getChocolate() << "          " << P->geti18() << " per pack" << endl;
			cout << " 19.    " << "    " << P->getBiscuits() << "           " << P->geti19() << " per pack" << endl;
			cout << " 20.    " << "    " << P->getChips() << "              " << P->geti20() << " per pack" << endl;
			cout << " 21.    " << "    " << P->getSpice() << "              " << P->geti21() << " per kg" << endl;
			cout << " 22.    " << "    " << P->getLentil() << "             " << P->geti22() << " per kg" << endl;
			cout << " 23.    " << "    " << P->getWheat() << "              " << P->geti23() << " per kg" << endl;
			cout << " 24.    " << "    " << P->getFlour() << "              " << P->geti24() << " per kg" << endl;
			cout << " 25.    " << "    " << P->getRice() << "               " << P->geti25() << " per kg" << endl;
			cout << " 26.    " << "    " << P->getCereal() << "             " << P->geti26() << " per pack" << endl;
			cout << " 27.    " << "    " << P->getShampoo() << "            " << P->geti27() << " per bottle" << endl;
			cout << " 28.    " << "    " << P->getSoap() << "               " << P->geti28() << " per pack" << endl;
			cout << " 29.    " << "    " << P->getHS() << "      " << P->geti29() << " per bottle" << endl;
			cout << " 30.    " << "    " << P->getDetergent() << "          " << P->geti30() << " per pack" << endl;
			cout << " 31.    " << "    " << P->getDishsoap() << "           " << P->geti31() << " per pack" << endl;
			cout << " 32.    " << "    " << P->getWC() << "   " << P->geti32() << " per bottle" << endl;
			ProductCatalog p;
			P->Updateitems(p);
		}
	}
	/*void simulation()
	{
		cout << " The simulation configuration is" << endl;
		S->SimulationConfiguration();
		cout << " The checkout simulation is " << endl;
		S->CheckoutSimulation();
	}*/
};



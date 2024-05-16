#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "Admin.h"
using namespace std;


// Product will be aggregated with Admin class
class ProductCatalog
{
public:
	char Chicken[20];
	char Mutton[20];
	char Beef[20];
	char Fish[20];
	char Milk[20];
	char Eggs[20];
	char Yogurt[20];
	char Cheese[20];
	char Apple[20];
	char Orange[20];
	char Banana[20];
	char Watermelon[20];
	char Mango[20];
	char Potato[20];
	char Onions[20];
	char Tomato[20];
	char Cucumber[20];
	char Chocolate[20];
	char Chips[20];
	char Bisuits[20];
	char Spices[20];
	char Lentils[20];
	char Wheat[20];
	char Flour[20];
	char Rice[20];
	char Cereal[20];
	char Shampoo[20];
	char Soap[20];
	char Handsanitizer[20];
	char Detergent[20];
	char DishSoap[20];
	char Washroomcleaner[30];
	int item1;
	int item2;
	int item3;
	int item4;
	int item5;
	int item6;
	int item7;
	int item8;
	int item9;
	int item10;
	int item11;
	int item12;
	int item13;
	int item14;
	int item15;
	int item16;
	int item17;
	int item18;
	int item19;
	int item20;
	int item21;
	int item22;
	int item23;
	int item24;
	int item25;
	int item26;
	int item27;
	int item28;
	int item29;
	int item30;
	int item31;
	int item32;
public:
	ProductCatalog() {}
	ProductCatalog(string chicken, string mutton, string beef, string fish, string milk, string eggs, string yogurt, string cheese, string apple, string orange, string banana, string watermelon, string mango, string potato, string onions, string tomato, string cucumber, string chocolate, string chips, string biscuits, string spice, string lentil, string wheat, string flour, string rice, string cereal, string shampoo, string soap, string handsanitizer, string detergent, string dishsoap, string cleaner)
	{
		strcpy_s(Chicken, chicken.c_str());
		strcpy_s(Mutton, mutton.c_str());
		strcpy_s(Beef, beef.c_str());
		strcpy_s(Fish, fish.c_str());
		strcpy_s(Milk, milk.c_str());
		strcpy_s(Eggs, eggs.c_str());
		strcpy_s(Yogurt, yogurt.c_str());
		strcpy_s(Cheese, cheese.c_str());
		strcpy_s(Apple, apple.c_str());
		strcpy_s(Orange, orange.c_str());
		strcpy_s(Banana, banana.c_str());
		strcpy_s(Watermelon, watermelon.c_str());
		strcpy_s(Mango, mango.c_str());
		strcpy_s(Potato, potato.c_str());
		strcpy_s(Onions, onions.c_str());
		strcpy_s(Tomato, tomato.c_str());
		strcpy_s(Cucumber, cucumber.c_str());
		strcpy_s(Chocolate, chocolate.c_str());
		strcpy_s(Chips, chips.c_str());
		strcpy_s(Bisuits, biscuits.c_str());
		strcpy_s(Spices, spice.c_str());
		strcpy_s(Lentils, lentil.c_str());
		strcpy_s(Wheat, wheat.c_str());
		strcpy_s(Flour, flour.c_str());
		strcpy_s(Rice, rice.c_str());
		strcpy_s(Cereal, cereal.c_str());
		strcpy_s(Shampoo, shampoo.c_str());
		strcpy_s(Soap, soap.c_str());
		strcpy_s(Handsanitizer, handsanitizer.c_str());
		strcpy_s(Detergent, detergent.c_str());
		strcpy_s(DishSoap, dishsoap.c_str());
		strcpy_s(Washroomcleaner, cleaner.c_str());
	}
	void setchicken(string chicken)
	{
		strcpy_s(Chicken, chicken.c_str());
	}
	void setMutton(string mutton)
	{
		strcpy_s(Mutton, mutton.c_str());
	}
	void setBeef(string beef)
	{
		strcpy_s(Beef, beef.c_str());
	}
	void setFish(string fish)
	{
		strcpy_s(Fish, fish.c_str());
	}
	void setMilk(string milk)
	{
		strcpy_s(Milk, milk.c_str());
	}
	void setEggs(string eggs)
	{
		strcpy_s(Eggs, eggs.c_str());
	}
	void setYogurt(string yogurt)
	{
		strcpy_s(Yogurt, yogurt.c_str());
	}
	void setCheese(string cheese)
	{
		strcpy_s(Cheese, cheese.c_str());
	}
	void setApple(string apple)
	{
		strcpy_s(Apple, apple.c_str());
	}
	void setOrange(string orange)
	{
		strcpy_s(Orange, orange.c_str());
	}
	void setBanana(string banana)
	{
		strcpy_s(Banana, banana.c_str());
	}
	void setWatermelon(string watermelon)
	{
		strcpy_s(Watermelon, watermelon.c_str());
	}
	void setMango(string mango)
	{
		strcpy_s(Mango, mango.c_str());
	}
	void setPotato(string potato)
	{
		strcpy_s(Potato, potato.c_str());
	}
	void setOnions(string onions)
	{
		strcpy_s(Onions, onions.c_str());
	}
	void setTomato(string tomato)
	{
		strcpy_s(Tomato, tomato.c_str());
	}
	void setCucumber(string cucumber)
	{
		strcpy_s(Cucumber, cucumber.c_str());
	}
	void setChocolate(string chocolate)
	{
		strcpy_s(Chocolate, chocolate.c_str());
	}
	void setChips(string chips)
	{
		strcpy_s(Chips, chips.c_str());
	}
	void setBiscuits(string biscuits)
	{
		strcpy_s(Bisuits, biscuits.c_str());
	}
	void setSpice(string spice)
	{
		strcpy_s(Spices, spice.c_str());
	}
	void setLentil(string lentil)
	{
		strcpy_s(Lentils, lentil.c_str());
	}
	void setWheat(string wheat)
	{
		strcpy_s(Wheat, wheat.c_str());
	}
	void setFlour(string flour)
	{
		strcpy_s(Flour, flour.c_str());
	}
	void setRice(string rice)
	{
		strcpy_s(Rice, rice.c_str());
	}
	void setCeareal(string cereal)
	{
		strcpy_s(Cereal, cereal.c_str());
	}
	void setShampoo(string shampoo)
	{
		strcpy_s(Shampoo, shampoo.c_str());
	}
	void setSoap(string soap)
	{
		strcpy_s(Soap, soap.c_str());
	}
	void setHS(string handsanitizer)
	{
		strcpy_s(Handsanitizer, handsanitizer.c_str());
	}
	void setDetergent(string detergent)
	{
		strcpy_s(Detergent, detergent.c_str());
	}
	void setDishsoap(string dishsoap)
	{
		strcpy_s(DishSoap, dishsoap.c_str());
	}
	void setWC(string cleaner)
	{
		strcpy_s(Washroomcleaner, cleaner.c_str());
	}
	string getChicken()
	{
		return Chicken;
	}
	string getMutton()
	{
		return Mutton;
	}
	string getBeef()
	{
		return Beef;
	}
	string getFish()
	{
		return Fish;
	}
	string getEggs()
	{
		return Eggs;
	}
	string getMilk()
	{
		return Milk;
	}
	string getYogurt()
	{
		return Yogurt;
	}
	string getCheese()
	{
		return Cheese;
	}
	string getApple()
	{
		return Apple;
	}
	string getOrange()
	{
		return Orange;
	}
	string getBanana()
	{
		return Banana;
	}
	string getWatermelon()
	{
		return Watermelon;
	}
	string getMango()
	{
		return Mango;
	}
	string getPotato()
	{
		return Potato;
	}
	string getOnions()
	{
		return Onions;
	}
	string getTomato()
	{
		return Tomato;
	}
	string getCucumber()
	{
		return Cucumber;
	}
	string getChocolate()
	{
		return Chocolate;
	}
	string getBiscuits()
	{
		return Bisuits;
	}
	string getChips()
	{
		return Chips;
	}
	string getSpice()
	{
		return Spices;
	}
	string getLentil()
	{
		return Lentils;
	}
	string getWheat()
	{
		return Wheat;
	}
	string getFlour()
	{
		return Flour;
	}
	string getRice()
	{
		return Rice;
	}
	string getCereal()
	{
		return Cereal;
	}
	string getShampoo()
	{
		return Shampoo;
	}
	string getSoap()
	{
		return Soap;
	}
	string getHS()
	{
		return Handsanitizer;
	}
	string getDetergent()
	{
		return Detergent;
	}
	string getDishsoap()
	{
		return DishSoap;
	}
	string getWC()
	{
		return Washroomcleaner;
	}
	void seti1(int i1)
	{
		item1 = i1;
	}
	void seti2(int i2)
	{
		item2 = i2;
	}
	void seti3(int i3)
	{
		item3 = i3;
	}
	void seti4(int i4)
	{
		item4 = i4;
	}
	void seti5(int i5)
	{
		item5 = i5;
	}
	void seti6(int i6)
	{
		item6 = i6;
	}
	void seti7(int i7)
	{
		item7 = i7;
	}
	void seti8(int i8)
	{
		item8 = i8;
	}
	void seti9(int i9)
	{
		item9 = i9;
	}
	void seti10(int i10)
	{
		item10 = i10;
	}
	void seti11(int i11)
	{
		item11 = i11;
	}
	void seti12(int i12)
	{
		item12 = i12;
	}
	void seti13(int i13)
	{
		item13 = i13;
	}
	void seti14(int i14)
	{
		item14 = i14;
	}
	void seti15(int i15)
	{
		item15 = i15;
	}
	void seti16(int i16)
	{
		item16 = i16;
	}
	void seti17(int i17)
	{
		item17 = i17;
	}
	void seti18(int i18)
	{
		item18 = i18;
	}
	void seti19(int i19)
	{
		item19 = i19;
	}
	void seti20(int i20)
	{
		item20 = i20;
	}
	void seti21(int i21)
	{
		item21 = i21;
	}
	void seti22(int i22)
	{
		item22 = i22;
	}
	void seti23(int i23)
	{
		item23 = i23;
	}
	void seti24(int i24)
	{
		item24 = i24;
	}
	void seti25(int i25)
	{
		item25 = i25;
	}
	void seti26(int i26)
	{
		item26 = i26;
	}
	void seti27(int i27)
	{
		item27 = i27;
	}
	void seti28(int i28)
	{
		item28 = i28;
	}
	void seti29(int i29)
	{
		item29 = i29;
	}
	void seti30(int i30)
	{
		item30 = i30;
	}
	void seti31(int i31)
	{
		item31 = i31;
	}
	void seti32(int i32)
	{
		item32 = i32;
	}
	int geti1() { return item1; }
	int geti2() { return item2; }
	int geti3() { return item3; }
	int geti4() { return item4; }
	int geti5() { return item5; }
	int geti6() { return item6; }
	int geti7() { return item7; }
	int geti8() { return item8; }
	int geti9() { return item9; }
	int geti10() { return item10; }
	int geti11() { return item11; }
	int geti12() { return item12; }
	int geti13() { return item13; }
	int geti14() { return item14; }
	int geti15() { return item15; }
	int geti16() { return item16; }
	int geti17() { return item17; }
	int geti18() { return item18; }
	int geti19() { return item19; }
	int geti20() { return item20; }
	int geti21() { return item21; }
	int geti22() { return item22; }
	int geti23() { return item23; }
	int geti24() { return item24; }
	int geti25() { return item25; }
	int geti26() { return item26; }
	int geti27() { return item27; }
	int geti28() { return item28; }
	int geti29() { return item29; }
	int geti30() { return item30; }
	int geti31() { return item31; }
	int geti32() { return item32; }

	// WRITING INTO THE FILE
	void W_Additems(string n1, ProductCatalog temp)
	{
		ofstream file("ADDproduct.dat", ios::binary | ios::app);
		if (file.write((char*)&temp, sizeof(temp)))
		{
			cout << endl;
		}
		file.close();
	}
	//READING FROM FILE
	void Additems(string c)
	{
		ProductCatalog temp;
		ifstream fin("ADDproduct.dat", ios::binary | ios::app);
		if (fin.read((char*)&temp, sizeof(temp)))
		{
			temp.getChicken();
			temp.geti1();
			temp.getMutton();
			temp.geti2();
			temp.getBeef();
			temp.geti3();
			temp.getFish();
			temp.geti4();
			temp.getMilk();
			temp.geti5();
			temp.getEggs();
			temp.geti6();
			temp.getYogurt();
			temp.geti7();
			temp.getCheese();
			temp.geti8();
			temp.getApple();
			temp.geti9();
			temp.getOrange();
			temp.geti10();
			temp.getBanana();
			temp.geti11();
			temp.getWatermelon();
			temp.geti12();
			temp.getMango();
			temp.geti13();
			temp.getPotato();
			temp.geti14();
			temp.getOnions();
			temp.geti15();
			temp.getTomato();
			temp.geti16();
			temp.getCucumber();
			temp.geti7();
			temp.getChocolate();
			temp.geti18();
			temp.getBiscuits();
			temp.geti19();
			temp.getChips();
			temp.geti20();
			temp.getSpice();
			temp.geti21();
			temp.getLentil();
			temp.geti22();
			temp.getWheat();
			temp.geti23();
			temp.getFlour();
			temp.geti24();
			temp.getRice();
			temp.geti25();
			temp.getCereal();
			temp.geti26();
			temp.getShampoo();
			temp.geti27();
			temp.getSoap();
			temp.geti28();
			temp.getHS();
			temp.geti29();
			temp.getDetergent();
			temp.geti30();
			temp.getDishsoap();
			temp.geti31();
			temp.getWC();
			temp.geti32();
		}
		fin.close();
	}
	// Deleting items from file
	void deleteitems(string s1)
	{
		ProductCatalog temp;
		fstream myFile("temp9.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp9.dat ", ios::app | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			if ((temp.getChicken() != s1) || (temp.getMutton() != s1) || (temp.getBeef() != s1) || (temp.getFish() != s1) || (temp.getApple() != s1) || (temp.getOrange() != s1) || (temp.getBanana() != s1) || (temp.getWatermelon() != s1) || (temp.getMango() != s1) || (temp.getPotato() != s1) || (temp.getOnions() != s1) || (temp.getTomato() != s1) || (temp.getCucumber() != s1) || (temp.getChocolate() != s1) || (temp.getBiscuits() != s1) || (temp.getChips() != s1) || (temp.getSpice() != s1) || (temp.getLentil() != s1) || (temp.getWheat() != s1) || (temp.getFlour() != s1) || (temp.getRice() != s1) || (temp.getCereal() != s1) || (temp.getShampoo() != s1) || (temp.getSoap() != s1) || (temp.getHS() != s1) || (temp.getDetergent() != s1) || (temp.getDishsoap() != s1) || (temp.getWC() != s1))
			{
				myFile_temp.write((char*)&temp, sizeof(temp));
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("ADDproduct.dat");
		rename("temp9.dat", "ADDproduct.dat");
	}

	// Updating items from file

	void Updateitems(ProductCatalog p)
	{
		ProductCatalog temp;
		fstream myFile("ADDproduct.dat", ios::in | ios::out | ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			if (temp.getChicken() == p.getChicken()) {

				temp.getChicken();
				temp.getMutton();
				temp.getBeef();
				temp.getFish();
				temp.getEggs();
				temp.getMilk();
				temp.getYogurt();
				temp.getCheese();
				temp.getApple();
				temp.getOrange();
				temp.getBanana();
				temp.getWatermelon();
				temp.getPotato();
				temp.getOnions();
				temp.getTomato();
				temp.getCucumber();
				temp.getChocolate();
				temp.getBiscuits();
				temp.getChips();
				temp.getSpice();
				temp.getLentil();
				temp.getWheat();
				temp.getFlour();
				temp.getRice();
				temp.getCereal();
				temp.getShampoo();
				temp.getSoap();
				temp.getHS();
				temp.getDetergent();
				temp.getDishsoap();
				temp.getWC();
				int current = myFile.tellg();
				int oneblock = sizeof(temp);
				myFile.seekg(current - oneblock, ios::beg);
				myFile.write((char*)&temp, sizeof(temp));
				break;
			}
		}
		myFile.close();
	}
};









#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "Customer.h"
#include "Inventory.h"
using namespace std;

// Will be aggregated with customer class
// Inherits Inventory class

class OnlineShopping :public Inventory
{
protected:
	int totalPrice;
public:
	OnlineShopping() {}
	OnlineShopping(int TP)
	{
		totalPrice = TP;
	}
	void settp(int TP) { totalPrice = TP; }
	int getTp() { return totalPrice; }
	int sum = 0;
	int quantity1[32];
	int Price[32];
	int size1;
	void setsize1(int s)
	{
		size1 = s;
	}
	int getsize1()
	{
		return size1;
	}
	string T_items[32];

	// A function that will Customer to add items to his cart / update items in inventory / checkout / Display bill
	void AddtoCart()
	{
		int choice;
		int items[32];
		string Items[32];
		int quantity[32];
		int price[32];
		int size = 32;
		string store;
		char c;
		int i = 0;
		do
		{
			cout << " Products Avaiable are " << endl;
			cout << "         Perishable Product          " << endl;
			cout << " 1. Chicken" << endl;
			cout << " 2. Mutton" << endl;
			cout << " 3. Beef" << endl;
			cout << " 4. Fish" << endl;
			cout << " 5. Eggs" << endl;
			cout << " 6. Milk" << endl;
			cout << " 7. Yogurt" << endl;
			cout << " 8. Cheese" << endl;
			cout << " 9. Apple" << endl;
			cout << " 10. Banana" << endl;
			cout << " 11. Mango" << endl;
			cout << " 12. Orange" << endl;
			cout << " 13. Watermelon" << endl;
			cout << " 14. Potato" << endl;
			cout << " 15. Onions" << endl;
			cout << " 16. Tomato" << endl;
			cout << " 17. Cucumber" << endl;
			cout << "      Non-Perishable Product         " << endl;
			cout << " 18. Chocolate" << endl;
			cout << " 19. Biscuits" << endl;
			cout << " 20. Chips" << endl;
			cout << " 21. Spice" << endl;
			cout << " 22. Lentils" << endl;
			cout << " 23. Wheat" << endl;
			cout << " 24. Flour" << endl;
			cout << " 25. Rice" << endl;
			cout << " 26. Cereal" << endl;
			cout << "         Hygeinic Product          " << endl;
			cout << " 27. Shampoo" << endl;
			cout << " 28. Soap" << endl;
			cout << " 29. Handsanitizer" << endl;
			cout << "         Household Product           " << endl;
			cout << " 30. Detergent" << endl;
			cout << " 31. Dishsoap" << endl;
			cout << " 32. Washroom Cleaner" << endl;
			for (i; i < size; i++)
			{
				cout << " Please choose item you want to buy" << endl;
				cin >> items[i];
				if (items[i] > 0 && items[i] < size)
				{
					if (items[i] == 1)
					{
						Items[i] = "Chicken";
						price[i] = 500;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 2)
					{
						Items[i] = "Mutton";
						price[i] = 1200;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 3)
					{
						Items[i] = "Beef";
						price[i] = 800;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 4)
					{
						Items[i] = "Fish";
						price[i] = 1200;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 5)
					{
						Items[i] = "Eggs";
						price[i] = 120;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 6)
					{
						Items[i] = "Milk";
						price[i] = 160;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 7)
					{
						Items[i] = "Yogurt";
						price[i] = 180;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 8)
					{
						Items[i] = "Cheese";
						price[i] = 380;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 9)
					{
						Items[i] = "Apple";
						price[i] = 130;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 10)
					{
						Items[i] = "Banana";
						price[i] = 110;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 11)
					{
						Items[i] = "Mango";
						price[i] = 180;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 12)
					{
						Items[i] = "Orange";
						price[i] = 140;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 13)
					{
						Items[i] = "Watermelon";
						price[i] = 45;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 14)
					{
						Items[i] = "Potato";
						price[i] = 60;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 15)
					{
						Items[i] = "Onions";
						price[i] = 80;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 16)
					{
						Items[i] = "Tomato";
						price[i] = 120;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 17)
					{
						Items[i] = "Cucumber";
						price[i] = 40;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 18)
					{
						Items[i] = "Chocolate";
						price[i] = 30;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 19)
					{
						Items[i] = "Biscuits";
						price[i] = 30;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 20)
					{
						Items[i] = "Chips";
						price[i] = 25;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 21)
					{
						Items[i] = "Spice";
						price[i] = 2000;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 22)
					{
						Items[i] = "Lentils";
						price[i] = 340;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 23)
					{
						Items[i] = "Wheat";
						price[i] = 90;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 24)
					{
						Items[i] = "Flour";
						price[i] = 100;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 25)
					{
						Items[i] = "Rice";
						price[i] = 360;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 26)
					{
						Items[i] = "Cereal";
						price[i] = 400;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 27)
					{
						Items[i] = "Shampoo";
						price[i] = 500;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 28)
					{
						Items[i] = "Soap";
						price[i] = 60;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 29)
					{
						Items[i] = "Handsanitizer";
						price[i] = 150;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 30)
					{
						Items[i] = "Deterget";
						price[i] = 560;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 31)
					{
						Items[i] = "Dishsoap";
						price[i] = 120;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					else if (items[i] == 32)
					{
						Items[i] = "Washroom Cleaner";
						price[i] = 300;
						cin >> quantity[i];
						price[i] = price[i] * quantity[i];
					}
					cout << " Items" << "          " << "Quantity" << "         " << "Price" << endl;
					cout << Items[i] << "             " << quantity[i] << "              " << price[i] << endl;
					sum = sum + price[i];
					cout << "                                  " << sum << endl;
					size1 = i + 1;
					T_items[i] = Items[i];
					Price[i] = price[i];
					quantity1[i] = quantity[i];
					setsize1(size1);


				}
				else
				{
					break;
				}
			}
			cout << " Do you want to Countinue or Checkout" << endl;
			cout << " Y. Countinue " << endl;
			cout << " N. Checkout " << endl;
			cin >> c;
		} while (c == 'Y' && c == 'y');
		cout << " Items" << "          " << "Quantity" << "        " << "Price" << endl;
		for (int i = 0; i < size1; i++)
		{
			cout << T_items[i] << "             " << quantity1[i] << "              " << Price[i] << endl;
		}
		cout << "                                   " << sum << endl;
	}
	void DisplayPayment()
	{
		cout << " The total Payment for order without delivery charges is :" << endl;
		settp(sum);
		cout << " " << getTp() << endl;

	}
	void UpdateInventory(Inventory T)
	{
		int quant = 100;
		for (int i = 0; i < 5; i++)
		{
			if (T_items[i] == "Chicken")
			{
				int quantity = quant - quantity1[i];
				T.setp1(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Mutton")
			{
				int quantity = quant - quantity1[i];
				T.setp2(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Beef")
			{
				int quantity = quant - quantity1[i];
				T.setp3(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Fish")
			{
				int quantity = quant - quantity1[i];
				T.setp4(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Eggs")
			{
				int quantity = quant - quantity1[i];
				T.setp5(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Milk")
			{
				int quantity = quant - quantity1[i];
				T.setp6(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Yogurt")
			{
				int quantity = quant - quantity1[i];
				T.setp7(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Cheese")
			{
				int quantity = quant - quantity1[i];
				T.setp8(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Apple")
			{
				int quantity = quant - quantity1[i];
				T.setp9(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Orange")
			{
				int quantity = quant - quantity1[i];
				T.setp10(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Mango")
			{
				int quantity = quant - quantity1[i];
				T.setp11(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Banana")
			{
				int quantity = quant - quantity1[i];
				T.setp12(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Watermelom")
			{
				int quantity = quant - quantity1[i];
				T.setp13(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Potato")
			{
				int quantity = quant - quantity1[i];
				T.setp14(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Tomato")
			{
				int quantity = quant - quantity1[i];
				T.setp15(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Onions")
			{
				int quantity = quant - quantity1[i];
				T.setp16(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Cucumber")
			{
				int quantity = quant - quantity1[i];
				T.setp17(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Chocolate")
			{
				int quantity = quant - quantity1[i];
				T.setp18(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Biscuits")
			{
				int quantity = quant - quantity1[i];
				T.setp19(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Chips")
			{
				int quantity = quant - quantity1[i];
				T.setp20(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Spice")
			{
				int quantity = quant - quantity1[i];
				T.setp12(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Lentils")
			{
				int quantity = quant - quantity1[i];
				T.setp13(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Wheat")
			{
				int quantity = quant - quantity1[i];
				T.setp14(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Flour")
			{
				int quantity = quant - quantity1[i];
				T.setp15(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Rice")
			{
				int quantity = quant - quantity1[i];
				T.setp16(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Cereal")
			{
				int quantity = quant - quantity1[i];
				T.setp17(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Shampoo")
			{
				int quantity = quant - quantity1[i];
				T.setp18(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Soap")
			{
				int quantity = quant - quantity1[i];
				T.setp19(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Handsanitizer")
			{
				int quantity = quant - quantity1[i];
				T.setp20(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Detergent")
			{
				int quantity = quant - quantity1[i];
				T.setp11(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "DishSoap")
			{
				int quantity = quant - quantity1[i];
				T.setp10(quantity);
				T.I_UpdateInventoryitems(T);
			}
			else if (T_items[i] == "Washroom Cleaner")
			{
				int quantity = quant - quantity1[i];
				T.setp2(quantity);
				T.I_UpdateInventoryitems(T);
			}
		}
	}
	
};


#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<cstring>
#include "User.h"
#include "Admin.h"
#include "Product.h"
#include "Manager.h"
#include "Customer.h"
#include "Inventory.h"
#include "Payment.h"
#include "OShopping.h"
#include "Feedback.h"
using namespace std;



int main()
{
	
		cout << "           *         *      ***********    *        *        *              *          ***********  ***********   " << endl;
		cout << "           * *       *      *              *       * *       *             * *         *            *             " << endl;
		cout << "           *  *      *      *              *      *   *      *            *   *        *            *             " << endl;
		cout << "           *   *     *      *              *     *     *     *           *     *       *            *             " << endl;
		cout << "           *    *    *      ***********    *    *       *    *          *********      *  ********  ***********   " << endl;
		cout << "           *     *   *      *              *   *         *   *         *         *     *  *      *  *             "<< endl;
		cout << "           *      *  *      *              *  *           *  *        *           *    *  *      *  *             " << endl;
		cout << "           *       * *      *              * *             * *       *             *   *         *  *             " << endl;
		cout << "           *         *      ***********    *                 *      *               *  ***********  ***********   " << endl;


		cout << "                   ***********     *************    *************   *************     ***********         " << endl;
		cout << "                   *                     *          *           *   *           *     *                   " << endl;
		cout << "                   *                     *          *           *   *           *     *                  " << endl;
		cout << "                   *                     *          *           *   *           *     *                  " << endl;
		cout << "                   ***********           *          *           *   *************     ***********       " << endl;
		cout << "                             *           *          *           *   *     *           *                  " << endl;
		cout << "                             *           *          *           *   *       *         *                  " << endl;
		cout << "                             *           *          *           *   *         *       *                 " << endl;
		cout << "                   ***********           *          *************   *           *     ***********       " << endl;

		Admin A;
		Manager M;
		Customer1 C;
		ProductCatalog P;
		Inventory I;
		OnlineShopping o;
		FeedBack f;
		Payment Pay(0,&o,"0",0);
		Simulation S;
		string name;
		string pass;
		string name1;
		string name2;
		string pass1;
		string pass2;
		string cnic;
		string cnic1;
		string gender;
		string store;
		int age= 0;
		int phno =0;
		string address;
		Admin A1(name1, pass1,cnic, gender, phno, age, address,&P);
		Manager M1(name1, pass1, cnic, gender, phno, age, address, &I,&f);
		Customer1 C1(name1, pass1, cnic, gender, phno, age, address);
		Admin A2;
		int option1;
		int option2;
		int option3;
		int option4;
		int option5;
		int option6;
		int option7;
		int option8;
		int option9;
		int option10;
		int opt1;
		char c1;
		char c2;
		char c3;
		char c4;
		char c5;
		char c6;
		bool b1 = true;
		bool b2 = true;
		bool b3 = true;

		cout << endl;
		cout << endl;
		cout << "                *         *      *      *******   *     *      *         *  ******  *     *  *     *  " << endl;
		cout << "                * *     * *     * *        *      * *   *      * *     * *  *       * *   *  *     *   "<< endl;
		cout << "                *  *   *  *    *****       *      *  *  *      *  *   *  *  ******  *  *  *  *     *  " << endl;
		cout << "                *   * *   *   *     *      *      *   * *      *   * *   *  *       *   * *  *     * " << endl;
		cout << "                *    *    *  *       *  *******   *     *      *    *    *  ******  *     *  *******   " << endl;
		
		
		do
		{
			cout << " Which type of user you are " << endl;
			cout << "1. Admin " << endl;
			cout << "2. Manager " << endl;
			cout << "3. Customer " << endl;
			cin >> option1;
			if (option1 == 1)
			{
				cout << " Do you want to login " << endl;
				cout << "1. Login" << endl;
				cin >> option2;
				if (option2 == 1)
				{
					A.setname("Admin");
					A.setPassword("1A@aqwer1");
					cout << " Enter username " << endl;
					cin >> name;
					cout << " Password " << endl;
					cin >> pass;
					if ((b1 == A.check_pass(pass)) && (pass == A.getpassword()) && (name == A.getname()))
					{
						cout << " You have logged in successfully " << endl;
						A1.W_loginAdmin(name, A);
						A1.R_loginAdmin(name);
						do
						{
							cout << " Do you want to register / manage user / manage store " << endl;
							cout << "1. Register Manager " << endl;
							cout << "2. Manage Store " << endl;
							cout << "3. Manage User " << endl;
							cin >> option3;
							if (option3 == 1)
							{
								cout << " Enter Name " << endl;
								cin >> name1;
								cout << " Enter Password " << endl;
								cin >> pass1;
								cout << "Enter Cnic" << endl;
								cin >> cnic;
								cout << " Enter Gender " << endl;
								cin >> gender;
								cout << " Enter Age " << endl;
								cin >> age;
								cout << " Enter Phoneno " << endl;
								cin >> phno;
								cout << "Enter Address " << endl;
								cin >> address;
								A1.setname(name1);
								A1.setPassword(pass1);
								A1.setCnic(cnic);
								A1.setGender(gender);
								A1.setage(age);
								A1.setphone(phno);
								A1.setaddress(address);
								if (b1 == A1.check_pass(pass1) && b2 == A1.check_cnic(cnic))
								{
									cout << " You have registered successfully " << endl;
									A1.W_RegisterManager(name1, A1);
									A1.R_RegisterManager(name1);
									cout << " Do you want to login " << endl;
									cout << "1. Login as Manager " << endl;
									cin >> option4;
									if (option4 == 1)
									{
										cout << " Enter username " << endl;
										cin >> name2;
										cout << " Enter password " << endl;
										cin >> pass2;
										M.setPassword(pass2);
										M.setname(name2);
										if ((b1 == M.check_pass(pass)) && (M.getpassword() == A1.getpassword()) && (M.getname() == A1.getname()))
										{
											cout << " You have looged in successfully" << endl;
											M1.W_loginManager(name2, M);
											M1.R_loginManager(name2);
											do
											{
												cout << " Do you want to manage inventory / read Feedback " << endl;
												cout << " 1. Manage Inventory " << endl;
												cout << "2. Feedback " << endl;
												cin >> option5;
												if (option5 == 1)
												{
													M1.ManageInventory();
												}
												else if (option5 == 2)
												{
													M1.Feedback1();
												}
												else
												{
													cout << " Thank you " << endl;
												}
												cout << " Do you want to Logout Y/N " << endl;
												cout << "N. Logout" << endl;
												cout << "Y. Countinue" << endl;
												cin >> c1;
											} while (c1 == 'Y' || c1 == 'y');
										}
										else
										{
											cout << " Invalid user name or Password " << endl;
											cout << " Password must contain atleast one special character, a number , uppercase, lowercase letter " << endl;
											cout << " Please enter your Email or password again" << endl;
										}
									}
									else
									{
										cout << " Invalid user name or Password or Cnic " << endl;
										cout << " Password must contain atleast one special character, a number , uppercase, lowercase letter " << endl;
										cout << " Please enter your Email or password again" << endl;
									}
								}
							}
							else if (option3 == 2)
							{
								A1.Manage_store();
							}
							else if (option3 == 3)
							{
								cout << " Do you want to Register store / Spam Customer / Remove Customer" << endl;
								cout << " 1 for Add Store " << endl;
								cout << " 2 for Spam Customer" << endl;
								cout << " 3 for Remove Customer" << endl;
								cout << " 4 for Delete store " << endl;
								cin >> option6;
								if (option6 == 1)
								{
									cout << " Enter the you store want to register " << endl;
									cin >> store;
									A2.setstore(store);
									cout << " Your store is registered successfully in " << store << endl;
									cout << endl;
									A2.R_Addstore(store);
								}
								else if (option6 == 2)
								{
									cout << " Enter the cnic of customer you want to spam " << endl;
									cin >> cnic1;
									A1.setname(cnic1);
									cout << " The customer " << name2 << " has been spammed successfully " << endl;
								}
								else if (option6 == 3)
								{
									cout << " Enter the name of customer you want to remove " << endl;
									cin >> cnic1;
									A1.setname(cnic1);
									cout << " The customer " << name2 << " has been removed successfully " << endl;
									A1.Remove_customer(cnic1);
								}
								else if (option6 == 4)
								{
									cout << " Enter the store you want to remove " << endl;
									cin >> store;
									A2.setstore(store);
									cout << " Your store" << store << " is removed successfully in " << endl;
									cout << endl;
									A2.delete_store(store);
								}
							}
							cout << " Do you want to Logout Y/N " << endl;
							cout << "N. Logout" << endl;
							cout << "Y. Countinue" << endl;
							cin >> c2;
						} while (c2 == 'Y' || c2 == 'y');
					}
					else
					{
						cout << " Invalid user name or Password " << endl;
						cout << " Password must contain atleast one special character, a number , uppercase, lowercase letter " << endl;
						cout << " Please enter your Email or password again" << endl;
					}
				}
			}
			else if (option1 == 2)
			{
			cout << " Do you want to login as Manager" << endl;
			cout << "1. Login " << endl;
			cin >> option7;
			if (option7 == 1)
			{
				cout << " Enter Username " << endl;
				cin >> name2;
				cout << " Enter Password " << endl;
				cin >> pass1;
				cout << " Re-Enter Password " << endl;
				cin >> pass2;
				M1.setPassword(pass1);
				M1.setname(name2);
				if ((b1 == M.check_pass(pass1)) && (M.getpassword() == pass2) && (M.getname() == name2))
				{
					cout << " You have looged in successfully" << endl;
					M1.W_loginManager(name2, M);
					M1.R_loginManager(name2);
					do
					{
						cout << " Do you want to manage inventory " << endl;
						cout << " Do you want to read feedback " << endl;
						cout << " 1. Inventory " << endl;
						cout << " 2. Feedback " << endl;
						cin >> option5;
						if (option5 == 1)
						{
							M1.ManageInventory();
						}
						else if (option5 == 2)
						{
							M1.Feedback1();

						}
						else
						{
							cout << " Thank you " << endl;
						}
						cout << " Do you want to Logout Y/N " << endl;
						cout << "N. Logout" << endl;
						cout << "Y. Countinue" << endl;
						cin >> c1;
					} while (c1 == 'Y' || c1 == 'y');
				}
				else
				{
					cout << " Invalid user name or Password " << endl;
					cout << " Password must contain atleast one special character, a number , uppercase, lowercase letter " << endl;
					cout << " Please enter your Email or password again" << endl;
				}
			}
			}
			else if (option1 == 3)
			{
				cout << " Do you want to login / Register " << endl;
				cout << "1. Register " << endl;
				cout << "2. Login " << endl;
				cin >> option8;
				if (option8 == 1)
				{
					cout << " Enter Name " << endl;
					cin >> name1;
					cout << " Enter Password " << endl;
					cin >> pass1;
					cout << "Enter Cnic" << endl;
					cin >> cnic;
					cout << " Enter Gender " << endl;
					cin >> gender;
					cout << " Enter Age " << endl;
					cin >> age;
					cout << " Enter Phoneno " << endl;
					cin >> phno;
					cout << "Enter Address " << endl;
					cin >> address;
					C1.setname(name1);
					C1.setPassword(pass1);
					C1.setCnic(cnic);
					C1.setGender(gender);
					C1.setage(age);
					C1.setphone(phno);
					C1.setaddress(address);
					if (b1 == C1.check_pass(pass1) && b2 == C1.check_cnic(cnic))
					{
						cout << " Registered Successfully as Customer " << endl;
						C1.W_RegisterCustomer(name1, C1);
						C1.R_RegisterCustomer(name1);
						cout << " Do you want to  login as customer " << endl;
						cin >> option9;
						if (option9 == 1)
						{
							cout << " Enter Username " << endl;
							cin >> name2;
							cout << " Enter Password" << endl;
							cin >> pass2;
							if (b1 == C1.check_pass(pass2) && (C1.getpassword() == pass2 && C1.getname() == name2))
							{
								cout << " Login Successful " << endl;
								C1.W_loginCustomer(name1, C1);
								C1.R_loginCustomer(name1);
								do
								{
									
									cout << " Do you want to buy items " << endl;
									cin >> opt1;
									if (opt1 == 1)
									{
										o.AddtoCart();
										o.DisplayPayment();

									}
									C1.Shopping();
									o.UpdateInventory(I);
									Pay.modeofPayment();
									S.CheckoutSimulation();
									S.SimulationConfiguration();
									cout << " Do you want to Logout Y/N " << endl;
									cout << "N. Logout" << endl;
									cout << "Y. Countinue" << endl;
									cin >> c4;
								} while (c4 == 'Y' || c4 == 'y');
							}
							else
							{
								cout << " Invalid user name or Password " << endl;
								cout << " Password must contain atleast one special character, a number , uppercase, lowercase letter " << endl;
								cout << " Please enter your Email or password again" << endl;
							}
						}
					}
				}
				else if (option8 == 2)
				{
					cout << " Enter UserName " << endl;
					cin >> name1;
					cout << " Enter Password " << endl;
					cin >> pass1;
					cout << " Re-enter Password " << endl;
					cin >> pass2;
					C1.setname(name1);
					C1.setPassword(pass1);
					if (b1 == C1.check_pass(pass1) && (C1.getpassword() == pass2 && C1.getname() == name1))
					{
						cout << " Login Successful " << endl;
						C1.W_loginCustomer(name1,C1);
						C1.R_loginCustomer(name1);
						do
						{
							C1.Shopping();
							o.UpdateInventory(I);
							Pay.modeofPayment();
							S.CheckoutSimulation();
							S.SimulationConfiguration();
							cout << " Do you want to Logout Y/N " << endl;
							cout << "N. Logout" << endl;
							cout << "Y. Countinue" << endl;
							cin >> c4;
						} while (c4 == 'Y' || c4 == 'y');
					}
					else
					{
						cout << " Invalid user name or Password " << endl;
						cout << " Password must contain atleast one special character, a number , uppercase, lowercase letter " << endl;
						cout << " Please enter your Email or password again" << endl;
					}
				}
			}
			cout << " Do you want to countine Y/N " << endl;
			cin >> c3;
		}while (c3 == 'Y' || c3 == 'y');

		


}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string regusername;
    string regfname;
    string reglname;
    string regpass;
    string regeaddress;
    string regaddress1;
    string regaddress2;
    string regnum;
    string defuser = "dev";
    string defpass = "foodmonkey";
    string deffname = "Food";
    string deflname = "Monkey";
    string defeaddress = "foodmonkey@gmail.com";
    string defaddress1 = "Blk 1 Lot 55, Villa Celina 2C";
    string defaddress2 = "Pakigne, Minglanilla, Cebu";
    string defnum = "09271271924";
    string loguser;
    string logpass;
    int order=1;
    int command;
    int exit;
    int y=1;
    int z=0;

    while (y==1)
    {
        cout << "\n\t\t\t\t\t\t FoodMonkey"<< endl;
        cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n"<< endl;
        cout << "\n\t\t\t\t  (1)\t\t      (2)\t\t (3)" << endl;
        cout << "\n\t\t\t\t Log-in       |\t    Register \t|\tExit"<< endl;
        cout << "\nPress number of instruction:" << endl;
        cin >> command;
        switch (command)
        {
            case 1:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t      Log-in to Account\n";
            cout << "\n\t\t\t\t Username: ";
            cin.ignore(1,'\n');
            getline (cin, loguser);
            cout << "\n\t\t\t\t Password: ";
            getline (cin, logpass);
            if (loguser==regusername && logpass==regpass)
            {
                cout << "\n\n\n\n\t\t\t\t\tWelcome to FoodMonkey, "<< regfname << "!" << endl;
                y=0;
                z=1;
            }
            else if (loguser=="dev" && logpass=="foodmonkey")
            {
                cout << "\n\n\n\n\t\t\t\t\t     Welcome back, "<< deffname << "!" << endl;
                y=0;
                z=1;
            }
            else
            {
                cout << "\n\t\t\t\t   You have entered wrong Username/Password!\n\n\n" << endl;
                y=1;
            }
            break;
            case 2:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t\tRegistration\n";
            cout << "\n\t\t\tFirst Name: ";
            cin.ignore(1,'\n');
            getline (cin, regfname);
            cout << "\n\t\t\tLast Name: ";
            getline (cin, reglname);
            cout << "\n\t\t\tEmail Address: ";
            getline (cin, regeaddress);
            cout << "\n\t\t\tAddress 1: ";
            getline (cin, regaddress1);
            cout << "\n\t\t\tAddress 2: ";
            getline (cin, regaddress2);
            cout << "\n\t\t\tPhone Number/Telephone Num: ";
            getline (cin, regnum);
            cout << "\n\t\t\tUsername: ";
            getline (cin, regusername);
            cout << "\n\t\t\tPassword: ";
            getline (cin, regpass);
            cout << "\n\t\t\t\t\t     Registration Done!\n\n\n" << endl;
            y=1;
            break;
            case 3:
            cout << "\n\t\t\t\t\t\t FoodMonkey" << endl;
            cout << "\t\t\t\t  Your Number 1 Food Delivery App on the Go!\n\n" << endl;
            cout << "\n\t\t\t\t\t      Exit Application?\n" << endl;
            cout << "\n\t\t\t\t\t\t(1)\t(2)" << endl;
            cout << "\n\t\t\t\t\t\tYes  |  No" << endl;
            cout << "\nPress number of instruction:" << endl;
            cin >> exit;
            switch (exit)
            {
                case 1:
                cout << "\n\t\t\t\t\tThank you for using the App!";
                y=0;
                break;
                case 2:
                y=1;
                break;
                default:
                cout << "\n\t\t\t\tInputted number of instruction not assigned!\n\n\n" << endl;
            }
            break;
            default:
            cout << "\n\t\t\tInputted number of instruction not assigned!" << endl;
        }
    }
    if (z==1)
    {
    	
    	int i=0,q=0,result=0;
    	char choice;
	
    	
		do //purpose ani kay para maka loop ang customer balik diri up to 5 orders
        {
       		cout << "\n\n\t\t\t      Select Restaurants, Eateries, & Fast Food Chains:" << endl;
			cout << "\n\n\t\t\t               [1] Manila Foodshoppe";
			cout << "\n\n\t\t\t               [2] Jollibee";
			cout << "\n\n\t\t\t               [3] McDonald's";
			cout << "\n\n\t\t\t               [4] La Fortuna";
			cout << "\n\n\t\t\t               [5] Chowking";
			cout << "\n\n\t\t\t               [6] Shakey's";
			cout << "\n\n\t   Enter the Selected Number:";//butang diri ang mga food shops
			scanf(" %d",&i);
			
		switch(i)	
			
			{
			case 1: 
			printf("\n\tYou Choose Manila FoodShoppe");
			printf("\n\n\tFoods                                                    Price");
			printf("\n\n\t[1] CORN SOUP.............................................Php 160.");
			printf("\n\n\t[2] LOMI..................................................Php 165.");
			printf("\n\n\t[3] WANTOK SOUP...........................................Php 190.");
			printf("\n\n\t[4] BEEF STEAK............................................Php 235.");
			printf("\n\n\t[5] BEEF CURRY............................................Php 235.");
			printf("\n\tWhat do you want to buy? " );
			scanf("%d",&q);
			if(q==1)
			{
				printf("\n\tHow many CORN SOUP you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 160) + result;
				printf("\n\tThe Running Total is %d.",result);
				
			}
			
			else if(q==2)
			{
				printf("\n\tHow many LOMI you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 165) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			
			else if(q==3)
			{
				printf("\n\tHow many WANTOK SOUP you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 190) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			
			else if(q==4)
			{
				printf("\n\tHow many BEEF STEAK you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 235) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			
			else if(q==5)
			{
				printf("\n\tHow many BEEF CURRY you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 235) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else
			{
				printf("\n\tSorry We do not have that on our list.");
			}
			break;
			
			case 2: 
			printf("\n\tYou Choose Jollibee");
			printf("\n\n\tFoods                                                  Price");
			printf("\n\n\t[1] YUM BURGER VALUE MEAL................................Php 86.");
			printf("\n\n\t[2] YUM BURGER CHEESE VALUE MEAL.........................Php 96.");
			printf("\n\n\t[3] BACON CHEESE YUMBURGER MEAL..........................Php 110.");
			printf("\n\n\t[4] YUM BURGER CHEESE DELUXE MEAL........................Php 120.");
			printf("\n\n\t[5] BACON DELUXE CHEESE YUMBURGER MEAL...................Php 130.");
			printf("\n\tWhat do you want to buy? " );
			scanf("%d",&q);
			if(q==1)
			{
				printf("\n\tHow many YUM BURGER VALUE MEAL you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 86) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			
			else if(q==2)
			{
				printf("\n\tHow many YUM BURGER CHEESE VALUE MEAL you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 96) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
		
			else if(q==3)
			{
				printf("\n\tHow many BACON CHEESE YUMBURGER MEAL you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 110) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
		
			else if(q==4)
			{
				printf("\n\tHow many YUM BURGER CHEESE DELUXE MEAL you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 120) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
		
			else if(q==5)
			{
				printf("\n\tHow many BACON DELUXE CHEESE YUMBURGER MEAL you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 130) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else
			{
				printf("\n\tSorry We do not have that on our list.");
			}
			
			break;
			
			case 3: 
			printf("\n\tYou Choose McDonald's");
			printf("\n\n\tFoods                                                  Price");
			printf("\n\n\t[1] CHEESEBURGER (SMALL)................................Php 100.");
			printf("\n\n\t[2] CHEESEBURGER (MEDIUM)...............................Php 120.");
			printf("\n\n\t[3] BURGER MCDO (SMALL).................................Php 86.");
			printf("\n\n\t[4] BURGER MCDO (MEDIUM)................................Php 106.");
			printf("\n\n\t[5] CHESSY BURGER MCDO(SMALL)...........................Php 96.");
			printf("\n\tWhat do you want to buy? " );
			scanf("%d",&q);
			if(q==1)
			{
				printf("\n\tHow many CHEESEBURGER (SMALL) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 100) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			
			 
			else if(q==2)
			{
				printf("\n\tHow many CHEESEBURGER (MEDIUM) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 120) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
		
			else if(q==3)
			{
				printf("\n\tHow many BURGER MCDO (SMALL) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 86) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
		
			else if(q==4)
			{
				printf("\n\tHow many BURGER MCDO (MEDIUM) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 106) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
		
			else if(q=5)
			{
				printf("\n\tHow many CHESSY BURGER MCDO(SMALL) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 96) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else
			{
				printf("\n\tSorry We do not have that on our list.");
			}
			
			break;
			
			case 4: 
			printf("\n\tYou Choose La Fortuna");
			printf("\n\n\tFoods                                                  Price");
			printf("\n\n\t[1] BELGIUM PLAIN ( 4PCS )..............................Php 50.");
			printf("\n\n\t[2] BELGIUM UBE ( 4PCS )................................Php 70.");
			printf("\n\n\t[3] TIKOY WHITE.........................................Php 50.");
			printf("\n\n\t[4] PIANONO.............................................Php 50.");
			printf("\n\n\t[5] DICE HOPIA BIG......................................Php 50.");
			printf("\n\tWhat do you want to buy? " );
			scanf("%d",&q);
			if(q==1)
			{
				printf("\n\tHow many BELGIUM PLAIN ( 4PCS ) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 50) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==2)
			{
				printf("\n\tHow many BELGIUM UBE ( 4PCS ) you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 70) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==3)
			{
				printf("\n\tHow many TIKOY WHITE you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 50) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==4)
			{
				printf("\n\tHow many PIANONO you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 50) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==5)
			{
				printf("\n\tHow many DICE HOPIA BIG you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 50) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else
			{
				printf("\n\tSorry We do not have that on our list.");
			}
			
			break;
			
			case 5: 
			printf("\n\tYou Choose Chowking");
			printf("\n\n\tFoods                                                  Price");
			printf("\n\n\t[1] PORK CHAO FAN WITH TOPPING..........................Php 111.");
			printf("\n\n\t[2] PORK CHAO FAN.......................................Php 73.");
			printf("\n\n\t[3] BEEF CHAO FAN WITH TOPPING..........................Php 131.");
			printf("\n\n\t[4] BEEF CHAO FAN.......................................Php 100.");
			printf("\n\n\t[5] YANG CHOW CHAO FAN WITH TOPPING.....................Php 144.");
			printf("\n\tWhat do you want to buy? " );
			scanf("%d",&q);
			if(q==1)
			{
				printf("\n\tHow many PORK CHAO FAN WITH TOPPING you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 111 ) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==2)
			{
				printf("\n\tHow many PORK CHAO FAN you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 73) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==3)
			{
				printf("\n\tHow many BEEF CHAO FAN WITH TOPPING you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 131) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==4)
			{
				printf("\n\tHow many BEEF CHAO FAN you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 100) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==5)
			{
				printf("\n\tHow many YANG CHOW CHAO FAN WITH TOPPING you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 144) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else
			{
				printf("\n\tSorry We do not have that on our list.");
			}
			
			break;
			
			case 6: 
			printf("\n\tYou Choose Shakey's");
			printf("\n\n\tFoods                                                  Price");
			printf("\n\n\t[1] LOUSIANA SHRIMP PIZZA...............................Php 353.");
			printf("\n\n\t[2] SMOKED SALMON PIZZA.................................Php 353.");
			printf("\n\n\t[3] ANGUS BURGER PIZZA..................................Php 353.");
			printf("\n\n\t[4] SCALLOP PRIMO PIZZA.................................Php 353.");
			printf("\n\n\t[5] CHEESY CHICK'N PIZZA................................Php 353.");
			printf("\n\tWhat do you want to buy? " );
			scanf("%d",&q);
			if(q==1)
			{
				printf("\n\tHow many LOUSIANA SHRIMP PIZZA you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 353 ) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==2)
			{
				printf("\n\tHow many SMOKED SALMON PIZZA you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 353) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==3)
			{
				printf("\n\tHow many ANGUS BURGER PIZZA you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 353) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==4)
			{
				printf("\n\tHow many SCALLOP PRIMO PIZZA you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 353) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else if(q==5)
			{
				printf("\n\tHow many CHEESY CHICK'N PIZZA you would like to buy?\t" );
				scanf("%d",&q);
				result = (q * 353) + result;
				printf("\n\tThe Running Total is %d.",result);
			}
			else
			{
				printf("\n\tSorry We do not have that on our list.");
			}
			
			break;
			
				default:
				printf("\n\tSorry We do not have that on our list.");
				break;		
			}				

	//gamit ug switch case after makapili ug input ang customer
            order=6; //temp code para dili mag infinite loop
        }
        while (order<=5);
    }
return 0;
}

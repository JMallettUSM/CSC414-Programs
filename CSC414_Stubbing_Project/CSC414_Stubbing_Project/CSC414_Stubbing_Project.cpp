// CSC414_Stubbing_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Even though the point of this project is just to give an example of stubbing, I thought I may as well come up with a 
concept to frame the shell of a program around. As such, I'm going to pretend this code will be for a program
that imitates a restaurant user interface with the gimmick of having customizable meals. More details will be given with the 
menu options below*/

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    //Declare the variables needed for main()
    bool keepMenu = true; //flag variable to control menu loop
    bool checkInput = true; //Flag variable used to ensure user input is an integer
    int menuOption = 0; //int variable to hold user option choice
    string rawInput = "";


    //Greet the user
    cout << "Welcome to YUM, Your Unique Meal!" << endl;

    //This while loop keeps the user coming back to the option menu unless they choose to exit
    while (keepMenu == true)
    {
        menuOption = 0; //menuOption reset to 0 at the beginning of every loop
        checkInput = true; //checkInput is set to true at the top of every loop to ensure user input is valid

        //Display the option menu and prompt the user for input choice
        cout << endl << "Please choose from the following options by entering the associated number:" << endl;
        cout << "1. Display the 'Classic Creations' menu" << endl;
        cout << "2. Display the a la carte menu" << endl;
        cout << "3. Create a new meal" << endl;
        cout << "4. Roll the dice! (Create a new meal at random. Choices must be approved before being processed)" << endl;
        cout << "5. Display the newest user creations" << endl;
        cout << "6. Display the most popular meals of the last three months" << endl;
        cout << "7. Display the most popular meals of all time" << endl;
        cout << "8. Browse all user creations by popularity" << endl;
        cout << "9. Vote on new menu items" << endl;
        cout << "10. Place an order" << endl;
        cout << "11. Exit program" << endl;
        cout << "Your choice: ";

        //bring in the rw user input as a string
        cin >> rawInput;

        //this loop iterates through the user input, checking to make sure each character is a number
        for (int i = 0; i < rawInput.length(); i++)
        {
            //If this is triggered, one of the characters was a non-decimal, meaning the input is invalid
            if (!isdigit(rawInput[i]))
            {
                //Allows us to check if any non-decimal chars were found
                checkInput = false;
                break;
            }
        }

        //The input contained some non-decimal characters and needs to be rejects
        if (checkInput == false)
        {
            //clear cin and instructs the user to input a new command
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << endl << "User input contained non-decimal characters. Please try again" << endl;
        }

        //The input is nothing but numbers, so it can be processed and assigned to menuOption
        else
        {
            menuOption = stoi(rawInput);
        }
        
        //We now hit the switch statement that controls which activity we will do based on the user input
        switch (menuOption)
        {
            //Display "Classic Creations" menu, which will be stored in Classics.txt. These are the standard meals 
            //created by the restaurant and staff
            case 1 :
                cout << endl << "This option is currently under development" << endl;
                break;
            //Display the a la carte menu, which is stored in Carte.txt. These are the menu items that customers can build
            //their meals out of
            case 2:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Create a new custom meal. The user will make any number of choices from the drink, entree, side, and 
            //desert a la carte sections and then choose a meal ID number. The total price for all food choices will 
            //then be tallied and displayed, along with meal number and meal item choices
            case 3:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Create a new custom meal, with the food items chosen at random. The user chooses which menu sections to pull
            //items from, as well as the number of items to choose, and the system does the rest. The total price for all
            // food items will then be tallied and displayed, along with the meal number and meal item choices
            case 4:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Displays a list of the 50 newest custom meals, sorted by newest meal. This allows users to see the meal 
            //contents, price, and ID number, so they can place an order for their chosen meal
            case 5:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Displays a list of the 50 most popular meals of the last three months, sorted by popularity. This allows 
            //users to see the meal contents, price, and ID number, so they can place an order for their chosen meal
            case 6:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Displays a list of the 50 most popular meals of the all time, sorted by popularity. This allows users to see 
            //the meal contents, price, and ID number, so they can place an order for their chosen meal
            case 7:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Displays a list of all user creations, sorted by popularity. This allows users to see 
            //the meal contents, price, and ID number, so they can place an order for their chosen meal
            case 8:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Allows users to vote on menu items they would like to see added. A list of potential new items is displayed,
            //and the user inputs their choice for vote
            case 9:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Allows users to enter the number of the meal they want to order. At this point, they have either created a new
            //meal in the system and have its unique number, or they have the number of some other meal. The user enters the 
            //ID number of the meal they want to order. The entered meal then has its info displayed so the user can confirm
            case 10:
                cout << endl << "This option is currently under development" << endl;
                break;
            //Allows the user to exit from the loop containing the option menu
            case 11:
                cout << endl << "Now exiting program..." << endl;
                keepMenu = false;
                break;
            //default statement catches invalid integers, giving notice to the user before repeating the loop
            default:
                cout << endl << "Invalid user input. Please try again." << endl;
                break;
        }


    }
   
}



#include <iostream>
using namespace std;

// global variable

// variables for rooms
int TotalRooms = 0;
int RoomsA = 0;
int RoomsB = 0;
int RoomsC = 0;
int Srooms = 0;

//switch variable
int choice = 0;
int quantity = 0;

//variables for price
int TotalPrice = 0;
int A_price = 0;
int B_price = 0;
int C_price = 0;

//variables for sold rooms
int SroomsA = 0;
int SroomsB = 0;
int SroomsC = 0;

// user define function
void Output_menu()
{
    cout << "\n----------------------------------------------------------------\n";
    cout << "\n\t\t **Hotel Data**\n";
    cout << "Total number of rooms : " << TotalRooms << endl;
    cout << "\nNumber of A type rooms : " << RoomsA << "\t& prices : " << A_price << endl;
    cout << "Number of B type rooms : " << RoomsB << "\t& prices : " << B_price << endl;
    cout << "Number of C type rooms : " << RoomsC << "\t& prices : " << C_price << endl;
    cout << "\n----------------------------------------------------------------\n";


}

//user functions
void Input_menu()
{
    bool validInput = true ;
    do
    {
    cout << "\n----------------------------------------------------------------";
    cout << "\n\t\t **Input Hotel Data**\n";

    cout << "\nInput Total number of rooms that we have in our hotel : ";
    cin >> TotalRooms ;
    cout << "\nInput A type of rooms that we have in our hotel : ";
    cin >> RoomsA ;
    cout << "Enter price of this type : ";
    cin >> A_price ;
    cout << "\nInput B type of rooms that we have in our hotel : ";
    cin >> RoomsB ;
    cout << "Enter price of this type : ";
    cin >> B_price ;
    RoomsC = TotalRooms - (RoomsA + RoomsB) ;
    cout << "\nEnter price of C type Room : ";
    cin >> C_price ;

    if(TotalRooms == RoomsA + RoomsB + RoomsC && 
            TotalRooms > 0 && RoomsA >= 0 && RoomsB >= 0 && RoomsC >= 0 &&
            A_price > 0 && B_price > 0 && C_price > 0)
    {
        validInput = false ;
        cout << "\nData entered successfully." << endl;
    }
    else
    {
        cout << "\nError: you have made mistake in entring data." << endl;
        Output_menu();
        cout << "\n\nPlease ";
        cout << "Re-enter Room List"<< endl;
        
    }
    cout << "----------------------------------------------------------------\n";
    }while(validInput);

}

//user functions
void book_menu()
{
    cout << "\n----------------------------------------------------------------\n";
    cout << "\n\t\t **Book a room**\n";
    cout << "1. Book A type rooms\n";
    cout << "2. Book B type rooms\n";
    cout << "3. Book C type rooms\n";
    cout << "4. Update prices\n";
    cout << "5. Information Regarding Sales and Unbooked Rooms\n";
    cout << "6. Exit\n";
    cout << "\nEnter your choice : ";
    cin >> choice;
    cout << "\n----------------------------------------------------------------\n";

}

void PriceUpdate()
{
    int option = 0;

    update_option:
    cout << "\n\t\t **Update Prices**\n";
    cout << "1. Update A type room prices\n";
    cout << "2. Update B type room prices\n";
    cout << "3. Update C type room prices\n";
    cout << "\nEnter your choice : ";
    cin >> option;

    switch (option) 
    {
        case 1:
        {
            do {
                cout << "\nEnter the Price for Type A Rooms: ";
                cin >> A_price;
            } while (A_price < 0);
            break;
        }

        case 2:
        {
            do {
                cout << "\nEnter the Price for Type B Rooms: ";
                cin >> B_price;
            } while (B_price < 0);
            break;
        }

        case 3:
        {
            do {
                cout << "\nEnter the Price for Type C Rooms: ";
                cin >> C_price;
            } while (C_price < 0);
            break;
        }

        default:
        {
            cout << "\nInvalid choice, please enter a valid option.\n";
            goto update_option; 
        }
    }

    cout << "\n**Prices Updated Successfully**\n" << endl;
    Output_menu();
}


//main function
int main()
{


//variables for choice
int quantity = 0 ;

Input_menu();

Output_menu();

Error_choice:
buy_menu:
book_menu();

switch( choice )
{
    case 1:
        cout << "Enter number of room/rooms that customer  want  : ";
        cin >> quantity ;
        if (RoomsA - SroomsA >= quantity)
        {
            int total_price = 0;
            SroomsA += quantity;
            Srooms += quantity;
            TotalPrice += quantity * A_price;
            total_price += quantity * A_price;
            cout <<endl << "Total price for " << quantity << " rooms is : " << total_price << endl;
        }
        else
        {
            cout << "\nSorry, we don't have enough rooms available." << endl;
            cout << "We have " << RoomsA - SroomsA << " rooms available in this category." << endl;
        }
        break;

    case 2:
        cout << "Enter number of room/rooms that customer  want  : ";
        cin >> quantity ;
        if (RoomsB - SroomsB >= quantity)
        {
            int total_price = 0;
            SroomsB += quantity;
            Srooms += quantity;
            TotalPrice += quantity * B_price;
            total_price += quantity * B_price;
            cout << "Total price for " << quantity << " rooms is : " << total_price << endl;
        }
        else
        {
            cout << "\nSorry, we don't have enough rooms available." << endl;
            cout << "We have " << RoomsB - SroomsB << " rooms available in this category." << endl;
        }
        break;

    case 3:
        cout << "Enter number of room/rooms that customer  want  : ";
        cin >> quantity ;
        if (RoomsC - SroomsC >= quantity)
        {
            int total_price = 0;
            SroomsC += quantity;
            Srooms += quantity;
            TotalPrice += quantity * C_price;
            total_price += quantity * C_price;
            cout << "Total price for " << quantity << " rooms is : " << total_price << endl;
        }
        else
        {
            cout << "\nSorry, we don't have enough rooms available." << endl;
            cout << "We have " << RoomsC - SroomsC << " rooms available in this category." << endl;
        }
        break;

    case 4:
    PriceUpdate();
    break;

    case 5:
        cout << "\n\t\t **Sales and Unbooked Rooms**\n";
        cout << "Total number of rooms sold : " << TotalRooms - (RoomsA + RoomsB + RoomsC - Srooms) << endl;
        cout << "Unbooked rooms : " << RoomsA + RoomsB + RoomsC - Srooms << endl;
        cout << "Today's profit : " << TotalPrice ;
        break;

    case 6:
        cout << "\nExiting System...\n\n";
        exit(0);
        break;

    default:
        cout << "Invalid choice! Please try again." << endl;
        goto Error_choice;
        break;
}

goto buy_menu;

}
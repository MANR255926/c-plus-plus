#include <iostream>
using namespace std;

// global variable

int Qrooms = 0;
int Qrooms_choiceA = 0;
int Qrooms_choiceB = 0;
int Qrooms_choiceC = 0;
int Srooms = 0;

//switch variable
int choice = 0;
int quantity = 0;

//variables for price
int TotalPrice = 0;
int A_priceRooms = 0;
int B_priceRooms = 0;
int C_priceRooms = 0;

//varibles for sold rooms
int SroomsA = 0;
int SroomsB = 0;
int SroomsC = 0;


//user functions
void Input_menu()
{
    cout << "\n----------------------------------------------------------------";
    cout << "\n\t\t **Input Hotel Data**\n";

    Reenter://goto call

    cout << "\nInput Total number of rooms that we have in our hotel : ";
    cin >> Qrooms ;
    cout << "Input A type of rooms that we have in our hotel : ";
    cin >> Qrooms_choiceA ;
    cout << "\nEnter price of this type : ";
    cin >> A_priceRooms ;
    cout << "Input B type of rooms that we have in our hotel : ";
    cin >> Qrooms_choiceB ;
    cout << "\nEnter price of this type : ";
    cin >> B_priceRooms ;
    Qrooms_choiceC = Qrooms - (Qrooms_choiceA + Qrooms_choiceB) ;
    cout << "\nEnter price of this type : ";
    cin >> C_priceRooms ;

    if(Qrooms == Qrooms_choiceA+Qrooms_choiceB+Qrooms_choiceC)
    {

    }
    else
    {
        cout << "\nError: The total number of rooms does not match the sum of A, B, and C type rooms." << endl;
        cout << "Re-enter Room List"<< endl;

        goto Reenter;//goto jump statement
        
    }
    cout << "----------------------------------------------------------------\n";

}

//user functions
void Output_menu()
{
    cout << "\n----------------------------------------------------------------";
    cout << "\n\t\t **Hotel Data**\n";
    cout << "Total number of rooms : " << Qrooms << endl;
    cout << "Number of A type rooms : " << Qrooms_choiceA << endl;
    cout << "Number of B type rooms : " << Qrooms_choiceB << endl;
    cout << "Number of C type rooms : " << Qrooms_choiceC << endl;
    cout << "----------------------------------------------------------------\n";


}

//user functions
void book_menu()
{
    cout << "\n----------------------------------------------------------------";
    cout << "\n\t\t **Book a room**\n";
    cout << "1. Book A type rooms\n";
    cout << "2. Book B type rooms\n";
    cout << "3. Book C type rooms\n";
    cout << "4. Information Regarding Sales and Unbooked Rooms\n";
    cout << "5. Exit\n";
    cout << "\nEnter your choice : ";
    cin >> choice;
    cout << "----------------------------------------------------------------\n";

}

//main function
int main()
{


//variables for choice
int Srooms_choice = 0, Srooms_choiceA = 0, Srooms_choiceB = 0, Srooms_choiceC = 0, quantity = 0 ;

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
        if (Qrooms_choiceA - Srooms_choiceA >= quantity)
        {
            int total_price = 0;
            Srooms_choiceA += quantity;
            Srooms_choice += quantity;
            TotalPrice += quantity * A_priceRooms;
            total_price += quantity * A_priceRooms;
            cout <<endl << "Total price for " << quantity << " rooms is : " << total_price << endl;
        }
        else
        {
            cout << "\nSorry, we don't have enough rooms available." << endl;
            cout << "We have " << Qrooms_choiceA - Srooms_choice << " rooms available in this category." << endl;
        }
        break;

    case 2:
        cout << "Enter number of room/rooms that customer  want  : ";
        cin >> quantity ;
        if (Qrooms_choiceB - Srooms_choiceB >= quantity)
        {
            int total_price = 0;
            Srooms_choiceB += quantity;
            Srooms_choice += quantity;
            TotalPrice += quantity * B_priceRooms;
            total_price += quantity * B_priceRooms;
            cout << "Total price for " << quantity << " rooms is : " << total_price << endl;
        }
        else
        {
            cout << "\nSorry, we don't have enough rooms available." << endl;
            cout << "We have " << Qrooms_choiceB - Srooms_choiceB << " rooms available in this category." << endl;
        }
        break;

    case 3:
        cout << "Enter number of room/rooms that customer  want  : ";
        cin >> quantity ;
        if (Qrooms_choiceC - Srooms_choiceC >= quantity)
        {
            int total_price = 0;
            Srooms_choiceC += quantity;
            Srooms_choice += quantity;
            TotalPrice += quantity * C_priceRooms;
            total_price += quantity * C_priceRooms;
            cout << "Total price for " << quantity << " rooms is : " << total_price << endl;
        }
        else
        {
            cout << "\nSorry, we don't have enough rooms available." << endl;
            cout << "We have " << Qrooms_choiceC - Srooms_choiceC << " rooms available in this category." << endl;
        }
        break;

    case 4:
        cout << "\n\t\t **Sales and Unbooked Rooms**\n";
        cout << "Total number of rooms sold : " << Qrooms - (Qrooms_choiceA + Qrooms_choiceB + Qrooms_choiceC - Srooms_choice) << endl;
        cout << "Unbooked rooms : " << Qrooms_choiceA + Qrooms_choiceB + Qrooms_choiceC - Srooms_choice << endl;
        cout << "Today's profit : " << TotalPrice ;
        break;

    case 5:
        exit(0);
        break;

    default:
        cout << "Invalid choice! Please try again." << endl;
        goto Error_choice;
        break;
}

goto buy_menu;

}
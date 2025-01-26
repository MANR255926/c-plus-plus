#include <iostream>
#include <string>
using namespace std;

int RoomA = 0, RoomB = 0, RoomC = 0, TotalRooms = 0;
int PriceA = 0, PriceB = 0, PriceC = 0;
int* TypeA, * TypeB, * TypeC;

int AvailableA = 0, AvailableB = 0, AvailableC = 0;


void ViewRoomPrices()
{
    cout << "Type A Rooms: " << RoomA << "\t Price: " << PriceA << endl;
    cout << "Type B Rooms: " << RoomB << "\t Price: " << PriceB << endl;
    cout << "Type C Rooms: " << RoomC << "\t Price: " << PriceC << endl;
}
void RoomInitialization() {
    cout << "---------------------- Room Reservation System ----------------------\n";
    while (TotalRooms <= 0) {
        cout << "Enter the Number of Total Rooms your Hotel has:\t";
        cin >> TotalRooms;
        cout << "------------------------------------------------------------------" << endl;
    }
    while (RoomA <= 0 || RoomB <= 0 || (RoomA + RoomB) >= TotalRooms || PriceA <= 0 || PriceB <= 0 || PriceC <= 0) {
        cout << "Enter the Number of Type A Rooms your Hotel has:\t";
        cin >> RoomA;
        cout << "Enter the Price for Type A Rooms:\t";
        cin >> PriceA;

        cout << "Enter the Number of Type B Rooms your Hotel has:\t";
        cin >> RoomB;
        cout << "Enter the Price for Type B Rooms:\t";
        cin >> PriceB;

        RoomC = TotalRooms - (RoomA + RoomB);
        cout << "Enter the Price for Type C Rooms:\t";
        cin >> PriceC;

        cout << "-------------------------------------------------------------------" << endl;
    }
    ViewRoomPrices();
    cout << "-------------------------------------------------------------------" << endl;

    AvailableA = RoomA;
    AvailableB = RoomB;
    AvailableC = RoomC;

    TypeA = new int[RoomA]();
    TypeB = new int[RoomB]();
    TypeC = new int[RoomC]();
}

int ChooseType() {
    int option = 0;
    while (option <= 0 || option > 3) {
        cout << "1. Type A" << endl;
        cout << "2. Type B" << endl;
        cout << "3. Type C" << endl;
        cout << "Choose Room Type: ";
        cin >> option;
        cout << endl;
    }
    return option;
}

void PriceUpdate(int choice) {
    if (choice == 1) {
        do {
            cout << "Enter the Price for Type A Rooms:\t";
            cin >> PriceA;
        } while (PriceA <= 0);
    }
    else if (choice == 2) {
        do {
            cout << "Enter the Price for Type B Rooms:\t";
            cin >> PriceB;
        } while (PriceB <= 0);
    }
    else {
        do {
            cout << "Enter the Price for Type C Rooms:\t";
            cin >> PriceC;
        } while (PriceC <= 0);
    }
    cout << "Prices Update Succesfully" << endl;
    ViewRoomPrices();
}

string ReservedRoom(string choice, int index) {
    return choice + to_string(index);
}

void BookRoom(int choice, int room) {
    string output;
    int bill = 0;
    int counter = 0;
    if (choice == 1) {
        if (room <= AvailableA) {
            cout << "Room A Reservation Numbers:\t";
            for (int i = 0; i < RoomA; i++) {
                if (TypeA[i] == 0 && counter < room) {
                    TypeA[i] = 1;
                    AvailableA--;
                    output += ReservedRoom("A_", i) + "  ";
                    ++counter;
                }
            }
            bill = room * PriceA;
            cout << "Total Bill According To Reservations:\t" << bill << endl << endl;
        }
        else {
            output = "Sorry, the reservation can't be made. Available Type A Rooms: " + to_string(AvailableA);
        }
    }
    else if (choice == 2) {
        if (room <= AvailableB) {
            cout << "Room B Reservation Numbers:\t";
            for (int i = 0; i < RoomB; i++) {
                if (TypeB[i] == 0 && counter < room) {
                    TypeB[i] = 1;
                    AvailableB--;
                    output += ReservedRoom("B_", i) + "  ";
                    ++counter;
                }
            }
            bill = room * PriceB;
            cout << "Total Bill According To Reservations:\t" << bill << endl << endl;
        }
        else {
            output = "Sorry, the reservation can't be made. Available Type B Rooms: " + to_string(AvailableB);
        }
    }
    else {
        if (room <= AvailableC) {
            cout << "Room C Reservation Numbers:\t";
            for (int i = 0; i < RoomC; i++) {
                if (TypeC[i] == 0 && counter < room) {
                    TypeC[i] = 1;
                    AvailableC--;
                    output += ReservedRoom("C_", i) + "  ";
                    ++counter;
                }
            }
            bill = room * PriceC;
            cout << "Total Bill According To Reservations:\t" << bill << endl << endl;
        }
        else {
            output = "Sorry, the reservation can't be made. Available Type C Rooms: " + to_string(AvailableC);
        }
    }
    cout << output << endl;
}

void ViewReservations(int choice)
{
    if (choice == 1)
    {
        string output = "\0";
        cout << "Number of Rooms Reserved Of Type A " << RoomA - AvailableA << endl;
        cout << "List Of Reserved Rooms:\t";
        for (int i = 0; i < RoomA; i++)
        {
            if (TypeA[i] == 1)
            {
                output += ReservedRoom("A_" , i);
                output += " ";
            }
        }
        cout << output << endl;
    }
    else if (choice == 2)
    {
        string output = "\0";
        cout << "Number of Rooms Reserved Of Type B " << RoomB - AvailableB << endl;
        cout << "List Of Reserved Rooms:\t";
        for (int i = 0; i < RoomB; i++)
        {
            if (TypeB[i] == 1)
            {
                output += ReservedRoom("B_", i);
                output += " ";
            }
        }
        cout << output << endl;
    }
    else
    {
        string output = "\0";
        cout << "Number of Rooms Reserved Of Type C " << RoomC - AvailableC << endl;
        cout << "List Of Reserved Rooms:\t";
        for (int i = 0; i < RoomC; i++)
        {
            if (TypeC[i] == 1)
            {
                output += ReservedRoom("C_", i);
                output += " ";
            }
        }
        cout << output << endl;
    }
}


void CancelRoom(int choice, int index)
{
    if (choice == 1) {
        if (index < RoomA)
        {
            string output = ReservedRoom("A_", index);
            if (TypeA[index] == 1)
            {
                TypeA[index] = 0;
                AvailableA++;
                cout << "Room Number " << output << " Canceled Reservation" << endl;
            }
            else cout << "Room " << output << " Is Already Unreserved" << endl;
        }
        else cout << "The Room Number is not Valid, Please Enter A Correct One" << endl;
    }
    else if (choice == 2) {
        if (index < RoomB)
        {
            string output = ReservedRoom("B_", index);
            if (TypeB[index] == 1)
            {
                TypeB[index] = 0;
                AvailableB++;
                cout << "Room Number " << output << " Canceled Reservation" << endl;
            }
            else cout << "Room " << output << " Is Already Unreserved" << endl;
        }
        else cout << "The Room Number is not Valid, Please Enter A Correct One" << endl;
    }
    else {
        if (index < RoomC)
        {
            string output = ReservedRoom("C_", index);
            if (TypeC[index] == 1)
            {
                TypeC[index] = 0;
                AvailableC++;
                cout << "Room Number " << output << " Canceled Reservation" << endl;
            }
            else cout << "Room " << output << " Is Already Unreserved" << endl;
        }
        else cout << "The Room Number is not Valid, Please Enter A Correct One" << endl;
    }
}

int CalculateTotalPayment()
{
    int total = 0;
    for (int i = 0; i < RoomA; i++)
    {
        if (TypeA[i] == 1)
            total += PriceA;
    }
    for (int i = 0; i < RoomB; i++)
    {
        if (TypeB[i] == 1)
            total += PriceB;
    }
    for (int i = 0; i < RoomC; i++)
    {
        if (TypeC[i] == 1)
            total += PriceC;
    }
    return total;
}


void Menu1() {
    bool run = true;
    while (run) {
        int option = 0;
        while (option <= 0 || option > 6) {
            cout << "---------------------- Room Reservation System Menu ----------------------\n";
            cout << "1. View Room Prices" << endl;
            cout << "2. Update Room Prices" << endl;
            cout << "3. Book Room Reservations" << endl;
            cout << "4. Cancel Room Reservations" << endl;
            cout << "5. View Reservations" << endl;
            cout << "6. Total Payment Due" << endl;
            cout << "7. Exit" << endl;
            cout << "Choose an option: ";
            cin >> option;
            cout << "---------------------------------------------------------------------------" << endl;
        }
        switch (option) {
        case 1:
            ViewRoomPrices();
        case 2: {
            cout << "Choose the Room Type to update its price:" << endl;
            int choice = ChooseType();
            PriceUpdate(choice);
            break;
        }
        case 3: {
            cout << "Choose the Room Type to reserve:" << endl;
            int choice = ChooseType();
            cout << "How many rooms do you want to book? ";
            int roomNumber;
            cin >> roomNumber;
            BookRoom(choice, roomNumber);
            break;
        }
        case 4: {
            cout << "Choose the Room Type to Cancel Reservation:" << endl;
            int choice = ChooseType();
            cout << "Please enter The Room ID you want to Cancel Reservation For" << endl;
            int index = 0;
            cin >> index;
            CancelRoom(choice, index);
        }
        case 5: {
            cout << "Choose the Room Type to View Reservation:" << endl;
            int choice = ChooseType();
            ViewReservations(choice);
        }
        case 6: {
            int total = CalculateTotalPayment();
            cout << "Total Payment To be Collected:\t" << total << endl;
        }

        case 7:
            run = false;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    }
}

int main() {
    RoomInitialization();
    Menu1();
    
    return 0;
}

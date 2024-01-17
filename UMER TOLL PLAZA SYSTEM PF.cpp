#include <iostream>
#include <string>
using namespace std;

void tollPlaza(int &, int, int);
void printTransactionReceipt(int, int, int);

int main() {
    string username;
    cout << "Enter username: " << endl;
    cin >> username;

    string password;
    cout << "Enter password: " << endl;
    cin >> password;

    if (username == "UMER" && password == "123") {
        cout << "Login authenticated" << endl;

        int choice;
        do {
            int vehicleType;
            int plazaNumber = 5;
            int amount;

            cout << "............Welcome to motorway toll plaza............." << endl;
            cout << "Recite no#3************" << endl;
            cout << "Enter the vehicle type \n"
                 << "1: Car \n"
                 << "2: Jeep\n"
                 << "3: Truck \n"
                 << "4: Bus \n"
                 << "5: Van \n"
                 << endl;
            cin >> vehicleType;

            tollPlaza(amount, vehicleType, plazaNumber);
            printTransactionReceipt(amount, vehicleType, plazaNumber);

            cout << "Press -1 to end the program, or any other numeric key for another entry: ";
            cin >> choice;

        } while (choice != -1);
    } else {
        cout << "Invalid username or password" << endl;
    }

    return 0;
}

void tollPlaza(int &amount, int vehicleType, int plazaNumber) {
    switch (vehicleType) {
        case 1:
            amount = 500;
            break;

        case 2:
            amount = 600;
            break;

        case 3:
            amount = 800;
            break;

        case 4:
            amount = 700;
            break;

        case 5:
            amount = 400;
            break;

        default:
            cout << "Invalid vehicle type" << endl;
            amount = 0;
    }
}

void printTransactionReceipt(int amount, int vehicleType, int plazaNumber) {
    cout << "Transaction Receipt" << endl;
    cout << "-------------------" << endl;

    cout << "Vehicle Type: ";
    switch (vehicleType) {
        case 1:
            cout << "Car";
            break;
        case 2:
            cout << "Jeep";
            break;
        case 3:
            cout << "Truck";
            break;
        case 4:
            cout << "Bus";
            break;
        case 5:
            cout << "Van";
            break;
        default:
            cout << "Invalid";
    }
    cout << endl;
    cout << "Plaza Number: " << plazaNumber << endl;
    cout << "Toll Amount: $" << amount << endl;
    cout << "-------------------" << endl;
    cout << "Thank you for using our services!" << endl;
    cout << "Have a safe journey!" << endl;
    cout << "-------------------" << endl;
}


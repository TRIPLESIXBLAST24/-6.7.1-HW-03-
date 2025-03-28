#include <iostream>
#include <vector>
#include <windows.h>
#include "Smartphone.h"
#include "Television.h"
#include "SmartTV.h"

using namespace std;

int main() {
    vector<Electronics*> inventory;
    inventory.push_back(new Smartphone());
    inventory.push_back(new Television());
    inventory.push_back(new SmartTV());

    cout << "Welcome to the electronics store!" << endl;
    cout << "Available products:" << endl;
    for (int i = 0; i < inventory.size(); ++i) {
        cout << i + 1 << ". " << inventory[i]->getDescription() << endl;
    }

    cout << "Enter the product number for detailed information, or 0 to exit:  ";
    int choice;
    cin >> choice;
    while (choice != 0) {
        if (choice > 0 && choice <= inventory.size()) {
            cout << "Product: " << inventory[choice - 1]->getDescription() << endl;
        } else {
            cout << "Invalid product number. Please enter a valid number." << endl;
        }
        cout << "Enter the product number for detailed information, or 0 to exit: ";
        cin >> choice;
    }

    for (auto item : inventory) {
        delete item;
    }
    inventory.clear();

    cout << "Thank you for your purchase!" << endl;
    Sleep(3000);
    return 0;
} 
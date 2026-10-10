#include <iostream>
#include <fstream>
using namespace std;

const double DISCOUNT_RATE = 0.10; 
const double DISCOUNT_THRESHOLD = 100.00;

const double COFFEE_PRICE = 15.00;
const double SANDWICH_PRICE = 30.00;
const double SALAD_PRICE = 25.00;
const double JUICE_PRICE = 10.00;
const double MUFFIN_PRICE = 20.00;
const double PIZZA_PRICE = 35.00;
const double SOUP_PRICE = 18.00;
const double BURGER_PRICE = 40.00;

int main() {
    string name, surname;
    int numberOfItems;
    double totalBill = 0.0;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your surname: ";
    cin >> surname;

    cout << "How many items would you like to order (up to 8)? ";
    cin >> numberOfItems;

    if (numberOfItems > 8) {
        cout << "You can only order up to 8 items." << endl;
        return 1;
    }

    cout << "Cafeteria Menu:\n"
        << "1. Coffee - R15.00\n"
        << "2. Sandwich - R30.00\n"
        << "3. Salad - R25.00\n"
        << "4. Juice - R10.00\n"
        << "5. Muffin - R20.00\n"
        << "6. Pizza Slice - R35.00\n"
        << "7. Soup - R18.00\n"
        << "8. Burger - R40.00\n";

    for (int i = 0; i < numberOfItems; ++i) {
        int item;
        cout << "Select item " << (i + 1) << " (1-8): ";
        cin >> item;

        switch (item) {
        case 1: totalBill += COFFEE_PRICE; break;
        case 2: totalBill += SANDWICH_PRICE; break;
        case 3: totalBill += SALAD_PRICE; break;
        case 4: totalBill += JUICE_PRICE; break;
        case 5: totalBill += MUFFIN_PRICE; break;
        case 6: totalBill += PIZZA_PRICE; break;
        case 7: totalBill += SOUP_PRICE; break;
        case 8: totalBill += BURGER_PRICE; break;
        default:
            cout << "Invalid selection." << endl;
            --i; 
            break;
        }
    }

    double discount = 0.0;
    if (totalBill > DISCOUNT_THRESHOLD) {
        discount = totalBill * DISCOUNT_RATE;
    }

    double finalBill = totalBill - discount;

    cout << "Total Bill: R" << totalBill << endl;
    if (discount > 0.0) {
        cout << "Discount applied: R" << discount << endl;
    }
    else {
        cout << "No discount applied." << endl;
    }
    cout << "Final Bill: R" << finalBill << endl;

    ofstream outFile("CafeteriaBill.txt");
    if (outFile.is_open()) {
        outFile << "Name: " << name << "\nSurname: " << surname << "\nFinal Bill: R" << finalBill << endl;
        outFile.close();
        cout << "The bill has been written to CafeteriaBill.txt." << endl;
    }
    else {
        cout << "Error: Could not open file." << endl;
    }

    return 0;
}
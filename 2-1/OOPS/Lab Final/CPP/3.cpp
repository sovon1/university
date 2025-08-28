#include <iostream>

using namespace std;

const int MAX_ITEMS = 50; // Maximum number of items the list can hold
//ekhane chaile static constant use korte pari, but for simplicity, using a const int

class ShoppingList {
private:
    int itemCode[MAX_ITEMS];    // Array to store item codes 
    float itemPrice[MAX_ITEMS]; // Array to store item prices 
    int count;                  // To count the number of items in the list

public:
    // Constructor to initialize the item count
    ShoppingList() {
        count = 0;
    }

    void addItem();
    void deleteItem();
    void displayTotal();
};

// --- Member Function Definitions ---

// Adds an item to the list 
void ShoppingList::addItem() {
    if (count >= MAX_ITEMS) {
        cout << "List is full. Cannot add more items." << endl;
        return;
    }
    cout << "Enter item code: ";
    cin >> itemCode[count];

    cout << "Enter item price: ";
    cin >> itemPrice[count];

    count++; // Increment the item counter
    cout << "Item added." << endl;
}

// Deletes an item from the list 
void ShoppingList::deleteItem() {
    int codeToDelete;
    cout << "Enter item code to delete: ";
    cin >> codeToDelete;

    for (int i = 0; i < count; i++) {
        if (itemCode[i] == codeToDelete) {
            // To "delete", we can simply set the price to 0
            itemPrice[i] = 0;
            cout << "Item with code " << codeToDelete << " marked as deleted (price set to 0)." << endl;
            return;
        }
    }
    cout << "Item with code " << codeToDelete << " not found." << endl;
}

// Calculates and prints the total value of the order 
void ShoppingList::displayTotal() {
    float total = 0.0;
    for (int i = 0; i < count; i++) {
        total += itemPrice[i];
    }
    cout << "\n-------------------------" << endl;
    cout << "Total order value: " << total << endl;
    cout << "-------------------------" << endl;
}

// --- Main function to run the program ---
int main() {
    ShoppingList list;
    int choice;

    do {
        cout << "\n--- SHOPPING LIST MENU ---" << endl;
        cout << "1: Add Item" << endl;
        cout << "2: Delete Item" << endl;
        cout << "3: Display Total Value" << endl;
        cout << "4: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.addItem();
                break;
            case 2:
                list.deleteItem();
                break;
            case 3:
                list.displayTotal();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
 
    return 0;
}
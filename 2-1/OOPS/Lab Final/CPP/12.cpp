#include <iostream>
#include <string.h> // For strcpy, strlen
#include <iomanip>  // For setprecision

using namespace std;

class books {
private:
    char *author;
    char *title;
    char *publisher;
    float price;
    int stock;

public:
    // Constructor
    books() {
        // Initialize pointers to null to be safe
        author = nullptr;
        title = nullptr;
        publisher = nullptr;
        price = 0;
        stock = 0;
    }

    // Destructor to free dynamically allocated memory
    ~books() {
        delete[] author;
        delete[] title;
        delete[] publisher;
    }

    // Function to get data for a book
    void setData();

    // Function to check if a book matches a given title and author
    bool isMatch(const char* searchTitle, const char* searchAuthor);
    
    // Displays all details of a book
    void displayDetails();

    // Handles the sale of a book
    void sellBook();
};

// --- Member Function Implementations ---

void books::setData() {
    char tempBuffer[256];

    cout << "Enter author name: ";
    cin.ignore();
    cin.getline(tempBuffer, 256);
    // Allocate just enough memory and copy the string
    author = new char[strlen(tempBuffer) + 1];
    strcpy(author, tempBuffer);

    cout << "Enter title: ";
    cin.getline(tempBuffer, 256);
    title = new char[strlen(tempBuffer) + 1];
    strcpy(title, tempBuffer);

    cout << "Enter publisher: ";
    cin.getline(tempBuffer, 256);
    publisher = new char[strlen(tempBuffer) + 1];
    strcpy(publisher, tempBuffer);

    cout << "Enter price: ";
    cin >> price;
       
    cout << "Enter stock: ";
    cin >> stock;
}

bool books::isMatch(const char* searchTitle, const char* searchAuthor) {
    // strcmp returns 0 if strings are identical
    if (strcmp(searchTitle, this->title) == 0 && strcmp(searchAuthor, this->author) == 0) {
        return true;
    }
    return false;
}

void books::displayDetails() {
    cout << "\n--- Book Details ---" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Price: $" << fixed << setprecision(2) << price << endl;
    cout << "Stock Available: " << stock << endl;
    cout << "--------------------" << endl;
}

void books::sellBook() {
    int required_copies;
    cout << "Enter number of copies required: ";
    cin >> required_copies;

    if (required_copies <= stock) {
        float total_cost = required_copies * price;
        cout << "Copies are available." << endl;
        cout << "Total cost of the books: $" << fixed << setprecision(2) << total_cost << endl;
        stock -= required_copies; // Update stock
    } else {
        cout << "Required copies not in stock." << endl;
    }
}

// --- Main Program ---
int main() {
    int inventory_size = 2;
    books inventory[inventory_size];

    cout << "=== Enter Inventory Details ===" << endl;
    for (int i = 0; i < inventory_size; i++) {
        cout << "\n--- Enter details for Book " << i + 1 << " ---" << endl;
        inventory[i].setData();
    }

    char searchTitle[256];
    char searchAuthor[256];
    bool bookFound;

    cout << "\n=== Customer Transaction ===" << endl;
    cout << "Enter title of the required book: ";
    cin.ignore();
    cin.getline(searchTitle, 256);

    cout << "Enter author of the required book: ";
    cin.getline(searchAuthor, 256);

    bookFound = false;
    for (int i = 0; i < inventory_size; i++) {
        if (inventory[i].isMatch(searchTitle, searchAuthor)) {
            bookFound = true;
            inventory[i].displayDetails();
            inventory[i].sellBook();
            break; // Exit loop once book is found and processed
        }
    }

    if (!bookFound) {
        cout << "\nSorry, this book is not available in our inventory."<< endl;
    }

    return 0;
} 
// mujhko peena hai peene do , mujhko jeena hai jine do 
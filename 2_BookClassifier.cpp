/* Output:
Enter the number of books = 3

Enter the details for Book 1

Title = Science
Author = Oswal
Edition = 5
Price = 890
No of Copies = 150

Enter the details for Book 2

Title = Maths
Author = Selina
Edition = 7
Price = 180
No of Copies = 34

Enter the details for Book 3

Title = English
Author = Green
Edition = 34
Price = 120
No of Copies = 56

All Books:
Book 1: Title: Science, Author: Oswal, Edition: 5, Price: 890, Copies: 150
Book 2: Title: Maths, Author: Selina, Edition: 7, Price: 180, Copies: 34
Book 3: Title: English, Author: Green, Edition: 34, Price: 120, Copies: 56

Books having price less than Rs. 250:
Maths
English
*/

//Implementation

#include <iostream>
using namespace std;

class BookDetails {
public:
    string title, author;
    int edition, copies;
    float price;

    BookDetails() {
        title = "";
        author = "";
        edition = 0;
        copies = 0;
        price = 0;
    }

    void accept() {
        cout << "\nTitle = ";
        cin >> title;
        cout << "Author = ";
        cin >> author;
        cout << "Edition = ";
        cin >> edition;
        cout << "Price = ";
        cin >> price;
        cout << "No of Copies = ";
        cin >> copies;
    }

    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Edition: " << edition
             << ", Price: " << price
             << ", Copies: " << copies << endl;
    }
};

// Function to find books cheaper than Rs. 250
void find_books(BookDetails books[], int n) {
    cout << "\nBooks having price less than Rs. 250:\n";
    for (int i = 0; i < n; i++) {
        if (books[i].price < 250)
            cout << books[i].title << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of books = ";
    cin >> n;

    BookDetails ob[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter the details for Book " << i + 1 << endl;
        ob[i].accept();
    }

    cout << "\nAll Books:\n";
    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ": ";
        ob[i].display();
    }

    find_books(ob, n);

    return 0;
}
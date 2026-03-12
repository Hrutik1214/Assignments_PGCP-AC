#include<iostream>
using namespace std;

class Book{
    int bookID;
    char title[20];
    char author[20];
    int price;

public:
    void input(){
        cout << "Enter the Book ID: ";
        cin >> bookID;

        cout << "Enter the Title: ";
        cin >> title;

        cout << "Enter the Author: ";
        cin >> author;

        cout << "Enter the Price: ";
        cin >> price;
    }

    void display(){
        cout << "\nBook Details:\n";
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main(){
    int i, n;

    cout << "Enter number of books: ";
    cin >> n;

    Book b1[n];

    for(i = 0; i < n; i++){
        b1[i].input();
    }

    for(i = 0; i < n; i++){
        b1[i].display();
    }

    return 0;
}

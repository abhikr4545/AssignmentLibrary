#include<iostream>
using namespace std;
#include<string>
#include"Header.h"

class Book
{
private:
	string bookName;
	string authorName;
	int costOfBook;
public:
	void setDetails(string bookName, string authorName, int costOfBook)
	{
		this->bookName = bookName;
		this->authorName = authorName;
		this->costOfBook = costOfBook;
	}
	void displayDetails()
	{
		cout << "Book Name:" << " " << this->bookName << endl;
		cout << "Author Name:" << " " << this->authorName << endl;
		cout << "Cost Of Book:" << " " << this->costOfBook << endl;
	}
	

};

void share()
{
	Book b;
	string bname = getName("Enter book name");
	string aname = getAName("Enter Author Name");
	double price = getPrice("Enter price");
	b.setDetails(bname, aname, price);
}
void displayMenu()
{
	cout << "-------Welcome to library management program--------\n";
	cout << "Press 1: Enter new BookDetails\n";
	cout << "Press 2: Update Book Details\n";
	cout << "Press 3: Delete Book Details\n";
	cout << "Press 4: Display Details\n";
	cout << "Press 5: Exit\n";
}


void selectMenu()
{
	int n;
	Book b;
	do 
	{
		
		displayMenu();
		cin >> n;
		switch (n)
		{
		case 1:
			share();
			break;
		case 4:
			b.displayDetails();
		}
	} while (n != 5);
	
}



int main()
{
	
	selectMenu();
}

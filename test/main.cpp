#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
	ItemToPurchase item1; //Create item1 and item2 objects of the ItemToPurchase class. 
	ItemToPurchase item2;
	string name;
	int price;
	int quantity;
	/* The following code in maine instructs the user with outputs and uses getline for string input and cin for integer inputs.
	* This code seams bloated but im not really sure what i could do based on the instructions to consolodate it. 
	*/
	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name); // use getline to get two word inputs. I struggled for a bit with this but then remembered your announcement.
	item1.SetName(name);// all instances of item1 and item2 are calling functions from their class for which they are an object.

	cout << "Enter the item price:" << endl;
	cin >> price;
	item1.SetPrice(price);

	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	item1.SetQuantity(quantity);

	cin.ignore();

	cout << endl;
	cout << "Item 2" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name);
	item2.SetName(name);

	cout << "Enter the item price:" << endl;
	cin >> price;
	item2.SetPrice(price);

	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	item2.SetQuantity(quantity);

	//takes the input from the user and maths to get the total cost for both items and then outputs.
	cout << endl;
	cout << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity() * item1.GetPrice() << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity() * item2.GetPrice() << endl;
	cout << endl;
	cout << "Total: $" << (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice()) << endl;
	return 0;
}
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Defining the functions from ItemToPurchase class in the header file. 

void ItemToPurchase::SetName(string name) {
	itemName = name;
}
string ItemToPurchase::GetName() const {// using const because, as a getter, the function does not change anything.
	return itemName;
}
void ItemToPurchase::SetPrice(double price) {
	itemPrice = price;
}
double ItemToPurchase::GetPrice() const {
	return itemPrice;
}
void ItemToPurchase::SetQuantity(int quantity) {
	itemQuantity = quantity;
}
int ItemToPurchase::GetQuantity() const {
	return itemQuantity;
}
#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <iomanip>
#include <string>
using namespace std;

class ItemToPurchase {
public:
	void SetName(string name);
	string GetName() const;
	void SetPrice(double price);
	double GetPrice() const;
	void SetQuantity(int quantity);
	int GetQuantity() const;
private:
	string itemName = "none";
	int itemPrice = 0;
	int itemQuantity = 0;
};

#endif
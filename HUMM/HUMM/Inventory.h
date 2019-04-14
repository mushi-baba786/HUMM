#pragma once
#include <iostream>
#include "Category.h"
#include "Product.h"

using namespace std;

class Inventory {

public:

	Inventory();

	// Further mod after gui creation::WIP
	void addProduct(int id, string name, string category, float cost, float price, int qty) {
		prodLs[++index] = new Product(id, name, category, cost, price, qty);
	}

	void removeProduct(int id)	{

		for (int i = 0; i <= index; i++)	{

			if (prodLs[i]->getId() == id)	{

				for (int j = i; j <= index; j++)	{
					
					prodLs[i] = prodLs[i + 1];
				}
			}

			// This will remove the last product in array not the one we removed...
			delete prodLs[index--];
		}
	}

	~Inventory();

private:

	// Dynamic Allocation::WIP
	Product *prodLs[1000];
	int index;

};
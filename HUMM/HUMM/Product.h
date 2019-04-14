#pragma once
#include <iostream>

using namespace std;

class Product	{

public:
	
	// ## NOTE: No defualt constructor in the end ##
	Product();

	Product(int id, string name, string category, float cost, float price, int qty)	{
		this->id = id;
		this->name = name;
		//this->category = category;
		this->cost = cost;
		this->price = price;
		this->qty = qty;
	}

	int getId() {

		return this->id;
	}

	// Later implementations
	void addItem() {
	}

private:
	
	string name;
	int id;
	int qty;
	//Category category;
	float cost;
	float price;

};
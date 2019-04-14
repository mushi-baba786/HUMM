#pragma once
#include "Inventory.h"

using namespace std;

class Order : public Inventory	{
	public:
	
		Order();
	
		float get_orderprice() const
		{
			return totalcost;
		}
		void ConfirmOrder()
		{
			//TO BE SCRIPTED LATER
		}

	private:

		float totalcost;
		unsigned int customer_code;
};
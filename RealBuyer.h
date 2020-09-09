#pragma once
#include<iostream>
#include<string>
#include<list>
#include "Product.h"
#include"Buyer.h"
using namespace std;

class RealBuyer : public Buyer
{
private:
	string name;
	int cash;
	list < Cryptocurrency* > myCurrencies;

public:
	RealBuyer(string pName, int pCash) : name(pName), cash(pCash) { }

	void AddCurrency(Cryptocurrency* curr)
	{
		myCurrencies.push_back(curr);
	}

	Cryptocurrency* GetProduct()const
	{
		for (auto it = myCurrencies.begin(); it != myCurrencies.end(); it++)
		{
			return (*it);
		}
	}

	void SetProduct(Cryptocurrency* pProduct)
	{
		for (auto it = myCurrencies.begin(); it != myCurrencies.end(); it++)
		{
			if ((*it)->GetName() == pProduct->GetName())
			{
				(*it)->SetName(pProduct->GetName());
				(*it)->SetPrice(pProduct->GetPrice());
			}
		}
	}

	void Update(Cryptocurrency* pProduct)
	{
		for (auto it = myCurrencies.begin(); it != myCurrencies.end(); it++)
		{
			if ((*it)->GetName() == pProduct->GetName())
			{
				if((*it)->GetPrice() == (*it)->GetSellCurrency() )
				
				cash += (*it)->GetPrice() * (*it)->GetNumberCtyptoCurrency();

				else if (pProduct->GetPrice() == (*it)->GetByCurrency() && ((*it)->GetPrice() * (*it)->GetNumberCtyptoCurrency()) > cash)
				{
					cash -= (*it)->GetPrice() * (*it)->GetNumberCtyptoCurrency();
				}
			}
		}
	}

	void ShowCurrency()const
	{
		for (auto it = myCurrencies.begin(); it != myCurrencies.end(); it++)
		{
			cout << (*it)->GetName();
		}
	}

};


#pragma once
#include<iostream>
#include<string>
#include<list>
#include<ctime>
#include "Product.h"
#include"RealBuyer.h"
#include <chrono>
#include <thread>
using namespace std;

class Exchange
{
private:
	list < Cryptocurrency* > allCurrencies;
	list< Buyer*> realBuyers;
public:

	void AddCurrency(Cryptocurrency* curr)
	{
		allCurrencies.push_back(curr);
	}

	void Detach(Cryptocurrency* curr)
	{
		for (auto it = allCurrencies.begin(); it != allCurrencies.end(); it++)
		{
			if ((*it)->GetName() == curr->GetName())
			{
				allCurrencies.erase(it);
				return;
			}
		}
	}

	void Attach(Buyer* pBuyer)
	{
		realBuyers.push_back(pBuyer);
	}

	void Datach(Buyer* pBuyer)
	{
		for (auto it = realBuyers.begin(); it != realBuyers.end(); it++)
		{
			if (*it == pBuyer)
			{
				realBuyers.erase(it);
				return;
			}
		}
	}

	void Notifu(Cryptocurrency* pProduct)
	{
		for (auto it = realBuyers.begin(); it != realBuyers.end(); it++)
		{
			(*it)->Update(pProduct);
		}
	}

	void PriceChange()
	{
		srand(time(0));
		for (auto it = allCurrencies.begin(); it != allCurrencies.end(); it++)
		{
			int indexCurrent = -10 + rand()% 10;
			(*it)->SetPrice((*it)->GetPrice()+ indexCurrent);
			Notifu(*it);
			this_thread::sleep_for(0.999s);
		}
	}

};

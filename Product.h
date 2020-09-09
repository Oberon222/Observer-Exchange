#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;

class Cryptocurrency
{
private:
	string name;
	int price;
	int sellCurrency;
	int byCurrency;
	int numberCryptoCurrency;

public:
	Cryptocurrency(string pName, int pPrice) : name(pName), price(pPrice) { }

	~Cryptocurrency() { }

	string GetName()const
	{
		return name;
	}

	int GetPrice()const
	{
		return price;
	}

	void SetPrice(int pPrice)
	{
		if (price != pPrice)
		{
			price = pPrice;
		}
	}

	void SetSellCurrency(int pSellCurrency)
	{
		sellCurrency = pSellCurrency;
	}

	int GetSellCurrency()
	{
		return sellCurrency;
	}

	void SetByCurrency(int pByCurrency)
	{
		byCurrency = pByCurrency;
	}

	int GetByCurrency()
	{
		return byCurrency;
	}

	void SetName(string pName)
	{
		if (name != pName)
		{
			name = pName;
		}
	}

	void SetNumberCtyptoCurrency(int pNumberCryptoCurrency)
	{
		numberCryptoCurrency = pNumberCryptoCurrency;
	}

	int GetNumberCtyptoCurrency()
	{
		return numberCryptoCurrency;
	}
};
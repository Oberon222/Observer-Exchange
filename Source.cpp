#include<iostream>
#include<string>
#include<list>
#include"Product.h"
#include"Exchange.h"
#include"RealBuyer.h"

using namespace std;

int main()
{
	Cryptocurrency* bitcoin = new Cryptocurrency("bitcoin",10459);
	Cryptocurrency* ethereum = new Cryptocurrency("ethereum", 394);
	Cryptocurrency* tether = new Cryptocurrency("tether", 140);
	Cryptocurrency* litecoin = new Cryptocurrency("litecoin",49);
	Cryptocurrency* bitcoinCash = new Cryptocurrency("bitcoinCash",232);

	RealBuyer* vova = new RealBuyer("Vova", 10000);
	RealBuyer* vasia = new RealBuyer("Vasia", 15000);
	RealBuyer* dima = new RealBuyer("Dima", 20000);
	vova->AddCurrency(bitcoin);
	vova->AddCurrency(tether);
	vova->ShowCurrency();
	

	system("pause");
	return 0;
}
#pragma once
#include<iostream>
#include<string>
#include<list>
#include "Product.h"

using namespace std;

class Buyer
{
public:
	virtual void Update(Cryptocurrency* cr) = 0;
};

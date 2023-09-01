#include "Stringg.h"
#include <iostream>
using namespace std;

Stringg::Stringg()
{
	str = new char[80];
	this->size = 80;
	usedsize = 0;
	cin >> str;
	usedsizer();
}

Stringg::Stringg(int size)
{
	str = new char[size + 1];
	this->size = size;
	usedsize = 0;
	cin >> str;
	usedsizer();
}

Stringg::Stringg(char* str, int size)
{
	this->size = size;
	this->str = str;
	usedsizer();
}

Stringg::Stringg(Stringg* str)
{
	this->str = str->GetStr();
	this->size = str->GetSize();
	this->usedsize = str->GetUsedSize();
}

int Stringg::GetUsedSize()
{
	return usedsize;
}

char* Stringg::GetStr()
{
	return str;
}

void Stringg::usedsizer()
{
	int i = -1;
	do
	{
		i++;
		usedsize++;
	} while (str[i] != '\0');
}

void Stringg::Print()
{
	cout << str;
}

int Stringg::GetSize()
{
	return size;
}



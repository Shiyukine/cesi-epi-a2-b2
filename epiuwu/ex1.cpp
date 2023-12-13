#include "ex1.h"

CLa::CLa() : nb1(0), nb2(0)
{
}

CLa::CLa(int nb1, int nb2)
{
	this->nb1 = nb1;
	this->nb2 = nb2;
}

int CLa::getNb1()
{
	return nb1;
}

int CLa::getNb2()
{
	return nb2;
}

void CLa::setNb1(int n)
{
	nb1 = n;
}

void CLa::setNb2(int n)
{
	nb2 = n;
}

int CLa::somme()
{
	return getNb1() + getNb2();
}
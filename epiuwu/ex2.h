#pragma once

#include <iostream>

using namespace std;

class A
{
public:
	virtual void afficher() = 0;
};

class B : public A
{
public:
	void afficher() override;
};

class C : public A
{
public:
	void afficher() override;
};
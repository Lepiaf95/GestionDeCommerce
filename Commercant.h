#include <iostream>
#include <string>
#include <chrono>
#include <windows.h>
#include <vector>

using namespace std;


class Commercant
{
private:
	int m_coliSold;

public:
	Commercant();
	int getColiSold();
	void setColiSold(int coli);
	virtual ~Commercant();
};

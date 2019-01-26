#include "Commercant.h"

Commercant::Commercant()
{
	m_coliSold = 0;
}


int Commercant::getColiSold()
{
	return m_coliSold;
}

void Commercant::setColiSold(int coli)
{
	m_coliSold += coli;
	cout << "total coli vendu : " << m_coliSold << endl;
}


Commercant::~Commercant()
{

}

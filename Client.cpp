#include "Client.h"
#include "Commercant.h"

Client::Client(int id, int duree) : m_id(id), m_duree(duree)
{
	m_coliBuy = 0;
	srand(time(NULL));
	buy();
}

int Client::getColis()
{
	return m_colis;
}

int Client::getId()
{
	return m_id;
}

int Client::getColiBuy()
{
	return m_coliBuy;
}

void Client::setColiBuy(int coli)
{
	m_coliBuy += coli;
}

void Client::buy()
{
	for (auto runUntil = chrono::system_clock::now() + chrono::seconds(5);
		chrono::system_clock::now() < runUntil;)
	{
		m_colis = rand() % 100;
		Sleep(m_duree);
		cout << "Client " << getId() << " has buy " << getColis() << " Computers." << endl;
		setColiBuy(m_colis);
	}
}

thread Client::buyColi()
{
	return thread([=] { 
		buy(); 
	});
}

void Client::total()
{
	Commercant com;
	com.setColiSold(getColiBuy());
}

Client::~Client()
{

}

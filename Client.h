#include <iostream>
#include <string>
#include <chrono>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <thread>

using namespace std;

class Commercant;
class Client
{
private:
	int m_colis;
	int m_id;
	int m_duree;
	int m_coliBuy;

public:
	Client(int id, int duree);
	int getColis();
	int getId();
	int getColiBuy();
	void setColiBuy(int coli);
	void buy();
	thread buyColi();
	void total();
	virtual ~Client();
};

#include "Play.h"

Play::Play()
{
	int total;
	cout << "Hello World!\n";
	Client *client1 = new Client(1, 3000);
	Client *client2 = new Client(2, 2000);
	thread t1 = client1->buyColi();
	thread t2 = client2->buyColi();
	t1.join();
	t2.join();
	client1->total();
	client2->total();
	cout << "Bye Bye World!\n";
}

Play::~Play()
{

}

#include <iostream>
using namespace std;
#include "ServiceLocator.cpp"

int main()
{
	AppSound *audio = new AppSound();
	Locator::provide(audioclip);



	return 0;
}
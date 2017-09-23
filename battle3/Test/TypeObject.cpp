using namespace std;
#include <iostream>


class Flavor { //Breed
public:
	Flavor(int size, string name) {
		this->size = size;
		this->name = name;
	}

	int getSize() { return size; }
	string getName() { return name; }
	void addScoop() { size += 1; }
	void dropScoop() { size -= 1; if (size < 0) size = 0; }

private:
	int size; // Starting size
	string name;
};


class IceCream { //Monster
public:
	IceCream(Flavor& flavor) :
		size(flavor.getSize()),
		flavor(flavor) {}

	int getSize() //return the current size
	{
		return flavor.getSize();
	}
	string getName() //kinda like setSize+1
	{
		return flavor.getName();
	}
	void addScoop() //setSize(+1)
	{
		return flavor.addScoop();
	}
	void dropScoop() //setSize(-1)
	{
		return flavor.dropScoop();
	}
private:
	int size; // Current size
	Flavor& flavor;
};

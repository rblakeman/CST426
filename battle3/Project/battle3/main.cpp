using namespace std;
#include <iostream>
#include <string>
#include "TypeObject.cpp"

int main() {
	Flavor* chocolate = new Flavor(1, "Chocolate");
	IceCream* icecream1 = new IceCream(*chocolate);
	cout << "Created new ice cream instance for the flavor: " << icecream1->getName() << endl;
	cout << "Current size of Chocolate IceCream: " << icecream1->getSize() << endl;
	cout << endl;

	Flavor* vanilla = new Flavor(1, "Vanilla");
	IceCream* icecream2 = new IceCream(*vanilla);
	cout << "Created new ice cream instance for the flavor: " << icecream2->getName() << endl;
	cout << "Current size of Vanilla IceCream: " << icecream2->getSize() << endl;
	cout << endl;

	icecream1->addScoop();
	cout << "Added a scoop of chocolate because its the best" << endl;
	icecream2->dropScoop();
	cout << "'Accidentally' dropped your scoop of Vanilla because you remember you're on a diet ;-)" << endl;
	cout << "Current size of Chocolate IceCream: " << icecream1->getSize() << endl;
	cout << "Current size of Vanilla IceCream: " << icecream2->getSize() << endl;
	cout << endl;

	int delay = 1;
	cin >> delay;
	return 0;
}
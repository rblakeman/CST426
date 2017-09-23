using namespace std;
#include <iostream>
#include <string>
#include "Framebuffer.cpp"

int main() {
	
	Framebuffer current;
	Framebuffer next;
	current.clear();
	next.clear();

	char nextchar = '~';
	bool cycle = true;
	
	do {
		cout << "'Always read from CURRENT buffer and write to NEXT buffer' -textbook" << endl;
		
		cout << "CURRENT Buffer:" << endl;
		current.render();
		cout << "NEXT Buffer:" << endl;
		next.render();

		cout << "Enter new char to fill NEXT buffer with: ";
		cin >> nextchar;
		cout << endl; //spacing

		cout << "--Filling next buffer with new values!!--" << endl;
		next.fillbuffer(nextchar);

		cout << "--Setting CURRENT buffer from NEXT buffer, clearing NEXT buffer for next input!!--" << endl;
		current = next;
		next.clear();

		cout << endl; //spacing
	} while (cycle);

	return 0;
}
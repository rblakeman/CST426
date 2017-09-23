using namespace std;
#include <iostream>

class Framebuffer
{
public:
	Framebuffer() {
		clear();
	}

	//Empty Framebuffer with ~'s
	void clear() {
		for (int i = 0; i < WIDTH; i++) { //height
			for (int j = 0; j < HEIGHT; j++) { //width
				pixels[j][i] = EMPTY;
			}
		}
	}

	//Insert value into a specific location in the buffer
	void draw(int x, int y, int color)
	{
		pixels[x][y] = color;
	}

	//Fill entire buffer with same value (char)
	void fillbuffer(char XO)
	{
		for (int i = 0; i < HEIGHT; i++) { //height
			for (int j = 0; j < WIDTH; j++) { //width	
				draw(i, j, XO);
			}
		}
	}

	//Display buffer to screen
	void render()
	{
		for (int i = 0; i < HEIGHT; i++) { //height
			for (int j = 0; j < WIDTH; j++) { //width	
				cout << pixels[i][j];
			}
			cout << endl;
		}
	}

	//Getter for buffer array
	const char* getPixels()
	{
		return *pixels;
	}

private:
	static const int WIDTH = 30;
	static const int HEIGHT = 11;
	
	static const char EMPTY = '~';

	char pixels[WIDTH][HEIGHT];
};
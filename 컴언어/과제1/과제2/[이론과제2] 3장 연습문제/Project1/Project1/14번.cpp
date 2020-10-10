#include <iostream>
using namespace std;

class TV {
	int channels;
	int colors;
public:
	TV();
	TV(int a, int b);
	void setChannels(int c) { channels = c; }
	void setColors(int c) { colors = c; }
};

TV::TV() {
	channels = 256;
}

TV::TV(int a, int b) {
	channels = a; colors = b;
}

int main() {
	TV LG;
	LG.setChannels(200);
	LG.setColors(60000);
	TV Samsung(100, 50000);
}
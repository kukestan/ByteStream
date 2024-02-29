#include <iostream>
#include "ByteStream.h"
using namespace std;

int main(int argc, char** argv) {
	ByteStream stream(50);
	unsigned char buf[50];
	unsigned int length;
	char str[50];
	
	stream << "Hello world";
	length = stream.getBuf(buf);
	cout << buf << endl;
	cout << "Length: " << length << endl;
	for (unsigned int i = 0; i < length; i++)
	{
		cout << i << " " << buf[i] << endl;
	}
	stream >> str;
	cout << str << endl;
	cin.get();
	return 0;
}

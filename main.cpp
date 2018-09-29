#include <iostream>
#include "LibVersion.h"

using namespace std;

int main( int argc, char const *argv[] )
{
	cout << "build " << GetVersion() << endl;
	cout << "Hello, World!" << endl;
	return 0;
}
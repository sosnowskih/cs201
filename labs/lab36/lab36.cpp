#include <iostream>
using std::cout;
using std::endl;


const int RED = 1;
const int BLUE = 2;
const int YELLOW = 4;


void color(int comp)
{
	switch (comp) {
	case RED:
		cout << "red";
		break;
	case BLUE: 
		cout << "blue";
		break;
	case RED | BLUE: 
		cout << "purple";
		break;
	case YELLOW: 
		cout << "yellow";
		break;
	case RED | YELLOW: 
		cout << "orange";
		break;
	case BLUE| YELLOW: 
		cout << "green";
		break;
	case RED | BLUE | YELLOW:
		cout << "black";
		break;
	default: 
		cout << "white";
		break;
	}
}


int main()
{
	cout << "Color 1 = ";
	color(RED);
	cout << endl;

	cout << "Color 2 = ";
	color(RED | BLUE);
	cout << endl;

	cout << "Color 3 = ";
	color(BLUE | YELLOW);
	cout << endl;

	cout << "Color 4 = ";
	color(RED | BLUE | YELLOW);
	cout << endl;

	cout << "Color 5 = ";
	color(0);
	cout << endl;

	double dtest = 0;
	cout << "\nThe size of a double is " << sizeof(dtest) << " bytes." << endl;


	return 0;
}
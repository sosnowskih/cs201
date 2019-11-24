#include <iostream>
#include <string>

using std::string;


class Car {
public:
	void setYear(int year) {
		_year = year;
	}
	int getYear() {
		return _year;
	}
	void setName(string name) {
		_name = name;
	}
	string getName() {
		return _name;
	}
	string toString() {
		return "(" + std::to_string(getYear()) + " " + getName() + ")";
	}
private:
	int _year;
	string _name;
};


int main()
{
	Car c1;
	c1.setYear(2001);
	c1.setName("Mazda");
	std::cout << c1.toString() << std::endl;

	Car c2;
	c2.setYear(2015);
	c2.setName("Nissan");
	std::cout << c2.toString() << std::endl;

	Car c3 = c1;
	std::cout << c3.toString() << std::endl;

	return 0;
}
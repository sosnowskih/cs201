#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

class Environment {
public:
	//constructors
	//Environment() : _temp{ 65 }, _heater{ false }{}

	//Environment(int t) :
	//	_temp{ t }{}


	//member functions
	void iteration();

	int getTemp();

	void setTemp(int te);

	void setHeater(bool he);


//data members
private:
	int _temp = 65;
	bool _heater = false;

};

#endif
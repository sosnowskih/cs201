#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

class Environment {
public:
	//constructors
	Environment() : _temp{ 60 }, _heater{ false }{}

	Environment(int t, bool h) :
		_temp{ t }, _heater{ h }{}


	//member functions
	void iteration();

	int getTemp();

	void setTemp(int t);

	void setHeater(bool h);


//data members
private:
	int _temp;
	bool _heater;

};

#endif
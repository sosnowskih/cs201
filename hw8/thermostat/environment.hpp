#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

class Environment {
public:
	//constructor
	Environment(int t, bool h) :
		_temp{ t }, _heater{ h }{}

	//member functions
	void iteration();

	int getTemp();

	void setTemp(int t);

	void setHeater(bool h);


//data members
private:
	int _temp = 0;
	bool _heater = false;

};

#endif
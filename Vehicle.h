#pragma once
#include<string>
using namespace std;
#include "Engine.h"
class Vehicle {
protected:
	int _id;
	string _name;
	string _model;
	string _vendor;
	Engine _engine;
	
public:
	Vehicle() : _id(0), _model(""), _vendor(""), _engine() {}

	Vehicle(int id, const string model, const string vendor,const Engine engine)
	{
		_id = id;
		_model = model;
		_vendor = vendor;
		_engine = engine;
	}

	void show() const {
		cout << endl;
		cout << "Vehicle ID: " << _id << "\n";
		cout << "Model: " << _model << "\n";
		cout << "Vendor: " << _vendor << "\n";
		_engine.show();
		cout << endl;
	}

};


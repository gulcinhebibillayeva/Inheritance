#pragma once
class Engine {
protected:
	int _engine_no;
	string _company;
	float  _volume;

public:
	Engine() : _engine_no(0), _company("Unknown"), _volume(0.0f) {}
	Engine(int engine_no, string company, float volume) {
		_engine_no = engine_no;
		_company = company;
		_volume = volume;
	}
	int getEngineNo() const{
		return _engine_no;
	}
	float getVolume() const {
		return _volume;
	}
	void show() const {
		cout << endl;
		cout << "Engine number: " << _engine_no<<endl;
		cout << "Company: " << _company<<endl;
		cout << "Volume: " << _volume<<endl;
		cout << endl;
	}
};

#pragma once
class Airplane :public Vehicle {
	int _PassengerCapacity;
public:
	Airplane():Vehicle(0, "", "", Engine()), _PassengerCapacity(false){}
	Airplane(int id,string model,string vendor,Engine engine,int PassengerCapacity)
		: Vehicle(id, model, vendor, engine),_PassengerCapacity(PassengerCapacity){}

	void show() const {
		cout << "\n````````````````````Airplane`````````````````````````````"<<endl;
		cout << "Id:" << _id<<endl;
		cout << "Model: " << _model<<endl;
		cout << "Vendor" << _vendor << endl;
		cout << "Engine number: " << _engine.getEngineNo()<<endl;
		cout << "Volume: " << _engine.getVolume()<<endl;
		cout << "_PassengerCapacity: " << _PassengerCapacity<<endl;
		cout << "``````````````````````````````````````````````````````" << endl;
	}
		
};
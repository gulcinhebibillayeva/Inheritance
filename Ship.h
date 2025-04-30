#pragma once
class Ship :public Vehicle {
	bool _hasSail;
public:
	Ship() : Vehicle(0, "", "", Engine()), _hasSail(false) {}
	Ship(int id, string model, string vendor, Engine engine,bool hasSail):Vehicle(id,model,vendor,engine),_hasSail(hasSail){

	}

	void show() const {
		cout <<"\n````````````````````Ship`````````````````````````````"<<endl;
		cout << "Id:" << _id << endl;
		cout << "Model: " << _model << endl;
		cout << "Vendor:" << _vendor << endl;
		cout << "Engine number: " << _engine.getEngineNo() << endl;
		cout << "Volume: " << _engine.getVolume() << endl;
		cout << "Has Sail: " << (_hasSail ? "Yes" : "No") << endl;
		cout << "``````````````````````````````````````````````````````"<<endl;
}
};

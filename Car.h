#pragma once
class Car:public Vehicle {
private:
	bool _hasSpoiler;
public:
	Car() : Vehicle(0, "", "", Engine()), _hasSpoiler(false) {}
	Car(int id,const string model, const string vendor, const Engine engine, bool hasSpoiler)
        : Vehicle(id,model, vendor, engine), _hasSpoiler(hasSpoiler) {}
	void show() const {
		cout << "\n```````````````````````Car````````````````````````````````````" << endl;
		cout << "Id: " << _id << endl;
		cout << "Moodel: " << _model << endl;
		cout << "Vendor: " << _vendor << endl;
		cout << "Engine no: " << _engine.getEngineNo() << endl;
		cout << "Engine Volume:  " << _engine.getVolume() << endl;
		cout<<"Has  spoiler: "<< (_hasSpoiler ? "Yes" : "No") << endl;
		cout << "`````````````````````````````````````````````````````````````"<<endl;
	}
	

};

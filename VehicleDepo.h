#pragma once
class VehicleDepo {
private:
	Stack<Car>_cars;
	Stack<Ship>_ships;
	Stack<Airplane>_airplanes;
public:
	void addCar( Car car) {
		_cars.push(car);
	}
	void addShip(Ship ship) {
		_ships.push(ship);
	}
	void addAirplane(Airplane airplane) {
		_airplanes.push(airplane);
	}

	void ShowAllVehicles() {
		cout << "##################Vehicles####################################";
		for (int i = 0; i <_cars.size(); i++)
		{
			_cars.showAll();
		}

		
		for (int i = 0; i < _ships.size(); i++)
		{
			_ships.showAll();
		}

	
		for (int i = 0; i < _airplanes.size(); i++)
		{
			_airplanes.showAll();
		}
		cout << "################################################################################################";
	}
};

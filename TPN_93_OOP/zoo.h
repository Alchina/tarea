#ifndef zoo_H
#define	zoo_H
#include <string>
#include <iostream>

using namespace std;

class CZooAnimal {

	public:
		CZooAnimal(string n, int cage, int type,float w );
		CZooAnimal();
		~CZooAnimal();
		string getName();
		int getIdAnimal(),getNumber(), getWeight(), getCageNumber(), getIdTypeAnimal();
		bool menor3kg(), cantidadFelinos(), menor120kg();
		void desplegarDatos();
		
		
	private:
		int IdAnimal;
		string name;
		int cageNumber;
		int IdTypeAnimal; //1 felinos 2 aves 3 reptiles etc.
		float weight;
		

};

CZooAnimal::CZooAnimal(string n, int cage,int type, float w){
	name = n;
	cageNumber = cage;
	weight = w;
	IdTypeAnimal = type;
}

CZooAnimal::CZooAnimal(){}

CZooAnimal::~CZooAnimal(){}

int CZooAnimal::getIdAnimal(){
	return IdAnimal ;
}


string CZooAnimal::getName(){
	return name;
}


int CZooAnimal::getWeight(){
	return weight;
}

int CZooAnimal::getCageNumber(){
	return cageNumber;
}


int CZooAnimal::getIdTypeAnimal(){
	return IdTypeAnimal;
}

bool CZooAnimal::menor3kg(){
	return (cageNumber == 5 && weight <= 3) ? true : false;
}

bool CZooAnimal::cantidadFelinos(){
	return (cageNumber >= 2 && cageNumber <= 5 && IdTypeAnimal == 1) ? true : false;
}

bool CZooAnimal::menor120kg(){
	return (cageNumber == 4 && weight <= 120) ? true : false;
}

#endif
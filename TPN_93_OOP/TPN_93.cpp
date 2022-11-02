#include<iostream>
#include "zoo.h"
using namespace std;

void desplegarDatos(CZooAnimal *arreglo){
	cout<<"listado de animales que pesan menos de 120 en la jaula 4: ";
	for(int i=0;i<10;i++){
		if(arreglo[i].menor120kg()==true){
			cout<<arreglo[i].getName()<<" | ";
		}
	}
	
}

void animalCant(CZooAnimal *arreglo){
	int incremento=0;
	cout<<"\nCantidad de animales en la Jaula 5 cuyo peso es menor a 3 kg.: ";
	for(int i=0;i<10;i++){
		if(arreglo[i].menor3kg()==true){
			incremento++;		
		}
	}
	cout<<incremento;
	
}

void cantidadFelinos(CZooAnimal *arreglo){
	int incremento=0;
	cout<<"\ncantidad de animales de tipo felinos que están entre las jaulas 2 a 5: ";
	for(int i=0;i<10;i++){
		if(arreglo[i].cantidadFelinos()==true){
			incremento++;		
		}
	}
	cout<<incremento;
	
}


int main (){
	CZooAnimal *animales = new CZooAnimal [10];
	
	animales[0]=CZooAnimal("Jilguero norteamericano",1,2,0.02);
	animales[1]=CZooAnimal("gecko",1,2,0.1);
	
	
	animales[2]=CZooAnimal("tigre",2,1,130);
	animales[3]=CZooAnimal("cotorra",2,2,0.1);
	
	
	animales[4]=CZooAnimal("Gato Montes",3,1,5);
	animales[5]=CZooAnimal("Salamanquesa comun",3,3,0.016);
	
	
	animales[6]=CZooAnimal("lagartija colirroja",4,3,0.012);
	animales[7]=CZooAnimal("Chipe azul",4,2,0.01);
	
	
	animales[8]=CZooAnimal("Platanero",5,2,0.01);
	animales[9]=CZooAnimal("Cisticola",5,2,0.0068);
	
	desplegarDatos(animales);
	animalCant(animales);
	cantidadFelinos(animales);
		

	delete[]animales;
	
	return 0;
	
}
#include <iostream>
#include "brazoRobotico.h"


	BrazoRobotico::BrazoRobotico(){
		sujObj = 0;
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}


	double BrazoRobotico::getX(){return x;}

	double BrazoRobotico::getY(){return y;}

	double BrazoRobotico::getZ(){return z;}

	int BrazoRobotico::getsubObj(){return sujObj;}

	void BrazoRobotico::coger(){
		sujObj = 1;
	}

	void BrazoRobotico::soltar(){
		sujObj = 0;
	}

	void BrazoRobotico::mover(double valX,double valY,double valZ){
		x = valX;
		y = valY;
		z = valZ;
	}




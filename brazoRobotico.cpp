#include <iostream>
#include <brazoRobotico.h>


class BrazoRobotico{
	private:
		double x,y,z;
		int sujObj;


	brazoRobotico(){
		subObj = 0;
		x = 0.0;
		y = 0.0;
		z = 0.0;
	}


	int getX(){return x;}

	int getY(){return y;}

	int getZ(){return z;}

	int getsubObj(){return subObj;}

	void coger(){
		sujObj = 1;
	}

	void soltar(){
		sujObj = 0;
	}

	void mover(double valX,double valY,double valZ){
		x = valX;
		y = valY;
		z = valZ;
	}

}




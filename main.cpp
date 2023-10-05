#include <iostream>
#include "brazoRobotico.h"

using namespace std;

int main(){
	BrazoRobotico bra1;
	bra1.mover(20.40, 12.53, 3.42);
	printf("Robot movido a x:%f y:%f z:%f\n",bra1.getX(), bra1.getY(), bra1.getZ());
	bra1.coger();
	if(bra1.getsubObj()){
		cout<< "Objeto cogido.\n";
		
	}else{
		cout << "No se ha cogido ningun objeto\n";
	}

	return 0;
}

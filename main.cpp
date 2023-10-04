#include <iostream>
#include <brazoRobotico.h>
int main(){
	BrazoRobotico bra1 = new brazoRobotico();
	bra1.mover(20.40,12.53,3.42);
	printf("Robot movido a x:%d y:%d z:%d\n",bra1.getX().bra1.getY(),bra1.getZ());
	bra1.coger();
	if(bra.getsubObj()){
		cout<< "Objeto cogido.\n";
		
	}else{
		cout << "No se ha cogido ningun objeto\n";
	}




	return 0;
}

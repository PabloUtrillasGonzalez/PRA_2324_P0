class BrazoRobotico{
	private:
		double x,y,z;
		int sujObj;

	public:
		BrazoRobotico();

		double getX();

		double getY();

		double getZ();

		int getsubObj();

		void coger();

		void soltar();

		void mover(double valX,double valY,double valZ);
};

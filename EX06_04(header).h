
class Circle
{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

private:
	double raidus;
	static int numberOfObjects;

};

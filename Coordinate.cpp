#include "Coordinate.h"
#include "math.h"


Coordinate::Coordinate()
{

}
void Coordinate::set_d(int d)
{
	this->etiket = d;	
}
int Coordinate::get_d()
{
	return etiket;
}
void Coordinate::coordinates(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = -1;
}
void Coordinate::setx(float x)
{
	this->x = x;
}
void Coordinate::sety(float y)
{
	this->y = y;
}
void Coordinate::setz(float z)
{
	this->z = z;
}
float Coordinate::getx()
{
	return x;
}
float Coordinate::gety()
{
	return y;
}
float Coordinate::getz()
{
	return z;
}

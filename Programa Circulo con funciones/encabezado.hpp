#pragma once
#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.1416;
float radio = 0;
float pedirDatos();
float calcularArea();
float calcularPerimetro();

float pedirDatos()
{
	cout << "Ingresa el radio del circulo: ";
	cin >> radio;
	return radio;
}

float calcularArea()
{
	float area = 0;
	area = pi * pow(radio, 2);
	return area;
}

float calcularPerimetro()
{
	float perimetro;
	perimetro = 2 * pi * radio;
	return perimetro;
}
#pragma once

float operator"" _Kelvin(long double k) 
{
	long double Celsius = k - 273.15;
	return Celsius;
}

float operator"" _Kelvin(unsigned long long int k) 
{
	long double Celsius = k - 273.15;
	return Celsius;
}

float operator"" _Fahrenheit(unsigned long long int f) 
{
	long double Celsius = (f - 32) / 1.8;
	return Celsius;
}

float operator"" _Fahrenheit(long double f)
{
	long double Celsius = (f - 32) / 1.8;
	return Celsius;
}

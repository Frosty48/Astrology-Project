#ifndef ASTROLOGY_H
#define ASTROLOGY_H

#include <iostream>
#include <string>
#include <fstream>//able to write the file
#include <sstream>
using namespace std;


const int NUM{ 12 };

struct AstrologyData {


	string signs [NUM]={ "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo",
		"Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};

	string horoscopes[NUM];

	string elementNames[4]{ "Fire", "Earth", "Air", "Water" };



};


struct MyChart {

	int month{ 1 };
	int day{ 1 };
	string myName;
	int mySign{ 0};
	int myElement{ 0 };
	int compatibleSigns[2]{ 4,8 };


};


void WriteHeader();
void WriteIntro();

void FillHoroscopes(AstrologyData &data);

void AskForNameAndBirthday(MyChart &astro);

bool ValidateBirthday(MyChart &astro);

void FindMySign(MyChart &astro);

void FindCompatibleSigns(MyChart &astro);

bool WriteHoroscope(MyChart& astro, AstrologyData& data, string* filename, string* results);

bool DoAnotherHoroscope();

void SayGoodBye();







#endif ASTROLOGY_H


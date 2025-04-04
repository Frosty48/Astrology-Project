#include "Astrology.h"
#include "FindMySign.cpp"
#include <sstream>


void FindCompatibleSigns(MyChart& astro)//time stamp in video 37minutes
{
    int month{ astro.month };
    int day{ astro.day };

    //Find myElement
    //get the other two signs in that element and assign them to the compatible signs

    if (month == 1 && day <= 19) { // Capricorn
        astro.mySign = 1;
        astro.myElement = 2;
        cout << "\n\nYour element is earth.  Your compatiable signs are Capricorn, Taurus, and Virgo.";
    }


    if (month == 1 && day > 19 || month == 2 && day <= 18) {//aqurius
        astro.mySign = 2;
        astro.myElement = 3;
        cout << "\n\nyour element is air. Your compatiable signs are Gemini, Libra, Aquarius.";
    }


    if (month == 2 && day > 18 || month == 3 && day <= 20) {//Pisces              
        astro.mySign = 3;
        astro.myElement = 4;
        cout << "\n\nyour element is water.  Your compatiable signs are Pisces, Cancer and Scorpio.";
    }


    if (month == 3 && day > 20 || month == 4 && day <= 19) { //Aries 
        astro.mySign = 4;
        astro.myElement = 1;
        cout << "\n\nyour element is fire. Your compatiable signs are Aries, Leo and Sagittarius.";
    }


    if (month == 4 && day > 20 || month == 5 && day <= 20) {//tarus
        astro.mySign = 5;
        astro.myElement = 2;
        cout << "\n\nYour element is earth.  Your compatiable signs are Capricorn, Taurus, and Virgo.";
    }


    if (month == 5 && day > 20 || month == 6 && day <= 21) {//Gemini
        astro.mySign = 6;
        astro.myElement = 3;
        cout << "\n\nyour element is air. Your compatiable signs are Gemini, Libra, Aquarius.";
    }


    if (month == 6 && day > 21 || month == 7 && day <= 22) {//cancer
        astro.mySign = 7;
        astro.myElement = 4;
        cout << "\n\nyour element is water.  Your compatiable signs are Pisces, Cancer and Scorpio.";
    }


    if (month == 7 && day > 22 || month == 8 && day <= 22) {//Leo
        astro.mySign = 8;
        astro.myElement = 1;
        cout << "\n\nyour element is fire. Your compatiable signs are Aries, Leo and Sagittarius.";
    }


    if (month == 8 && day > 22 || month == 9 && day <= 22) {//Virgo
        astro.mySign = 9;
        astro.myElement = 2;
        cout << "\n\nYour element is earth.  Your compatiable signs are Capricorn, Taurus, and Virgo.";
    }


    if (month == 9 && day > 22 || month == 10 && day <= 22) {//Libra
        astro.mySign = 10;
        astro.myElement = 3;
        cout << "\n\nyour element is air. Your compatiable signs are Gemini, Libra, Aquarius.";
    }


    if (month == 10 && day > 22 || month == 11 && day <= 21) {//Scorpio
        astro.mySign = 11;
        astro.myElement = 4;
        cout << "\n\nyour element is water.  Your compatiable signs are Pisces, Cancer and Scorpio.";
    }


    if (month == 11 && day > 21 || month == 12 && day <= 21) {//Sagittarus
        astro.mySign = 12;
        astro.myElement = 2;
        cout << "\n\nYour element is earth. Your compatiable signs are Aries, Leo and Sagittarius.";
    }

}
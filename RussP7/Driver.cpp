//Programmer: Jerrell Russ
//Email: jruss1@cnm.edu
//Purpose: How to open and close files

#include <iostream>
#include "Astrology.h"
using namespace std;

int main()
{
    WriteHeader();
    WriteIntro();


    AstrologyData data;
    MyChart astro;
    string fileName;
    string results;

   


    FillHoroscopes(data);

    do {
        AskForNameAndBirthday( astro);

        if (ValidateBirthday(astro) == true) {
            FindMySign(astro);
        
            FindCompatibleSigns(astro);


            

            if (WriteHoroscope(astro, data, &fileName, &results) == true) {
            
            //show the the file path of where there horoscope is written/saved
                
                cout << results;
            
            
            }

           else {

                cout << "An error has occurred";
           }

        }
        

        else {

            cout << "Enter a valid birthday";
        
        }


    } while (DoAnotherHoroscope() == true);

    SayGoodBye();
    return 0;
}

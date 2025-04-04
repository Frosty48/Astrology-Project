#include "Astrology.h"
#include <sstream>
void WriteHeader()
{

    cout << "This program will tell you, your astrology sign and who you are most compatible with\n\n";


}

void WriteIntro()
{
    cout << "Within this program you will fill in some information asking for your birthday."
        << "After that it will tell you one of twelve signs and one of the four corresponding elements"
        << "It will also tell you what sign you are most compatble with\n\n.";
}



void AskForNameAndBirthday(MyChart& astro)
{
    
    cout << "\n\nWhat is your name?\n";
    getline(cin, astro.myName);//getline only works with chars or strings.
    cin.ignore();
   
    


    cout<<"Hello, " << astro.myName << ".  What is your birthday? Type the number of the month and the number of the day.\n"
        << "Example: for month if you were born in April type 4\n"
        << "If you were born on the thirtieth type 30\n\n";


   cout << "What is your birth day? ";
   cin>>astro.day;
   cin.ignore();


    cout<<"\n\nWhat is your birth month? ";
    cin>> astro.month;
    cin.ignore();

    
}


bool ValidateBirthday(MyChart& astro)
{
   if (astro.month < 1 || astro.month>12) {

            cout << "Invalid month.";
   }

    

  if (astro.month == 1 || astro.month == 3 || astro.month == 5 || astro.month == 7 || astro.month == 8 || astro.month == 10 || astro.month == 12) {//31 days
        
        
     if (astro.day < 1 || astro.day>31) {

        cout << "Invalid day for month.";
     }
        
        
        
        
  }


        

   if (astro.month == 4 || astro.month == 6 || astro.month == 9 || astro.month == 11) {//30 days
        
        
      if (astro.day < 1 || astro.day>30) {

         cout << "Invalid day for month.";
      }
        
        
        
        
   }
    


    if (astro.month == 2) {//febuary
      if (astro.day < 1 || astro.day>29) {

        cout << "Invalid day month.";
      }
    }



    return true;

}


void FillHoroscopes(AstrologyData& data)
{
    data.horoscopes[4] = "\nAries. There's one thing you really hate, it's being told to slow down or stop.\n";


    data.horoscopes[5] = "\nTaurus. You're hardworking and diligent, some would say stubborn.\n";


    data.horoscopes[6] = "\nGemini. Once you get your work situation back under control, it's time for you to tend to more emotional matters.\n";


    data.horoscopes[7] = "\nCancer. Ask for help before you make any big decisions.\n";


    data.horoscopes[8] = "\nLeo. You want a mate who shares their passions, both emotionally and otherwise\n";


    data.horoscopes[9] = "\nVirgo. You are kind, gentle, and supportive friends and lovers.  Good problem-solvers.\n";


    data.horoscopes[10] = "\nLibra. You've got plenty of friends from all walks of life. Some are strangers who bump into you at the right time.\n";


    data.horoscopes[11] = "\nScorpio. You're discreet, secretive, creative, and myterious\n";


    data.horoscopes[12] = "\nSagittarius.Your inclination puts others at ease\n";


    data.horoscopes[1] = "\nCapraicorn. A worker bee. You're ambitious, organized, goal-oriented, and don't mind the hustle.";


    data.horoscopes[2] = "\nAquarius. You don't like you to air your feelings in public, whether positive or negative. \n";


    data.horoscopes[3] = "\nPisces. People come to you asking to let them disclose information to you, and you're more than happy to oblige\n";
}



void FindCompatibleSigns(MyChart& astro)//time stamp in video 37minutes
{
    //#########################################

    //you might be able to change them to if and else statements to make it run faster

   //###########################################


    int month{ astro.month };
    int day{ astro.day };
 
    
  //Find myElement
  //get the other two signs in that element and assign them to the compatible signs

    if (month ==1 && day<=19) { // Capricorn

        astro.mySign =1;
        astro.myElement = 2;
        cout << "\n\nYour element is earth.  Your compatiable signs are Capricorn, Taurus, and Virgo.";

    }




    if (month == 1 && day > 19 || month == 2 && day <= 18) {//aqurius

        astro.mySign = 2;
        astro.myElement = 3;
       
        cout << "\n\nyour element is air. Your compatiable signs are Gemini, Libra, Aquarius.";
    }
   


    if (month == 2 && day > 18 || month==3 && day <= 20){//Pisces              
        
        astro.mySign = 3;
        astro.myElement = 4;
        cout << "\n\nyour element is water.  Your compatiable signs are Pisces, Cancer and Scorpio.";

    }




    if (month == 3 && day >20 || month==4 && day <= 19){ //Aries 

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

        cout<<"\n\nyour element is fire. Your compatiable signs are Aries, Leo and Sagittarius.";

    }



    if(month==8 && day>22||month==9 && day<=22){//Virgo

   
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





    if ( month==11 && day >21||month == 12 && day<=21  ) {//Sagittarus
    
        astro.mySign = 12;
        astro.myElement = 2;
        cout << "\n\nYour element is earth. Your compatiable signs are Aries, Leo and Sagittarius.";
    }



   
}







bool WriteHoroscope(MyChart& astro, AstrologyData& data, string* filename, string* results)
{
  //ask for file name for their report.  Tell them if they should put .txt on the end
    //open an output file stream

    stringstream ss;
    ofstream myFile("Test_file_C++.txt");
    

    if (myFile.is_open()){ //open the file

        //create a string stream of the results
         
        //Tell the user their input, sign hororscope, and their compatiable signs
        
        myFile<< "\n\nHello " << astro.myName << ". Your birday is " << astro.month << "/" << astro.day << " your sign is " << data.signs[astro.mySign] << " and your element is " << data.elementNames[astro.myElement] << ".  " << data.horoscopes[astro.mySign];

        
        ss<< "\n\nHello " << astro.myName << ". Your birthday is " << astro.month << "/" << astro.day << " your sign is " << data.signs[astro.mySign]    << " and your element is " << data.elementNames[astro.myElement] <<".  "<<data.horoscopes[astro.mySign];
        *results = ss.str();
        
        myFile.close();//close the file.

        return true;

    }


    else {
        


        return false;

    }


}


bool DoAnotherHoroscope()
{
    string tryAgain{};
    cout << "\n\nDo you want to do another birthday? Type yes or no as shown.";
    getline(cin, tryAgain);

    if (tryAgain == "yes") {

        return true;
    }
}

void SayGoodBye()
{
    cout << "\n\nBye, hopefully the stars allign for you in  the furture.\n\n";

}

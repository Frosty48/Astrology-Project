#include  "Astrology.h"
#include "Astrology.cpp"
#include <sstream>

/*Goal: reduce lines, 
keep the same functionality/readablity
previous  line total: 230ish
*/
void FindMySign(MyChart& astro)
{
    int day{ astro.day };

    switch (astro.month) {


    case 1://Capraicorn
        cout << (day <= 19)?"\n\nYour sign is capraicorn":"\n\nYour sign is aquarius";
        break;

       
    case 2://Aquarius
        cout <<(day <= 18)?"\n\nYour sign is aquarius" : "\n\nYour sign is Pisces";
        break;


    case 3://Pisces	
         cout <<(day <= 20)? "\n\nYour sign is Pisces" : "\n\nYour sign is aries";
         break;


    case 4://Aries
        cout <<(day <= 19)?  "Your sign is aries":"\n\nYour sign is taurus";
        break;


    case 5://Taurus
        cout <<(day <= 20) ? "\n\nYour sign is taurus":"\n\nYour sign is gemini";
        break;


    case 6://Gemini	
        cout <<(day <= 21)? "\n\nYour sign is gemini" : "\n\nYour sign is cancer";
        break;


    case 7://Cancer
        cout <<(day <= 22) ? "\n\nYour sign is cancer" : "\n\nYour sign is leo";
        break;


    case 8://Leo	
        cout <<(day <= 22) ? "\n\nYour sign is leo" :  "\n\nYour sign is virgo";
        break;


    case 9://Virgo
        cout << (day <= 22) ? "\n\nYour sign is virgo" : "\n\nYour sign is libra";
        break;


    case 10://Libra
        cout <<(day <= 22) ? "\n\nYour sign is libra" : "\n\nYour sign is scorpio";
        break;


    case 11://Scorpio
        cout <<(day <= 21) ? "\n\nYour sign is scorpio" : "\n\nYour sign is sagittarius ";
        break;


    case 12://Sagittarius
        cout <<(day <= 21)? "\n\nYour sign is sagittarius " : "\n\nYour sign is capraicorn";
        break;


    default:
        cout << "Prarie dog";
        break;

    }

}

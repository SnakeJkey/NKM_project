// Animals.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <algorithm>
#include "Had.h"
#include "Kocka.h"
using namespace std;

int main()
{
    cout << "Vitejte v ZOO!\n";

	Had Python("Demon ", 5, 15, true, 3);
	Python.speak();
    Python.isPoisunous();
	Python.getLifeNumber();
    
	Had* HadPtr = new Had("Aternus ", 4, 12, false, 2);
	HadPtr->speak();
    HadPtr->isPoisunous();
	HadPtr->getLifeNumber();

   /*
    Kocka whiskers("whiskers", 3, 10, "Black", 5);
    whiskers.speak();

    Kocka* KockaPtr = new Kocka("Mittens", 2, 8, "Black", 5);
    KockaPtr->speak();
   */

    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění
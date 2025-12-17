// Animals.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <algorithm>
#include "Had.h"
#include "Kocka.h"
using namespace std;

int main()
{
	cout << "Vitejte V ZOO! \n";
    Kocka Micka("Micka", 5, 5);
    Micka.speak();

    cout << endl;

    Had Python("Eternal", 7, 15, true, 3);
    Python.speak();
    cout << "Jed had jedovaty? " << Python.isPoisunous() << endl;
	cout << "Had ma " << Python.getLifeNumber() << " zivoty/u" << endl;

    cout << endl;

    Had* HadPtr = new Had("Aternus", 4, 12, false, 5);
    HadPtr->speak();
    cout << "Je had jedovaty? " << HadPtr->isPoisunous() << endl;
    cout << "Had ma " << HadPtr->getLifeNumber() << " zivoty/u" << endl;
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
#include <iostream>
#include <string>

#include "Tier.h"
#include "Hase.h"
#include "Fisch.h"

// Hauptklasse Main
int main() {
    // Erstelle einen Hasen
    Hase meinHase(2, 30, "braun");
    meinHase.beschreibeTier();
    meinHase.hopsen();

    // Erstelle einen Fisch
    Fisch meinFisch(1, 10, "silber");
    meinFisch.beschreibeTier();
    meinFisch.schwimmen();

    return 0;
}

//
// Created by muell on 23.11.2024.
//

#include <iostream>
#include <string>

#ifndef TIER_FISCH_H
#define TIER_FISCH_H

#include "Tier.h"

// Abgeleitete Klasse Fisch
class Fisch : public Tier {
private:
    std::string schuppenFarbe_;

public:
    // Konstruktor
    Fisch(int alter, int groesse, const std::string& schuppenFarbe)
            : Tier(alter, groesse), schuppenFarbe_(schuppenFarbe) {}

    void schwimmen() {
        std::cout << "Der Fisch schwimmt elegant durchs Wasser.\n";
    }

    void beschreibeTier() override {
        std::cout << "Fisch: Alter: " << alter_ << ", Größe: " << groesse_
                  << " cm, Schuppenfarbe: " << schuppenFarbe_ << "\n";
    }
};


#endif //TIER_FISCH_H

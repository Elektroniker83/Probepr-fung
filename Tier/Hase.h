//
// Created by muell on 23.11.2024.
//

#include <iostream>
#include <string>

#ifndef TIER_HASE_H
#define TIER_HASE_H

#include "Tier.h"

// Abgeleitete Klasse Hase
class Hase : public Tier {
private:
    std::string fellFarbe_;

public:
    // Konstruktor
    Hase(int alter, int groesse, const std::string& fellFarbe)
            : Tier(alter, groesse), fellFarbe_(fellFarbe) {}

    void hopsen() {
        std::cout << "Der Hase hoppelt fröhlich.\n";
    }

    void beschreibeTier() override {
        std::cout << "Hase: Alter: " << alter_ << ", Größe: " << groesse_
                  << " cm, Fellfarbe: " << fellFarbe_ << "\n";
    }
};


#endif //TIER_HASE_H

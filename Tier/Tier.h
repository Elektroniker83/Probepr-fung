//
// Created by muell on 23.11.2024.
//
#include <iostream>
#include <string>

#ifndef TIER_TIER_H
#define TIER_TIER_H


// Basisklasse Tier
class Tier {
protected:
    int alter_;
    int groesse_;

public:
    // Konstruktor
    Tier(int alter, int groesse) : alter_(alter), groesse_(groesse) {}

    // Virtuelle Methode (kann in Unterklassen überschrieben werden)
    virtual void beschreibeTier() {
        std::cout << "Tier: Alter: " << alter_ << ", Größe: " << groesse_ << " cm\n";
    }
};



#endif //TIER_TIER_H

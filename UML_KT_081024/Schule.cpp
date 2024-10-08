#include "Schule.h"
#include <iostream>

/**
 * Konstruktor der Schule-Klasse. Initialisiert den Namen der Schule.
 */
Schule::Schule(const std::string& schulname) : schulname(schulname) {}

/**
 * Fügt eine Klasse zur Schule hinzu. std::move wird verwendet, um den Besitz der Klasse zu übertragen.
 */
void Schule::addKlasse(std::unique_ptr<Klasse> klasse) {
    klassenliste.push_back(std::move(klasse));
}

/**
 * Gibt die Informationen über die Schule und alle ihre Klassen aus.
 */
void Schule::printSchule() const {
    std::cout << "Schule: " << schulname << std::endl;
    std::cout << "Klassen in der Schule:" << std::endl;
    for (const auto& klasse : klassenliste) {
        klasse->printKlasse();
    }
}

#include "Klasse.h"
#include <iostream>

/**
 * Konstruktor für die Klasse Klasse.
 * Initialisiert den Namen der Klasse.
 */
Klasse::Klasse(const std::string& klassenname) : klassenname(klassenname) {}

/**
 * Setzt den Klassenlehrer der Klasse.
 * std::move wird verwendet, um den Besitz des Lehrers zu übertragen.
 */
void Klasse::setKlassenlehrer(std::unique_ptr<Lehrer> lehrer) {
    klassenlehrer = std::move(lehrer);
}

/**
 * Fügt einen Schüler zur Klasse hinzu.
 * std::move wird verwendet, um den Besitz des Schülers zu übertragen.
 */
void Klasse::addSchueler(std::unique_ptr<Schüler> schueler) {
    schuelerliste.push_back(std::move(schueler));
}

/**
 * Fügt einen Lehrer zur Liste der Lehrer hinzu.
 */
void Klasse::addLehrer(Lehrer* lehrer) {
    lehrerliste.push_back(lehrer);
}

/**
 * Gibt Informationen über die Klasse aus.
 */
void Klasse::printKlasse() const {
    std::cout << "Klassenname: " << klassenname << std::endl;
    if (klassenlehrer) {
        std::cout << "Klassenlehrer: " << klassenlehrer->getName() << std::endl;
    }
    std::cout << "Schüler in der Klasse:" << std::endl;
    for (const auto& schueler : schuelerliste) {
        std::cout << "- " << schueler->getName() << std::endl;
    }
    std::cout << "Lehrer in der Klasse:" << std::endl;
    for (const auto& lehrer : lehrerliste) {
        std::cout << "- " << lehrer->getName() << " unterrichtet " << lehrer->getFach() << std::endl;
    }
}

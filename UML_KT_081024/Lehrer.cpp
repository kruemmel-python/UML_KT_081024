#include "Lehrer.h"

/**
 * Konstruktor für die Lehrer-Klasse.
 * Initialisiert den Namen, die ID und das Fach des Lehrers.
 */
Lehrer::Lehrer(const std::string& name, int id, const std::string& faecher)
    : Person(name, id), faecher(faecher) {}

/**
 * Setzt das Fach des Lehrers.
 */
void Lehrer::unterrichteFach(const std::string& fach) {
    faecher = fach;
}

/**
 * Gibt das aktuelle Fach des Lehrers zurück.
 */
std::string Lehrer::getFach() const {
    return faecher;
}

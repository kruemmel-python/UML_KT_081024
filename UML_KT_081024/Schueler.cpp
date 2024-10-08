#include "Schueler.h"

/**
 * Konstruktor für die Klasse Schüler.
 * Initialisiert den Namen und die ID durch den Konstruktor der Basisklasse.
 */
Schüler::Schüler(const std::string& name, int id) : Person(name, id) {}

/**
 * Fügt eine Note zur Notenliste hinzu.
 */
void Schüler::addNote(int note) {
    notenliste.push_back(note);
}

/**
 * Gibt die Note an der angegebenen Position zurück.
 * Gibt -1 zurück, wenn der Index ungültig ist.
 */
int Schüler::getNote(int index) const {
    if (index >= 0 && index < notenliste.size()) {
        return notenliste[index];
    }
    return -1;
}

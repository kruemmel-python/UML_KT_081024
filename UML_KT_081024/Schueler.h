#ifndef SCHUELER_H
#define SCHUELER_H

#include "Person.h"
#include <vector>

/**
 * Die Klasse Schüler erbt von Person und repräsentiert einen Schüler in der Schule.
 * Zusätzlich zum Namen und der ID speichert die Klasse eine Notenliste des Schülers.
 */
class Schüler : public Person {
private:
    std::vector<int> notenliste; // Liste der Noten des Schülers

public:
    /**
     * Konstruktor: Initialisiert den Namen und die ID des Schülers.
     * @param name Der Name des Schülers.
     * @param id Die eindeutige ID des Schülers.
     */
    Schüler(const std::string& name, int id);

    /**
     * Fügt eine Note zur Notenliste des Schülers hinzu.
     * @param note Die hinzuzufügende Note.
     */
    void addNote(int note);

    /**
     * Gibt die Note an der angegebenen Position in der Notenliste zurück.
     * @param index Der Index der Note in der Liste.
     * @return Die Note am gegebenen Index, oder -1 bei einem ungültigen Index.
     */
    int getNote(int index) const;
};

#endif // SCHUELER_H

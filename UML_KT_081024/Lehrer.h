#ifndef LEHRER_H
#define LEHRER_H

#include "Person.h"
#include <string>

/**
 * Die Klasse Lehrer erbt von Person und repräsentiert einen Lehrer.
 * Sie speichert das Fach, das der Lehrer unterrichtet.
 */
class Lehrer : public Person {
private:
    std::string faecher;  // Das Fach, das der Lehrer unterrichtet

public:
    /**
     * Konstruktor: Initialisiert den Namen, die ID und das Fach des Lehrers.
     * @param name Der Name des Lehrers.
     * @param id Die eindeutige ID des Lehrers.
     * @param faecher Das Fach, das der Lehrer unterrichtet.
     */
    Lehrer(const std::string& name, int id, const std::string& faecher);

    /**
     * Setzt das Fach, das der Lehrer unterrichtet.
     * @param fach Das Fach, das unterrichtet wird.
     */
    void unterrichteFach(const std::string& fach);

    /**
     * Gibt das Fach zurück, das der Lehrer aktuell unterrichtet.
     * @return Das aktuelle Fach des Lehrers.
     */
    std::string getFach() const;
};

#endif // LEHRER_H

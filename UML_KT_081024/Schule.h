#ifndef SCHULE_H
#define SCHULE_H

#include "Klasse.h"
#include <vector>
#include <string>
#include <memory>

/**
 * Die Klasse Schule repräsentiert eine Schule, die verschiedene Klassen besitzt.
 */
class Schule {
private:
    std::string schulname;  // Der Name der Schule
    std::vector<std::unique_ptr<Klasse>> klassenliste;  // Liste der Klassen in der Schule

public:
    /**
     * Konstruktor: Initialisiert den Namen der Schule.
     * @param schulname Der Name der Schule.
     */
    explicit Schule(const std::string& schulname);

    /**
     * Fügt eine Klasse zur Schule hinzu.
     * @param klasse Die Klasse, die zur Schule hinzugefügt wird.
     */
    void addKlasse(std::unique_ptr<Klasse> klasse);

    /**
     * Gibt Informationen über die Schule und alle ihre Klassen aus.
     */
    void printSchule() const;
};

#endif // SCHULE_H

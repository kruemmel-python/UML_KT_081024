#ifndef PERSON_H
#define PERSON_H

#include <string>

/**
 * Die Klasse Person repräsentiert eine allgemeine Person.
 * Sie enthält grundlegende Attribute wie Name und ID, die sowohl für Schüler als auch Lehrer gelten.
 */
class Person {
protected:
    std::string name;  // Der Name der Person
    int id;            // Eine eindeutige ID der Person

public:
    /**
     * Konstruktor: Initialisiert den Namen und die ID der Person.
     * @param name Der Name der Person.
     * @param id Die eindeutige ID der Person.
     */
    Person(const std::string& name, int id);

    /**
     * Gibt den Namen der Person zurück.
     * @return Der Name der Person.
     */
    std::string getName() const;

    /**
     * Gibt die ID der Person zurück.
     * @return Die ID der Person.
     */
    int getId() const;
};

#endif // PERSON_H

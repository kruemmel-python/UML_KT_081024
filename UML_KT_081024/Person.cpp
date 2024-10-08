#include "Person.h"

/**
 * Konstruktor der Person-Klasse.
 * Initialisiert die Attribute Name und ID.
 */
Person::Person(const std::string& name, int id) : name(name), id(id) {}

/**
 * Gibt den Namen der Person zurück.
 */
std::string Person::getName() const {
    return name;
}

/**
 * Gibt die ID der Person zurück.
 */
int Person::getId() const {
    return id;
}

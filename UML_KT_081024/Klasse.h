#ifndef KLASSE_H
#define KLASSE_H

#include "Lehrer.h"
#include "Schueler.h"
#include <vector>
#include <string>
#include <memory>

/**
 * Die Klasse Klasse repräsentiert eine Schulklasse.
 * Jede Klasse hat einen Namen, einen Klassenlehrer, eine Liste von Schülern und eine Liste von Lehrern, die Fächer unterrichten.
 */
class Klasse {
private:
    std::string klassenname;  // Name der Klasse
    std::unique_ptr<Lehrer> klassenlehrer;  // Klassenlehrer der Klasse
    std::vector<std::unique_ptr<Schüler>> schuelerliste;  // Liste der Schüler
    std::vector<Lehrer*> lehrerliste;  // Liste der Lehrer, die in der Klasse unterrichten

public:
    /**
     * Konstruktor: Initialisiert den Namen der Klasse.
     * @param klassenname Der Name der Klasse.
     */
    Klasse(const std::string& klassenname);

    /**
     * Setzt den Klassenlehrer der Klasse.
     * @param lehrer Der Klassenlehrer.
     */
    void setKlassenlehrer(std::unique_ptr<Lehrer> lehrer);

    /**
     * Fügt einen Schüler zur Klasse hinzu.
     * @param schueler Der hinzuzufügende Schüler.
     */
    void addSchueler(std::unique_ptr<Schüler> schueler);

    /**
     * Fügt einen Lehrer zur Klasse hinzu, der ein Fach unterrichtet.
     * @param lehrer Der Lehrer.
     */
    void addLehrer(Lehrer* lehrer);

    /**
     * Gibt Informationen über die Klasse, den Klassenlehrer und die Schüler aus.
     */
    void printKlasse() const;
};

#endif // KLASSE_H

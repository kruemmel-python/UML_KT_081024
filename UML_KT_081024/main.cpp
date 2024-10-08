#include "Lehrer.h"
#include "Schueler.h"
#include "Klasse.h"
#include "Schule.h"
#include <memory>

/**
 * Hauptprogramm, das die Schule, Klassen, Lehrer und Schüler erstellt und die Informationen über die Schule ausgibt.
 */
int main() {
    // Erstellen der Schule
    auto schule = std::make_unique<Schule>("Gymnasium");

    // Erstellen der Lehrer
    auto lehrer1 = std::make_unique<Lehrer>("Herr Schmidt", 1, "Mathematik");
    auto lehrer2 = std::make_unique<Lehrer>("Frau Müller", 2, "Deutsch");

    // Erstellen der Schüler
    auto schueler1 = std::make_unique<Schüler>("Anna Müller", 101);
    auto schueler2 = std::make_unique<Schüler>("Max Meier", 102);

    // Erstellen der Klasse
    auto klasse = std::make_unique<Klasse>("10B");

    // Setzen des Klassenlehrers und Hinzufügen der Schüler zur Klasse
    klasse->setKlassenlehrer(std::move(lehrer1));
    klasse->addSchueler(std::move(schueler1));
    klasse->addSchueler(std::move(schueler2));

    // Hinzufügen der Lehrer zur Klasse
    klasse->addLehrer(lehrer2.get());

    // Hinzufügen der Klasse zur Schule
    schule->addKlasse(std::move(klasse));

    // Ausgabe der Informationen über die Schule
    schule->printSchule();

    return 0;
}

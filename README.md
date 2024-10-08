![image](https://github.com/user-attachments/assets/d76cc795-81f1-4e24-ac3b-efac11514bfa)


![image](https://github.com/user-attachments/assets/77710d14-6b46-480d-8dd8-8a556e2f071b)


# Schulsystem in C++

Dieses C++-Projekt implementiert ein einfaches Schulsystem mit den Klassen **Schule**, **Klasse**, **Lehrer**, und **Schüler**. Jede Schule kann mehrere Klassen haben, jede Klasse hat einen Klassenlehrer sowie mehrere Schüler und Lehrer, die verschiedene Fächer unterrichten.

## Aufbau des Projekts

Das Projekt besteht aus 11 Dateien, die wie folgt strukturiert sind:

### Dateien:
1. **Person.h** / **Person.cpp** - Die Basisklasse für Personen, von der Schüler und Lehrer erben.
2. **Schueler.h** / **Schueler.cpp** - Repräsentiert Schüler mit einer Liste von Noten.
3. **Lehrer.h** / **Lehrer.cpp** - Repräsentiert Lehrer, die verschiedene Fächer unterrichten.
4. **Klasse.h** / **Klasse.cpp** - Repräsentiert eine Schulklasse, die einen Klassenlehrer und eine Liste von Schülern und Lehrern hat.
5. **Schule.h** / **Schule.cpp** - Repräsentiert eine Schule, die mehrere Klassen verwaltet.
6. **main.cpp** - Das Hauptprogramm, das die Objekte erstellt und die Informationen über die Schule ausgibt.

## Verwendung von Smart Pointern und Speicherverwaltung

Im gesamten Projekt wird die moderne C++-Funktionalität **`std::unique_ptr`** verwendet, um die Speicherverwaltung zu automatisieren. Dies gewährleistet, dass dynamisch erstellte Objekte automatisch freigegeben werden, sobald sie nicht mehr benötigt werden. Dies ist ein wichtiger Bestandteil des RAII-Prinzips (Resource Acquisition Is Initialization).

Beispiel:
```cpp
auto schule = std::make_unique<Schule>("Gymnasium");
```

Durch die Verwendung von **`std::move`** wird der Besitz eines Objekts übertragen, sodass nur eine Instanz eines Objekts für die Speicherfreigabe verantwortlich ist.

## Abhängigkeiten

Das Projekt nutzt ausschließlich die Standardbibliothek von C++. Es gibt keine externen Abhängigkeiten.

### Standardbibliotheken:
- **`<string>`** - für Zeichenketten (Namen, Fächer)
- **`<vector>`** - für dynamische Listen (Schüler- und Lehrerliste)
- **`<memory>`** - für Smart Pointer wie `std::unique_ptr`
- **`<iostream>`** - für die Konsolenausgabe

## Anleitung zur Ausführung

Um das Programm zu kompilieren und auszuführen, folgen Sie diesen Schritten:

1. **Kompilieren:**
   Verwenden Sie einen C++-Compiler wie `g++` oder `clang++` und kompilieren Sie das Projekt wie folgt:
   ```bash
   g++ main.cpp Person.cpp Schueler.cpp Lehrer.cpp Klasse.cpp Schule.cpp -o schulsystem
   ```

2. **Ausführen:**
   Führen Sie das Programm nach der Kompilierung mit dem folgenden Befehl aus:
   ```bash
   ./schulsystem
   ```

## Beispielausgabe

Das Programm gibt die Struktur der Schule und der Klassen auf der Konsole aus, zum Beispiel:

```
Schule: Gymnasium
Klassen in der Schule:
Klassenname: 10B
Klassenlehrer: Herr Schmidt
Schüler in der Klasse:
- Anna Müller
- Max Meier
Lehrer und ihre Fächer:
- Frau Müller unterrichtet Deutsch
```

## Konzeptuelle Erläuterungen

### Vererbung:
Die Klassen **Lehrer** und **Schüler** erben von der Basisklasse **Person**, da beide die gleichen Grundattribute (Name und ID) besitzen, jedoch unterschiedliche Verantwortlichkeiten haben.

### Vektoren:
**`std::vector`** wird verwendet, um dynamische Listen von Schülern und Lehrern zu speichern, die in der Klasse unterrichtet werden. Ein Vektor kann dynamisch wachsen, wenn mehr Schüler oder Lehrer hinzugefügt werden.

### Verzicht auf `namespace`:
In diesem Projekt wurde absichtlich auf die Verwendung von **`namespace`** verzichtet, um den Schülern den Code und seine Funktionsweise sichtbarer zu machen. Dies erleichtert es, die verschiedenen Klassen, ihre Methoden und die Interaktion zwischen den Objekten klar zu verstehen.

### Speicherverwaltung:
Es wurde bewusst auf **Smart Pointers** wie `std::unique_ptr` gesetzt, um Speicherlecks zu vermeiden und Ressourcen automatisch freizugeben, sobald sie nicht mehr benötigt werden. Dies entlastet den Programmierer und reduziert Fehler in der Speicherverwaltung.



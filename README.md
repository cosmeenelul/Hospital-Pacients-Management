# Hospital-Pacients-Management
A project based on Data Structures and Algorithms , using two custom created Headers.

# RO LANGUAGE : 
# Sistem de Management al Pacienților din Spital

Un sistem de prioritizare a pacienților conceput pentru a gestiona eficient cozile din camera de urgență pe baza severității condițiilor și a ordinii de sosire.

## 📋 Descrierea Proiectului
**HospitalPriorityQueue** este un program C++ care simulează fluxul de lucru dintr-o Cameră de Urgență (ER) prin organizarea și procesarea datelor pacienților într-un mod structurat și corect. Programul folosește o Coada cu Prioritate pentru a se asigura că pacienții cu nevoi mai urgente sunt tratați mai întâi, în timp ce menține ordinea sosirii pentru pacienții cu același nivel de prioritate.

### 🏥 Funcționalități
- **Management Dinamic al Pacienților**: Adăugarea, procesarea și eliminarea pacienților din coadă se face fără întreruperi.
- **Sistem pe Baza de Prioritate**: Pacienții sunt serviți în ordinea priorității lor medicale (0 = prioritate maximă).
- **Garantie a Ordinii de Sosire**: Pentru pacienții cu aceeași prioritate, cel care a sosit primul este procesat primul.
- **Siguranța Memoriei**: Managementul corect al memoriei asigură terminarea lină a programului și previne scurgerile de memorie.

## 🛠️ Tehnologii Folosite
- **C++**: Limbajul principal de programare.
- **Structuri de Date Personalizate**: Implementarea unei Cozi cu Prioritate adaptată cerințelor din ER.
- **Fișiere Header**: Design modular cu fișierele `Patient.h` și `PriorityQueue.h`.

## 📖 Cum Funcționează
1. **Comenzi de Intrare**:
   - `+ NUME PRENUME VÂRSTĂ SEX PRIORITATE`: Adaugă un nou pacient în coadă.
   - `-`: Procesează și afișează următorul pacient din coadă pe baza priorității și ordinii de sosire.
   - `*`: Eliberează memoria alocată și oprește programul.

2. **Reguli ale Cozii**:
   - Pacienții cu o prioritate mai mare (valoare numerică mai mică) sunt serviți mai întâi.
   - Dacă prioritățile sunt egale, pacientul care a sosit primul este tratat primul.

## Exemplu de INPUT :
    + Ion Popescu 36 M 3
    + Maria Ghitescu 23 F 2
    + Ghita Ion 12 M 0
    + Andrei Ionescu 73 M 0
    -
    + Anita Gheorghe 45 F 1
    -
    + Florina Mitescu 3 F 0
    -
    -
    -
    + Gigi Florescu 29 M 1
    -
    -
    *
## Exemplu de OUTPUT :
    Ghita Ion 12 M
    Andrei Ionescu 73 M
    Florina Mitescu 3 F
    Anita Gheorghe 45 F
    Maria Ghitescu 23 F
    Gigi Florescu 29 M
    Ion Popescu 36 M


# EN LANGUAGE : 
# Hospital Pacients Management
A patient prioritization system designed to efficiently manage emergency room queues based on the severity of conditions and arrival order.

## 📋 Project Description
**HospitalPriorityQueue** is a C++ program that simulates the workflow of an Emergency Room (ER) by organizing and processing patient data in a structured and fair manner. The program uses a Priority Queue to ensure that patients with the most urgent needs are attended to first, while maintaining the order of arrival for patients with the same priority level.

### 🏥 Features
- **Dynamic Patient Management**: Add, process, and remove patients from the queue seamlessly.
- **Priority-Based System**: Patients are served in the order of their medical priority (0 = highest priority).
- **Arrival Order Guarantee**: For patients with the same priority, the one who arrived first is processed first.
- **Memory Safety**: Proper memory management ensures smooth program termination and prevents leaks.

## 🛠️ Technologies Used
- **C++**: Core programming language.
- **Custom Data Structures**: Implementation of a Priority Queue tailored to ER requirements.
- **Header Files**: Modular design with `Patient.h` and `PriorityQueue.h`.

## 📖 How It Works
1. **Input Commands**:
   - `+ NAME SURNAME AGE SEX PRIORITY`: Adds a new patient to the queue.
   - `-`: Processes and displays the next patient in the queue based on priority and arrival order.
   - `*`: Frees allocated memory and stops the program.

2. **Queue Rules**:
   - Patients with higher priority (lower numeric value) are served first.
   - If priorities are equal, the first patient to arrive is served.

## Sample Input:
    + Ion Popescu 36 M 3
    + Maria Ghitescu 23 F 2
    + Ghita Ion 12 M 0
    + Andrei Ionescu 73 M 0
    -
    + Anita Gheorghe 45 F 1
    -
    + Florina Mitescu 3 F 0
    -
    -
    -
    + Gigi Florescu 29 M 1
    -
    -
    *
  ## Sample Output :
    Ghita Ion 12 M
    Andrei Ionescu 73 M
    Florina Mitescu 3 F
    Anita Gheorghe 45 F
    Maria Ghitescu 23 F
    Gigi Florescu 29 M
    Ion Popescu 36 M

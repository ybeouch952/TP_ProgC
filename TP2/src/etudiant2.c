#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;
    float note_sys;
} Etudiant;

int main() {
    Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Bd Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Bd Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Luc");
    strcpy(etudiants[2].adresse, "10, Rue Voltaire, Paris");
    etudiants[2].note_prog = 13.5;
    etudiants[2].note_sys = 16.0;

    strcpy(etudiants[3].nom, "Lemoine");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "5, Av des Champs, Paris");
    etudiants[3].note_prog = 17.0;
    etudiants[3].note_sys = 13.5;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Claire");
    strcpy(etudiants[4].adresse, "1, Place Liberté, Lille");
    etudiants[4].note_prog = 15.0;
    etudiants[4].note_sys = 14.5;

    for(int i=0; i<5; i++) {
        printf("Étudiant.e %d :\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.1f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.1f\n\n", etudiants[i].note_sys);
    }

    return 0;
}

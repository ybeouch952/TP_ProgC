#include <stdio.h>

int main() {
    char noms[5][20] = {"Dupont", "Martin", "Durand", "Lemoine", "Moreau"};
    char prenoms[5][20] = {"Marie", "Pierre", "Luc", "Sophie", "Claire"};
    char adresses[5][50] = {
        "20, Bd Niels Bohr, Lyon",
        "22, Bd Niels Bohr, Lyon",
        "10, Rue Voltaire, Paris",
        "5, Av des Champs, Paris",
        "1, Place Liberté, Lille"
    };
    float notes_prog[5] = {16.5, 14.0, 13.5, 17.0, 15.0};
    float notes_sys[5] = {12.1, 14.1, 16.0, 13.5, 14.5};

    for(int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.1f\n\n", notes_sys[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

double moyenne(float sum, float size);
void showMenu();
void add();
void sus();
void mul();
void divi();
void generateUniqueRandom(int nb1, int* num, int* randomNumbers, int count);
void turnTab(int n, signed char tab[][n]);
void displayTab(int n, char tab[][n]);

int main(void) {

    /**
     * TP du PDF R0
     */
    printf("TP/TD Revisions 1\n\n");
    printf("Exercice 0\n");
    printf("Hello, World!\n");
    printf("\n");


    printf("Exercice 1\n");
    float noteFilm = 0;

    printf("Votre note au film 'Thor: Love and thunder' sur 20 : " );

    scanf("%f", &noteFilm);


    while(noteFilm < 0){
        printf("Erreur, la note doit etre superieur a 0 \n");
        printf("Votre note au film 'Thor: Love and thunder' sur 20 : " );
        scanf("%f", &noteFilm);
        printf("\n");
    }
    while (noteFilm > 20){
        printf("Erreur, la note ne doit pas exceder 20\n");
        printf("Votre note au film 'Thor: Love and thunder' sur 20 : " );
        scanf("%f", &noteFilm);
        printf("\n");
    }

    printf("Note donnee : %.2f /20 \n", noteFilm);

    printf("Note sur 100 : %.2f /100\n", noteFilm*5);

    printf("Note sur 5 : %.2f /5\n", noteFilm/4);
    printf("\n");

    printf("Exercice 1.2\n");

    float note = 0, note2 = 0, note3 = 0, note4 = 0, note5 = 0;
    float size = 5;
    signed char films[][30]={
            "Transformers",
            "Asterix et Obelix",
            "Spiderman",
            "la planete des singes",
            "Avatar: the last Airbender"
    };

    printf("Voici des noms de films : \n");
    printf("%s\n", films[0]);
    printf("%s\n", films[1]);
    printf("%s\n", films[2]);
    printf("%s\n", films[3]);
    printf("%s\n", films[4]);

    printf("Quelle est votre note pour %s ? : ", films[0]);
    scanf("%f", &note);
    printf("\n");
    printf("\n");

    printf("Quelle est votre note pour %s ? : ", films[1]);
    scanf("%f", &note2);
    printf("\n");
    printf("\n");

    printf("Quelle est votre note pour %s ? : ", films[2]);
    scanf("%f", &note3);
    printf("\n");
    printf("\n");

    printf("Quelle est votre note pour %s ? : ", films[3]);
    scanf("%f", &note4);
    printf("\n");
    printf("\n");

    printf("Quelle est votre note pour %s ? : ", films[4]);
    scanf("%f", &note5);
    printf("\n");
    printf("\n");

    float sum = note + note2 + note3 + note4 + note5;

    printf("la moyenne est de : %.2f ", moyenne(sum,size));

    printf("\n Exercice 2\n");

    printf("Bienvenue dans notre calculatrice en cmd.\n");
    showMenu();

    int choice = 0;
    printf("Votre choix : ");
    scanf("%d", &choice);
    printf("\n");

    while (choice != 5){
        switch (choice) {
            case 1:
                printf("[ADDITION]\n");
                add();
                break;
            case 2:
                printf("[SOUSTRACTION]\n");
                sus();
                break;
            case 3:
                printf("[MULTIPLICATION]\n");
                mul();
                break;
            case 4:
                printf("[DIVISION]\n");
                divi();
                break;
            default:
                printf("Vous devez choisir entre 1 et 5");
                break;
        }
        showMenu();
        printf("\nVotre choix : ");
        scanf("%d", &choice);
    }
    if(choice == 5){
        printf("Au revoir");
    }

    printf("\n Exercice 3\n");
    int nb1 = 0, nb2 = 0, alea;
    printf("[LOTERIE]\n\n");
    printf("Nombre de tickets mis en jeu : ");
    scanf("%d", &nb1);
    int num[nb1+1];
    do {
        printf("Nombre de lots : ");
        scanf("%d", &nb2);
        if(nb2>nb1){
            printf("Erreur, le nombre de lots doit être inferieur ou egale au nombre de tickets\n\n");
        }
    }
    while (nb2>nb1 && nb2 != 0);

    printf("Tickets : \n");
    for (int i = 0; i < nb1; ++i) {
        scanf("%d",&num[i]);
    }

    printf("[TICKETS GAGNANTS]\n");
    int randomNumbers[3];
    generateUniqueRandom(nb1, num, randomNumbers, 3);


    printf("Exercice 4\n");
    int n = 0;

    printf("[Sens dessus dessous]\n\n");
    printf("Taille du tableau : ");
    scanf("%d", &n);
    printf("\n Cases :  \n");

    signed char tab[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf(" %c", &tab[i][j]);
        }
    }

    printf("\ntableau originale :\n");
    displayTab(n, tab);

    // Rotation de 90 degrés
    turnTab(n, tab);

    printf("\n  |\n");
    printf("  |\n");
    printf("  V\n\n");

    printf("\ntableau pivotee de 90 degres :\n");
    displayTab(n, tab);
    return 0;
}

double moyenne(float sum, float size) {
    return sum/size;
}

void showMenu(){
    printf("\n\nChoisissez une operation.\n"
           "\n"
           "[Menu]\n"
           "\n"
           "1. Addition\n"
           "2. Soustraction\n"
           "3. Multiplication\n"
           "4. Division\n"
           "5. Quitter le programme\n"
           "\n");
}

//Addition
void add(){
    int a = 0, b = 0;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    printf("%d + %d = %d",a,b, a+b);
}

//Soustraction
void sus(){
    int a = 0, b = 0;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);

    printf("%d - %d = %d",a,b, a-b);
}

//Multiplication
void mul(){
    int a = 0, b = 0;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d", &b);

    printf("%d * %d = %d",a,b, a*b);
}

//Division
void divi(){
    int a = 0, b = 0;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d", &b);

    printf("%d / %d = %d",a,b, a/b);
}

//Generer un nombre random
void generateUniqueRandom(int nb1, int* num, int* randomNumbers, int count) {
    for (int i = 0; i < count; ++i) {
        int r = 0;
        do {
            r = rand() % nb1;
        } while (randomNumbers[0] == r || randomNumbers[1] == r || randomNumbers[2] == r);
        randomNumbers[i] = r;
        printf("LOT %d : %d\n", i + 1, num[r]);
    }
}

//tourne un tableau de 90 degrés
void turnTab(int n, signed char tab[][n]){

    char temp[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Échanger les éléments mat[i][j] et mat[j][i]
            char tempChar = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = tempChar;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {

            char tempChar = tab[i][j];
            tab[i][j] = tab[i][n - 1 - j];
            tab[i][n - 1 - j] = tempChar;
        }
    }
}
void displayTab(int n, char tab[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
}
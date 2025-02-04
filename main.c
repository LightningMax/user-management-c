#include <stdio.h>
#include <string.h>

typedef struct User {
    char id[10];
    char nom[50];
    char prenom[50];
    int age;
} User;

User users[10];

User creer_user(const char* nom, const char* prenom, int age) {
    User user;
    
    strcpy(user.nom, nom);
    strcpy(user.prenom, prenom);
    user.age = age;

    return user;
}

User test_creer_user() {
    const char noms[10][50] = {
        "Dupont",
        "Lambert",
        "Morel",
        "Bernard",
        "Lefevre",
        "Renaud",
        "Marchand",
        "Girard",
        "Perrin",
        "Fontaine"
    };

    const char prenoms[10][50] = {
        "Martin",
        "Sophie",
        "Julien",
        "Claire",
        "Thomas",
        "Emma",
        "Lucas",
        "Charlotte",
        "Hugo",
        "Alice"
    };

    const int ages[10] = {35, 25, 32, 30, 28, 52, 33, 23, 29, 44};

    for (int i = 0; i < 10; i++) {
        User user = creer_user(noms[i], prenoms[i], ages[i]);
        sprintf(user.id, "%d", i+1);
        
        users[i] = user;
    }
}



int main(void) {
    test_creer_user();

    for (int i = 0; i < 10; i++) {
        printf("id: %s\tnom: %s\n", users[i].id, users[i].nom);
    }

    return 0;
}
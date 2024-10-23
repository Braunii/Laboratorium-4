// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennej przechowuj¹cej wiek
    int wiek;

    // Pobranie wieku od u¿ytkownika
    printf("Podaj wiek: ");
    scanf("%d", &wiek);

    /* Instrukcja warunkowa, która sprawdza czy osoba
    jest niepe³noletnia lub jest seniorem*/
    if (wiek < 18 || wiek > 65){
        printf("Osoba jest niepelnoletnia lub jest seniorem\n");
    }
    else if (!(wiek < 18 || wiek > 65)){
        printf("Osoba nie jest pelnoletnia i nie jest seniorem\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwrócenie 0
    return 0;
}

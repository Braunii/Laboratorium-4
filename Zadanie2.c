// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennej przechowuj�cej wiek
    int wiek;

    // Pobranie wieku od u�ytkownika
    printf("Podaj wiek: ");
    scanf("%d", &wiek);

    /* Instrukcja warunkowa, kt�ra sprawdza czy osoba
    jest niepe�noletnia lub jest seniorem*/
    if (wiek < 18 || wiek > 65){
        printf("Osoba jest niepelnoletnia lub jest seniorem\n");
    }
    else if (!(wiek < 18 || wiek > 65)){
        printf("Osoba nie jest pelnoletnia i nie jest seniorem\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwr�cenie 0
    return 0;
}

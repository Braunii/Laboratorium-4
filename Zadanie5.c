// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Zdefiniowanie progów
#define PROG_2 50
#define PROG_3 60
#define PROG_4 75
#define PROG_5 90

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennej przechowuj¹cej punkty
    int punkty;

    // Pobranie punktów od u¿ytkownika
    printf("Wprowadz ilosc punktow (0 - 100): ");
    scanf("%d", &punkty);

    // Instrukcja warunkowa wyœwietlaj¹ca ocenê na podstawie punktów
    if (punkty >= PROG_2 && punkty < PROG_3){
        printf("Dostajesz 2\n");
    }
    else if (punkty >= PROG_3 && punkty < PROG_4){
        printf("Dostajesz 3\n");
    }
    else if (punkty >= PROG_4 && punkty < PROG_5){
        printf("Dostajesz 4\n");
    }
    else if (punkty > PROG_5 || punkty == PROG_5){
        printf("Dostajesz 5\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwrócenie 0
    return 0;
}

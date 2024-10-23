// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Zdefiniowanie prog�w
#define PROG_2 50
#define PROG_3 60
#define PROG_4 75
#define PROG_5 90

// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennej przechowuj�cej punkty
    int punkty;

    // Pobranie punkt�w od u�ytkownika
    printf("Wprowadz ilosc punktow (0 - 100): ");
    scanf("%d", &punkty);

    // Instrukcja warunkowa wy�wietlaj�ca ocen� na podstawie punkt�w
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

    // Zwr�cenie 0
    return 0;
}

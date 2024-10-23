// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennych
    int a;
    int b;

    // Pobranie danych od u¿ytkownika
    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    // Warunek sprawdzaj¹cy czy obie liczby s¹ dodatnie
    if (a > 0 && b > 0){
        printf("Obie liczby sa dodatnie\n");
    }
    else if (a > 0 && b <= 0){
        printf("Tylko a jest dodatnie\n");
    }
    else if (a <= 0 && b > 0){
        printf("Tylko b jest dodatnie\n");
    }
    else {
        printf("Obie liczby sa niedodatnie\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwrócenie 0
    return 0;
}

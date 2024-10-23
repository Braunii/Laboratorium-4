// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Zdefiniowanie funkcji MAX
#define MAX(a,b)((a > b) ? (a):(b))

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennych
    int a;
    int b;
    int c;

    // Pobranie danych od u¿ytkownika
    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    printf("Podaj liczbe c: ");
    scanf("%d", &c);

    // Warunek wypisuj¹cy najwiêksz¹ liczbê w konsoli
    if (MAX(a,b) == a && MAX(a,c) == a){
        printf("Najwieksza liczba to %d\n", a);
    }
    else if (MAX(b,a) == b && MAX(b,c) == b){
        printf("Najwieksza liczba to %d\n", b);
    }
    else if (MAX(c,a) == c && MAX(c,b) == c){
        printf("Najwieksza liczba to %d\n", c);
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwrócenie 0
    return 0;
}

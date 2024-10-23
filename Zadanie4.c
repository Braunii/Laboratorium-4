// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Zdefiniowanie zmiennych przechowuj¹cych kody
#define ADMIN_CODE 1234
#define USER_CODE 5678

// Zdefiniowanie funkcji
#define IS_ADMIN(x)((x) == ADMIN_CODE)
#define IS_USER(x)((x) == USER_CODE)
#define HAS_ACCESS(x)(IS_ADMIN(x) || IS_USER(x))

// Funkcja g³ówna
int main()
{
    // Zdefiniowanie zmiennej przechowuj¹cej kod wpisany przez u¿ytkownika
    int kod;

    // Pobranie kodu od u¿ytkownika
    printf("Podaj kod: ");
    scanf("%d", &kod);

    /* Warunek sprawdzaj¹cy czy u¿ytkownik wpisa³ poprawny kod i czy jest
    adminem czy u¿ytkownikiem */
    if (HAS_ACCESS(kod) && IS_ADMIN(kod)){
        printf("Masz dostep jako administrator\n");
    }
    else if (HAS_ACCESS(kod) && IS_USER(kod)){
        printf("Masz dostep jako uzytkownik\n");
    }
    else if (!HAS_ACCESS(kod)){
        printf("Nie masz dostepu\n");
    }

    // Zatrzymanie konsoli
    system("pause");

    // Zwrócenie 0
    return 0;
}

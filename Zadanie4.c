// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Zdefiniowanie zmiennych przechowuj�cych kody
#define ADMIN_CODE 1234
#define USER_CODE 5678

// Zdefiniowanie funkcji
#define IS_ADMIN(x)((x) == ADMIN_CODE)
#define IS_USER(x)((x) == USER_CODE)
#define HAS_ACCESS(x)(IS_ADMIN(x) || IS_USER(x))

// Funkcja g��wna
int main()
{
    // Zdefiniowanie zmiennej przechowuj�cej kod wpisany przez u�ytkownika
    int kod;

    // Pobranie kodu od u�ytkownika
    printf("Podaj kod: ");
    scanf("%d", &kod);

    /* Warunek sprawdzaj�cy czy u�ytkownik wpisa� poprawny kod i czy jest
    adminem czy u�ytkownikiem */
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

    // Zwr�cenie 0
    return 0;
}

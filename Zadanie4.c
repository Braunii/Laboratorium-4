// Dołączenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Zdefiniowanie zmiennych przechowujących kody
#define ADMIN_CODE 1234
#define USER_CODE 5678

// Zdefiniowanie funkcji
#define IS_ADMIN(x)((x) == ADMIN_CODE)
#define IS_USER(x)((x) == USER_CODE)
#define HAS_ACCESS(x)(IS_ADMIN(x) || IS_USER(x))

// Funkcja główna
int main()
{
    // Zdefiniowanie zmiennej przechowującej kod wpisany przez użytkownika
    int kod;

    // Pobranie kodu od użytkownika
    printf("Podaj kod: ");
    scanf("%d", &kod);

    /* Warunek sprawdzający czy użytkownik wpisał poprawny kod i czy jest
    adminem czy użytkownikiem */
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

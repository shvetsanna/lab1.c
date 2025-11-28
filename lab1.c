// Без логічних операцій
#include <stdio.h>

int main() {
    int x, y;

    printf("Введіть x: ");
    scanf("%d", &x);

    if (x > -15) {
        if (x <= 3)
            y = 4*x*x + 2;
        else {
            printf("Функція не існує\n");
            return 0;
        }
    } 
    else {
        if (x <= -30)
            y = 3*x/4 - 5;
        else if (x > 20)
            y = 3*x/4 - 5;
        else {
            printf("Функція не існує\n");
            return 0;
        }


// З логічними операціями
        
        #include <stdio.h>

int main() {
    int x, y;

    printf("Введіть x: ");
    scanf("%d", &x);

    printf("[LOG] Отримано x = %d\n", x);

    if ((x > -15) && (x <= 3)) {
        printf("[LOG] Виконується формула y = 4*x*x + 2\n");
        y = 4*x*x + 2;
    }
    else if ((x <= -30) || (x > 20)) {
        printf("[LOG] Виконується формула y = 3*x/4 - 5\n");
        y = 3*x/4 - 5;
    }
    else {
        printf("[LOG] Значення x не належить жодному інтервалу\n");
        printf("Функція не існує\n");
        return 0;
    }

    printf("[LOG] Результат y = %d\n", y);
    printf("y = %d\n", y);

    return 0;
}
    }

    printf("y = %d\n", y);
    return 0;
}

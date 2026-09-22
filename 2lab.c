#include <stdio.h>
#include <math.h>
#include <string.h>

int group_number = 79;
int variant_number = 22;

void check_sqrt(int variant_number, int name_len)
{
    int variant_sqrt = sqrt(variant_number);
    if (variant_sqrt > name_len)
    {
        printf("Сума чисел: %ds\n", (variant_sqrt + name_len));
    }
    else if (variant_sqrt < name_len)
    {
        printf("Добуток чисел: %dn\n", (variant_sqrt * name_len));
    }
    else
    {
        printf("Перше число: %dn\nДруге число: %d\n",variant_sqrt, name_len);
    }
}

void check_course(int group)
{
    switch (group)
    {
    case 75 ... 80:
        printf("Ви на 4 курсі\n");
        break;
    case 81 ... 86:
        printf("Ви на 3 курсі\n");
        break;
    case 87 ... 91:
        printf("Ви на 2 курсі\n");
        break;
    case 92 ... 99:
        printf("Ви на 1 курсі\n");
        break;
    default:
        printf("Не коректні данні\n");
        break;
    }
}



int main()
{
    int variant = 22;
    float fl = sinf(variant);
    printf("Мій варійант за журналом %d. Його Sin = %f\n", variant, fl);


    char name[] = "Ярослав";
    const int NAME_NUMBER = 7;

    printf("%d %d %s\n", group_number, variant_number, name);

    double pi_mnog = variant_number * 3.14;
    int pi_mnog_prevedene = (int) pi_mnog;

    printf("Группа:%d, Варіант:%d, Ім'я:%s,\nДобуток = %f, Конвертований = %d\n", group_number, variant_number, name, pi_mnog, pi_mnog_prevedene);

    int sum = 0;

    for (int i = NAME_NUMBER + variant_number; i > 0; i--)
    {
        sum += i;
    }

    printf("Кількість літер у повному імені (name_number):%d\nНомер за журналом:%d\nCума усіх чисел від до суми:%d\n", NAME_NUMBER, variant_number, sum);

    check_sqrt(variant_number, strlen(name));
    
    int inputGroupNum = 0;
    printf("Введіть групу: ");
    scanf("%d", &inputGroupNum);
    check_course(inputGroupNum);


    return 0;
}

// Компилить собака - 'gcc 2lab.c -lm -o lab

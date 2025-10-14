#include <cstdio>
#include <algorithm>

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    
    // Сортируем размеры первой коробки
    int sides1[3] = {a1, b1, c1};
    std::sort(sides1, sides1 + 3);
    
    // Сортируем размеры второй коробки
    int sides2[3] = {a2, b2, c2};
    std::sort(sides2, sides2 + 3);
    
    // Проверяем, помещается ли первая коробка во вторую
    int first_in_second = 1;
    for (int i = 0; i < 3; i++) {
        if (sides1[i] > sides2[i]) {
            first_in_second = 0;
            break;
        }
    }
    
    // Проверяем, помещается ли вторая коробка в первую
    int second_in_first = 1;
    for (int i = 0; i < 3; i++) {
        if (sides2[i] > sides1[i]) {
            second_in_first = 0;
            break;
        }
    }
    
    // Выводим результат согласно условию
    if (first_in_second && second_in_first) {
        printf("Boxes are equal");
    } else if (first_in_second) {
        printf("The first box is smaller than the second one");
    } else if (second_in_first) {
        printf("The first box is larger than the second one");
    } else {
        printf("Boxes are incomparable");
    }
    
    return 0;
}
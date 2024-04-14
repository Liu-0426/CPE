#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // 輸入係數值
    printf("請輸入a、b、c三個浮點數的值，用空格隔開：");
    scanf("%f %f %f", &a, &b, &c);

    // 計算判別式
    discriminant = b * b - 4 * a * c;

    // 判斷根的個數
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("方程式有兩個實根：%.2f 和 %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("方程式有兩個相等實根：%.2f\n", root1);
    } else {
        printf("方程式沒有實根\n");
    }

    return 0;
}

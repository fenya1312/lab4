#include <stdio.h>
#include <math.h>

void task1();
void task73();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();

int main() {
    task1();
    task73();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();

    return 0;
}

// 1. 66
void task1() {
    printf("Task 1\n");
    double base;
    int exp;

    printf("Enter number: ");
    scanf_s("%lf", &base);
    printf("Enter integer exponent: ");
    scanf_s("%d", &exp);

    double result = 1.0;
    int abs_exp = exp < 0 ? -exp : exp;

    for (int i = 0; i < abs_exp; i++) {
        result *= base;
    }

    if (exp < 0) {
        result = 1.0 / result;
    }

    printf("Result: %.2f to the power of %d = %.6f\n\n", base, exp, result);
}

// 2. 73
void task73() {
    printf("Task 2\n");
    int n;
    printf("Enter n: ");
    scanf_s("%d", &n);

    double sum = 1.0; // Початкова сума 1
    double fact = 1.0;

    for (int i = 1; i <= n; i++) {
        fact *= i;          // Обчислюємо факторіал
        sum += 1.0 / fact;  // Додаємо 1/i!
    }

    printf("Sum of the series for n = %d equals %.6f\n\n", n, sum);
}

// 3. 92
void task3() {
    printf("Task 3\n");
    int n = 20;
    int grade;
    int sum = 0;
    printf("Enter the grades of 20 students\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf_s("%d", &grade);
        sum += grade;
    }
    printf("Average grade for the class = %.2f\n\n", (float)sum / n);
}

//4. 129
void task4() {
    printf("Task 4\n");
    for (int num = 1000; num <= 9999; num++) {
        int temp = num;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, 5);
            temp /= 10;
        }
        if (sum == num) {
            printf("Found number: %d\n", num);
        }
    }
    printf("\n");
}

// 5. 190
void task5() {
    printf("Task 5\n");
    double n;
    printf("Enter n: ");
    scanf_s("%lf", &n);

    double sum = 1;
    int target_i = 1;

    for (int i = 2; i <= 10000; i++) {
        sum += 1.0 / i;
        if (sum > n) {
            target_i = i;
            break;
        }
    }
    printf("First sum greater than %.2f: %.6f (at step i = %d)\n\n", n, sum, target_i);
}

//6. 1
void task6() {
    printf("Task 6\n");
    int num, rev = 0;
    printf("Enter a natural number: ");
    scanf_s("%d", &num);

    int temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("Original number: %d, Reversed: %d\n", num, rev);
    if (num > rev) printf("Original number is larger.\n");
    else if (num < rev) printf("Reversed number is larger.\n");
    else printf("Numbers are equal.\n");
    printf("\n");
}

//7. 128
void task7() {
    printf("Task 7\n");
    int found = 0;
    for (int num = 10; num <= 99; num++) {
        int tens = num / 10;
        int units = num % 10;

        if (num == (tens * tens * tens + units * units)) {
            printf("Found number: %d\n", num);
            found = 1;
        }
    }
    if (!found) {
        printf("No such two-digit numbers exist.\n");
    }
    printf("\n");
}

//8.17
void task8() {
    printf("Task 8\n");
    int n;
    printf("Enter n: ");
    scanf_s("%d", &n);
    if (n < 1 || n > 9) {
        printf("Error: the number must be between 1 and 9.\n");
    }
    else {
        for (int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    printf("\n");
}

//9.234
void task9() {
    printf("Task 9\n");
    double a, b, x;
    printf("Enter a: ");
    scanf_s("%lf", &a);
    printf("Enter b: ");
    scanf_s("%lf", &b);
    printf("Enter x: ");
    scanf_s("%lf", &x);

    printf("\n  x  |  F(x)\n");
    for (double current_x = a; current_x <= b + 1e-9; current_x += x) { // Додав 1e-9 для точності
        if (current_x < 0) {
            printf("%.2f | Error (radicand < 0)\n", current_x);
            continue;
        }
        double fx = sqrt(current_x) * pow(cos(current_x), 2);
        printf("%.2f | %.4f\n", current_x, fx);
    }
    printf("\n");
}

//10. 225
void task10() {
    printf("Task 10\n");
    double a, b, x;
    printf("Enter a: ");
    scanf_s("%lf", &a);
    printf("Enter b: ");
    scanf_s("%lf", &b);
    printf("Enter x: ");
    scanf_s("%lf", &x);

    printf("\n  x  |  F(x)\n");
    for (double current_x = a; current_x <= b + 1e-9; current_x += x) { // Додав 1e-9 для точності
        double fx = pow(sin(current_x), 2);
        printf("%.2f | %.4f\n", current_x, fx);
    }
    printf("\n");
}
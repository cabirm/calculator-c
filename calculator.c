#include <stdio.h>

int main() {
    double sayi1, sayi2;
    char islem;

    printf("=== HESAP MAKINESI ===\n");

    printf("Birinci sayiyi girin: ");
    scanf("%lf", &sayi1);

    printf("Islem secin (+, -, *, /): ");
    scanf(" %c", &islem);

    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    switch (islem) {
        case '+':
            printf("Sonuc: %.2lf\n", sayi1 + sayi2);
            break;

        case '-':
            printf("Sonuc: %.2lf\n", sayi1 - sayi2);
            break;

        case '*':
            printf("Sonuc: %.2lf\n", sayi1 * sayi2);
            break;

        case '/':
            if (sayi2 != 0) {
                printf("Sonuc: %.2lf\n", sayi1 / sayi2);
            } else {
                printf("Hata: Sifira bolme yapilamaz!\n");
            }
            break;

        default:
            printf("Gecersiz islem secildi!\n");
    }

    return 0;
}

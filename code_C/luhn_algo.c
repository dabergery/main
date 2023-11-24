#include <stdio.h>
#include <string.h>

int luhn_algorithm(char *card_number) {
    int len = strlen(card_number);
    int sum = 0;
    int alternate = 0;

    for (int i = len - 1; i >= 0; i--) {
        int digit = card_number[i] - '0';

        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        alternate = !alternate;
    }

    return (sum % 10 == 0);
}

int main() {
    char card_number[20];

    printf("Entrez le numero de la carte bancaire : ");
    scanf("%s", card_number);

    if (luhn_algorithm(card_number)) {
        printf("Le numero de carte bancaire est valide.\n");
    } else {
        printf("Le numero de carte bancaire n'est pas valide.\n");
    }

    return 0;
}

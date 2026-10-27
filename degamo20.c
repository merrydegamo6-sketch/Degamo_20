#include <stdio.h>

int main() {
    int households, i;
    int above100 = 0;
    float kwh, bill;
    float totalKwh = 0, totalBill = 0;

    printf("Enter number of households: ");
    scanf("%d", &households);

    for (i = 1; i <= households; i++) {
        printf("\nHousehold %d\n", i);
        printf("Enter electricity consumption (kWh): ");
        scanf("%f", &kwh);

        if (kwh <= 100) {
            bill = kwh * 10;
        } else {
            bill = (100 * 10) + ((kwh - 100) * 12);
            above100++;
        }

        printf("Electricity consumption: %.2f kWh\n", kwh);
        printf("Electricity bill: P%.2f\n", bill);

        totalKwh += kwh;
        totalBill += bill;
    }

    printf("\n===== SUMMARY =====\n");
    printf("Total electricity consumption: %.2f kWh\n", totalKwh);
    printf("Total billing amount: P%.2f\n", totalBill);
    printf("Households consuming more than 100 kWh: %d\n",
           above100);

    return 0;
}

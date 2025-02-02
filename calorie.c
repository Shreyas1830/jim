#include <stdio.h>

float male(int m_age, float height, float m_weight, float activity_lv) {
    float BMR = (10 * m_weight) + (6.25 * height) - (5 * m_age) + 5;
    return BMR * activity_lv;
}

float female(int f_age, float height, float f_weight, float activity_lv) {
    float BMR = (10 * f_weight) + (6.25 * height) - (5 * f_age) - 161;
    return BMR * activity_lv;
}

int main() {
    int gender, age, choice;
    float activity_lv, weight, height;

    printf("Enter gender:\n");
    printf("1. Male\n2. Female\n3. Other\n");
    scanf("%d", &gender);

    switch (gender) {
        case 1:
        case 2:
            break;
        case 3:
            printf("This app is not for them.\n");
            return 0; 
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            return 1; 
    }

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your Height in cm: ");
    scanf("%f", &height);
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("\nSelect your activity level:\n");
    printf("1. Sedentary (Little to no exercise)\n");
    printf("2. Lightly Active (Light exercise 1-3 days/week)\n");
    printf("3. Moderately Active (Moderate exercise 3-5 days/week)\n");
    printf("4. Very Active (Hard exercise 6-7 days/week)\n");
    printf("5. Super Active (Intense daily exercise or physical job)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            activity_lv = 1.2;
            break;
        case 2:
            activity_lv = 1.375;
            break;
        case 3:
            activity_lv = 1.55;
            break;
        case 4:
            activity_lv = 1.725;
            break;
        case 5:
            activity_lv = 1.9;
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
            return 1;
    }

    float maintenanceCalories;
    if (gender == 1) {
        maintenanceCalories = male(age, height, weight, activity_lv);
        printf("\nYour maintenance calories are: %.2f kcal\n", maintenanceCalories);
    } else if (gender == 2) {
        maintenanceCalories = female(age, height, weight, activity_lv);
        printf("\nYour maintenance calories are: %.2f kcal\n", maintenanceCalories);
    }

    return 0;
}

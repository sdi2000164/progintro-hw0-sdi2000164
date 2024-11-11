#include <stdio.h>
#include <stdlib.h>

int main() {
    long long left_cost, right_cost; // long long για να μπορώ να έχω -10^18 μέχρι 10^18 τιμές

    while (1) {
        // Ζητά από το χρήστη το κόστος για την αριστερή επιλογή
        printf("Please enter the cost of going left: ");
        long long left_input = scanf("%lld", &left_cost);
        if (left_input == EOF) {
            // Τερματίζει με κωδικό εξόδου 0 αν φτάσει σε EOF για την αριστερή επιλογή
            printf("Terminating.\n");
            return 0;
        } else if (left_input != 1) {
            // Αν δεν υπάρχει έγκυρη είσοδος για το αριστερό κόστος, εμφανίζει μήνυμα και τερματίζει με κωδικό εξόδου 1
            printf("Terminating.\n");
            return 1;
        }

        // Ζητά από το χρήστη το κόστος για την δεξιά επιλογή
        printf("Please enter the cost of going right: ");
        long long right_input = scanf("%lld", &right_cost);
        if (right_input == EOF) {
            // Τερματίζει με κωδικό εξόδου 0 αν φτάσει σε EOF για την δεξιά επιλογή
            printf("No right cost provided.\n");
            return 1;
        } else if (right_input != 1) {
            // Αν δεν υπάρχει έγκυρη είσοδος για το δεξί κόστος, εμφανίζει μήνυμα και τερματίζει με κωδικό εξόδου 1
            printf("Terminating.\n");
            return 1;
        }

        // Επιλέγει την επιλογή με το μικρότερο κόστος
        if (left_cost < right_cost) {
            printf("Go left.\n");
        } else if (right_cost < left_cost) {
            printf("Go right.\n");
        } else {
            // Αν είναι ίσα, επιλέγει "Go left"
            printf("Go left.\n");
        }
    }
}
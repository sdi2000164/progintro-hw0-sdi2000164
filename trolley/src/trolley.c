#include <stdio.h>

int main() {
    long long int leftTrack, rightTrack; //long long int to fit -10^18 to 10^18

    // Loop continues until the user provides invalid input or reaches EOF
    while (1) {
        // Getting the number of people on the left track with input validation
        printf("Please enter the cost of going left: ");
        if (scanf("%lld", &leftTrack) != 1) {
            if (scanf("%lld", &leftTrack) == EOF){
                        break;
                }
            else{
                printf("Terminating.\n");
                        return 1;
                }
        }

        // Getting the number of people on the right track with input validation

        printf("Please enter the cost of going right: ");
        if (scanf("%lld", &rightTrack) != 1) {
            if (scanf("%lld", &rightTrack) == EOF){
                        break;
                }
            else{
                printf("Terminating.\n");
                        return 1;
                }
        }

        // Decide which track to suggest based on the number of people
        if (leftTrack < rightTrack) {
            printf("Go left.\n");
        }
        else if (rightTrack < leftTrack) {
            printf("Go right.\n");
        }
        else {
            // If both tracks have the same number of people, choose the left track
            printf("Go left.\n");
        }
    }

    printf("Terminating.\n");

    return 0;
}

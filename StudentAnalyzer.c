#include <stdio.h>

float calculate_avergage(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (float)sum / n;
}

int find_max_score(int scores[], int n) {
    int max_score = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    return max_score;
}

int find_lowest_score(int scores[], int n) {
    int lowest_score = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] < lowest_score) {
            lowest_score = scores[i];
        }
    }
    return lowest_score;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int scores[100];
    printf("Enter the scores of students out of 100 marks:\n");
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    

    float average = calculate_avergage(scores, n);
    int max_score = find_max_score(scores, n);
    int lowest_score = find_lowest_score(scores, n);

    printf("\n Stundent Score Analyzer report:\n");

    printf("Average Score: %.2f\n", average);
    printf("Maximum Score: %d\n", max_score);
    printf("Lowest Score: %d\n", lowest_score);

    return 0;
}
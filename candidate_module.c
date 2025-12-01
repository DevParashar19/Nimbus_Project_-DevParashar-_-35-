#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "project.h"

Candidate *candidates = NULL;
int candidateCount = 0;

void addCandidate() {
    Candidate *tmp = realloc(candidates, (candidateCount + 1) * sizeof(Candidate));
    if (!tmp) {
        fprintf(stderr, "Failed to allocate memory for new candidate.\n");
        return;
    }
    candidates = tmp;

    printf("\nEnter Candidate ID: ");
    if (scanf("%d", &candidates[candidateCount].candidateID) != 1) {
        fprintf(stderr, "Invalid input for Candidate ID.\n");
        int _ch;
        while ((_ch = getchar()) != '\n' && _ch != EOF);
        return;
    }
    int _ch;
    while ((_ch = getchar()) != '\n' && _ch != EOF);

    printf("Enter Candidate Name: ");
    if (fgets(candidates[candidateCount].name, sizeof(candidates[candidateCount].name), stdin) == NULL) {
        fprintf(stderr, "Failed to read candidate name.\n");
        return;
    }
    size_t len = strlen(candidates[candidateCount].name);
    if (len > 0 && candidates[candidateCount].name[len - 1] == '\n') {
        candidates[candidateCount].name[len - 1] = '\0';
    }

    candidates[candidateCount].votes = 0;
    candidateCount++;

    printf("Candidate Added Successfully!\n");
}

void displayCandidates() {
    printf("\n--- Candidate List ---\n");
    for(int i = 0; i < candidateCount; i++) {
        printf("%d. %s (ID: %d)\n", i+1, candidates[i].name, candidates[i].candidateID);
    }
}

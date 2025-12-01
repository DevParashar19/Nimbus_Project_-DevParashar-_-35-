#include "project.h"

Candidate candidates[50];
int candidateCount = 0;

void addCandidate() {
    printf("\nEnter Candidate ID: ");
    scanf("%d", &candidates[candidateCount].candidateID);

    printf("Enter Candidate Name: ");
    scanf("%s", candidates[candidateCount].candidateName);

    candidates[candidateCount].voteCount = 0;

    candidateCount++;
    printf("Candidate added successfully!\n");
}

void viewCandidates() {
    printf("\n---- Candidate List ----\n");

    for (int i = 0; i < candidateCount; i++) {
        printf("ID: %d | Name: %s | Votes: %d\n",
            candidates[i].candidateID,
            candidates[i].candidateName,
            candidates[i].voteCount
        );
    }
}


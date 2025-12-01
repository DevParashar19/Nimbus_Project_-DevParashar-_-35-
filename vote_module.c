#include <stdio.h>
#include "project.h"

unsigned int generateChecksum(int voterID, int candidateID) {
    return (voterID ^ candidateID);
}

void castVote() {
    int voterIndex = loginVoter();
    if (voterIndex == -1)
        return;

    printf("\n--- Cast Vote ---\n");
    listCandidates();

    int choice;
    printf("Enter Candidate ID to vote: ");
    scanf("%d", &choice);

    int found = -1;

    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].candidateID == choice) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid candidate!\n");
        return;
    }

    candidates[found].votes++;
    voters[voterIndex].hasVoted = 1;

    addAuditLog(voters[voterIndex].voterID, candidates[found].candidateID);

    printf("Vote cast successfully!\n");
}

#include "project.h"

void castVote() {
    int id;
    printf("\nEnter Voter ID: ");
    scanf("%d", &id);

    int voterIndex = searchVoter(id);
    if (voterIndex == -1) {
        printf("Voter not found!\n");
        return;
    }
    if (voters[voterIndex].hasVoted == 1) {
        printf("Voter already voted!\n");
        return;
    }

    viewCandidates();

    int choice;
    printf("\nEnter Candidate ID to vote: ");
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

    candidates[found].voteCount++;
    voters[voterIndex].hasVoted = 1;

    addAuditLog(voters[voterIndex].voterID, candidates[found].candidateID);

    printf("Vote cast successfully!\n");
}

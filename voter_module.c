#include "project.h"

Voter voters[50];
int voterCount = 0;

void registerVoter() {
    printf("\nEnter Voter ID: ");
    scanf("%d", &voters[voterCount].voterID);

    printf("Enter Voter Name: ");
    scanf("%s", voters[voterCount].voterName);

    voters[voterCount].hasVoted = 0;

    voterCount++;
    printf("Voter registered successfully!\n");
}

void listVoters() {
    printf("\n---- Registered Voters ----\n");

    for (int i = 0; i < voterCount; i++) {
        printf("ID: %d | Name: %s | Has Voted: %d\n",
            voters[i].voterID,
            voters[i].voterName,
            voters[i].hasVoted
        );
    }
}

int searchVoter(int id) {
    for (int i = 0; i < voterCount; i++) {
        if (voters[i].voterID == id)
            return i;
    }
    return -1;
}

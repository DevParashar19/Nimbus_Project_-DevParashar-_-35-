#include <stdio.h>
#include <string.h>
#include "project.h"

void registerVoter() {
    printf("\n--- Register Voter ---\n");
    printf("Enter Voter ID: ");
    scanf("%d", &voters[voterCount].voterID);

    printf("Enter Name: ");
    scanf("%s", voters[voterCount].name);

    printf("Set 4-digit PIN: ");
    scanf("%d", &voters[voterCount].pin);

    voters[voterCount].hasVoted = 0;

    voterCount++;
    printf("Voter registered successfully!\n");
}

int loginVoter() {
    int id, pin;
    printf("\nEnter Voter ID: ");
    scanf("%d", &id);
    printf("Enter PIN: ");
    scanf("%d", &pin);

    for (int i = 0; i < voterCount; i++) {
        if (voters[i].voterID == id && voters[i].pin == pin) {
            if (voters[i].hasVoted == 1) {
                printf("You have already voted!\n");
                return -1;
            }
            return i;
        }
    }
    printf("Invalid login!\n");
    return -1;
}

void listVoters() {
    printf("\n--- Voter List ---\n");
    for (int i = 0; i < voterCount; i++) {
        printf("ID: %d, Name: %s, Voted: %s\n",
            voters[i].voterID,
            voters[i].name,
            voters[i].hasVoted ? "Yes" : "No");
    }
}

#include <stdio.h>
#include "project.h"

Voter voters[50];
Candidate candidates[50];
AuditLog logs[200];

int voterCount = 0;
int candidateCount = 0;
int logCount = 0;

int main() {
    int choice;

    while (1) {
        printf("\n===== ELECTRONIC VOTING SYSTEM =====\n");
        printf("1. Register Voter\n");
        printf("2. Add Candidate\n");
        printf("3. Cast Vote\n");
        printf("4. List Candidates\n");
        printf("5. List Voters\n");
        printf("6. Show Audit Logs\n");
        printf("7. Verify Audit Logs\n");
        printf("8. Exit\n");
        printf("------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: registerVoter(); break;
            case 2: addCandidate(); break;
            case 3: castVote(); break;
            case 4: listCandidates(); break;
            case 5: listVoters(); break;
            case 6: showAuditLogs(); break;
            case 7: verifyAuditLogs(); break;
            case 8: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

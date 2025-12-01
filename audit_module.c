#include <stdio.h>
#include "project.h"

int main() {
    int choice;

    while (1) {
        printf("\n===== VOTING SYSTEM =====\n");
        printf("1. Register Voter\n");
        printf("2. Add Candidate\n");
        printf("3. Cast Vote\n");
        printf("4. List Voters\n");
        printf("5. View Candidates\n");
        printf("6. Show Audit Log\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: registerVoter(); break;
            case 2: addCandidate(); break;
            case 3: castVote(); break;
            case 4: listVoters(); break;
            case 5: viewCandidates(); break;
            case 6: showAuditLog(); break;
            case 7: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

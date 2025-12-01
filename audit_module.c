#include <stdio.h>
#include "project.h"

void addAuditLog(int voterID, int candidateID) {
    logs[logCount].logID = logCount + 1;
    logs[logCount].voterID = voterID;
    logs[logCount].candidateID = candidateID;
    logs[logCount].checksum = generateChecksum(voterID, candidateID);

    logCount++;
}

void showAuditLogs() {
    printf("\n--- Audit Logs ---\n");
    for (int i = 0; i < logCount; i++) {
        printf("LogID: %d | VoterID: %d | CandidateID: %d | Checksum: %u\n",
            logs[i].logID,
            logs[i].voterID,
            logs[i].candidateID,
            logs[i].checksum);
    }
}

void verifyAuditLogs() {
    printf("\n--- Verifying Logs ---\n");
    int tampered = 0;

    for (int i = 0; i < logCount; i++) {
        unsigned int expected = generateChecksum(logs[i].voterID, logs[i].candidateID);
        if (expected != logs[i].checksum) {
            tampered = 1;
            printf("Tampering detected in Log ID: %d!\n", logs[i].logID);
        }
    }

    if (!tampered)
        printf("All logs are intact. No tampering detected.\n");
}

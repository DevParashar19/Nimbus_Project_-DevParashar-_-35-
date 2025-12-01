#ifndef PROJECT_H
#define PROJECT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------------------- STRUCTS --------------------
typedef struct {
    int voterID;
    char voterName[100];
    int hasVoted;
} Voter;

typedef struct {
    int candidateID;
    char candidateName[100];
    int voteCount;
} Candidate;

typedef struct {
    int voterID;
    int candidateID;
} Audit;

// -------------------- GLOBAL ARRAYS --------------------
extern Voter voters[50];
extern int voterCount;

extern Candidate candidates[50];
extern int candidateCount;

extern Audit auditLogs[200];
extern int auditCount;

// -------------------- FUNCTION DECLARATIONS --------------------

// Voter module
void registerVoter();
void listVoters();
int searchVoter(int);

// Candidate module
void addCandidate();
void viewCandidates();

// Vote module
void castVote();

// Audit module
void addAuditLog(int voterID, int candidateID);
void showAuditLog();

#endif

#ifndef PROJECT_H
#define PROJECT_H

// ---------------- Structures ---------------- //
typedef struct {
    int voterID;
    char name[50];
    int pin;
    int hasVoted;
} Voter;

typedef struct {
    int candidateID;
    char name[50];
    int votes;
} Candidate;

typedef struct {
    int logID;
    int voterID;
    int candidateID;
    unsigned int checksum;
} AuditLog;

// ---------------- Function Declarations ---------------- //

// voter_module.c
void registerVoter();
int loginVoter();
void listVoters();

// candidate_module.c
void addCandidate();
void listCandidates();

// vote_module.c
void castVote();
unsigned int generateChecksum(int voterID, int candidateID);

// audit_module.c
void addAuditLog(int voterID, int candidateID);
void showAuditLogs();
void verifyAuditLogs();

// Common data
extern Voter voters[50];
extern Candidate candidates[50];
extern AuditLog logs[200];
extern int voterCount;
extern int candidateCount;
extern int logCount;

#endif

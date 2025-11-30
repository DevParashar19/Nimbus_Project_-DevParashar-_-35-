🧭 Introduction

This is our group's PPS project where we made Project simulating  a secure Electronic Voting System (EVS) similar to real digital voting machines.
the system demonstrates:

⭐Secure authentication

⭐Data integrity mechanisms

⭐Use of dynamic memory, pointers, and modular programming

⭐Proper separation of concerns using multiple .c files

⭐The system is simple but includes the core concepts used in real-world systems like EVMs and online voting portals.


It includes:


⭐Voter registration & authentication

⭐Candidate registration

⭐Secure vote casting (one vote per voter)

⭐Transaction logging with checksum-based tamper detection

⭐Audit trail & reporting

⭐Dynamic memory allocation for voters, candidates, and logs

⭐Modular design with 4 independent source files

We made this completely in C language using VS Code ,and the program runs in terminal/console only (no website or UI).


🚀 Key Features

🔐 Voter Registration & Authentication

1️⃣Unique voter IDs

2️⃣4-digit PIN system

3️⃣Verification of voter identity

4️⃣“One voter = one vote” enforcement

🗳 Candidate Registration

1️⃣Add unlimited candidates using dynamic memory

2️⃣Store candidate names and IDs

3️⃣Auto-tally votes

🧾 Vote Casting

1️⃣Voter logs in securely

2️⃣Chooses from available candidates

3️⃣Vote is added to the candidate

4️⃣Voter cannot vote twice

5️⃣Auto-generation of transaction logs

🧩 Audit Trail (Log System)

1️⃣Logs every vote:

2️⃣Voter ID

3️⃣Candidate ID

4️⃣Timestamp

5️⃣Auto-generated checksum

6️⃣Detects any manipulation in the data

📊 Results & Reporting

1️⃣Display final vote count

2️⃣Audit log verification output (OK / CORRUPTED)

🧠 Memory & Structure Concepts

1️⃣Dynamic memory (malloc, realloc)

2️⃣Pointers

3️⃣Multiple structures

4️⃣Modular code (5 files)



🏗 System Architecture




                +---------------------+
                |     main.c          |
                | (Menu + Control)    |
                +-----+---------+-----+
                      |         |
        ---------------------------------------
        |               |                    |
+---------------+ +----------------+ +-------------------+ +-----------------+
| voter_module  | | candidate_mod  | | vote_module       | | audit_module    |
| Registration  | | Add/Display    | | Cast Vote + Logs  | | Verify Checks   |
+---------------+ +----------------+ +-------------------+ +-----------------+




🚀 How to Run the Project

✅ 1.A C compiler installed

📁 2. Project Folder Setup

⚙️ 3. Compilation Command

▶️ 4. Run the Program

📌 5. Using the Program

🛠 6. Optional: Clean Build

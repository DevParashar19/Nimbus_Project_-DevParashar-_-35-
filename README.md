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

🔐 1️⃣ Voter Registration & Authentication

⭐Unique voter IDs

⭐4-digit PIN system

⭐Verification of voter identity

⭐“One voter = one vote” enforcement

🗳 2️⃣ Candidate Registration

⭐Add unlimited candidates using dynamic memory

⭐Store candidate names and IDs

⭐Auto-tally votes

🧾 3️⃣ Vote Casting

⭐Voter logs in securely

⭐Chooses from available candidates

⭐Vote is added to the candidate

⭐Voter cannot vote twice

⭐Auto-generation of transaction logs

🧩 4️⃣ Audit Trail (Log System)

⭐Logs every vote:

⭐Voter ID

⭐Candidate ID

⭐Timestamp

⭐Auto-generated checksum

⭐Detects any manipulation in the data

📊 5️⃣ Results & Reporting

⭐Display final vote count

⭐Audit log verification output (OK / CORRUPTED)

🧠 6️⃣ Memory & Structure Concepts

⭐Dynamic memory (malloc, realloc)

⭐Pointers

⭐Multiple structures

⭐Modular code (5 files)



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

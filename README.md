# netguard
NetGuard is a simple network security scanning tool written in C that automates common Nmap scanning tasks through an interactive terminal menu. It is designed for cybersecurity students, penetration testers, and security researchers to perform quick network reconnaissance.
Features

Basic Network Discovery Scan

Advanced Network Scan

SMB Service Analysis

SMTP Service Analysis

DNS Security Analysis

TCP Port Scanning

UDP Port Scanning

Operating System Detection

Requirements

Linux based system

Nmap installed

GCC compiler

Install Nmap if not installed:

sudo apt install nmap
Compilation

Compile the program using GCC:

gcc netguard.c -o netguard
Usage

Run the tool:

./netguard

Then choose a scan option from the interactive menu and provide the target IP address or network range.

Example:

Enter the target IP address or range: 192.168.1.1
Author

Developed by:

Inayat Hussain

Aisha

Faizan

(Offensive Cybersecurity Professionals)

Disclaimer

This tool is created for educational and authorized security testing purposes only. Do not use it on networks without proper permission.

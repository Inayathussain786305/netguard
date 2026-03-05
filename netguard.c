#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Function to display the custom banner
void displayBanner() {
    printf("\n");
    printf("         ▄▄▄▄▪  ▄▄▄      ▪   ▄▄▄     ▪   ▪  \n");
    printf("        ▐█▀█▌▐█▒▐█░▐█▒░▌░▪ ▐█▀█▌ ░▌  ▐▌▐ █▌·\n");
    printf("        ▐█░░▌▐▀▄▌▀▄███▄▀▪ ▐█░░▌  ▀▄ ██ ▄·\n");
    printf("        ▐█▄▌▐▀▄·▄▄▐█▀▐▒ ▬▐█▄▌ ▪  ▀·▀▀·\n\n");
    printf("              NetGuard - Network Security Tool\n");
    printf("                  Version 1.0\n");
    printf("  By Inayat Hussain, Aisha , Faizan( Offensive CyberSecurity professionals)\n\n");
}
// Function to check if nmap is installed
void checkNmapInstallation() {
    system("which nmap > /dev/null 2>&1");
    if (system("which nmap > /dev/null 2>&1") != 0) {
        printf("Error: nmap is not installed. Please install it first.\n");
        exit(1);
    }
}
// Function to perform a basic network scan
void basicNetworkScan() {
    char targetIP[50];
    printf("Enter the target IP address or range: ");
    scanf("%49s", targetIP);
    printf("\nRunning basic network scan on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap -sP %s", targetIP);
    system(command);
}
// Function to perform an advanced network scan
void advancedNetworkScan() {
    char targetIP[50];
    printf("Enter the target IP address or range: ");
    scanf("%49s", targetIP);
    printf("\nRunning advanced network scan on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap -A -T4 -vv %s", targetIP);
    system(command);
}
// Function to perform an SMB analysis
void smbAnalysis() {
    char targetIP[50];
    printf("Enter the target IP address: ");
    scanf("%49s", targetIP);
    printf("\nRunning SMB analysis on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap --script=smb-protocols.nse,smb-os-discovery.nse %s", targetIP);
    system(command);
}
// Function to perform an SMTP analysis
void smtpAnalysis() {
    char targetIP[50];
    printf("Enter the target IP address: ");
    scanf("%49s", targetIP);
    printf("\nRunning SMTP analysis on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap --script=smtp-commands.nse %s", targetIP);
    system(command);
}
// Function to perform a DNS analysis
void dnsAnalysis() {
    char targetIP[50];
    printf("Enter the target IP address: ");
    scanf("%49s", targetIP);
    printf("\nRunning DNS analysis on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap --script=dns-zone-transfer.nse,dns-brute.nse %s", targetIP);
    system(command);
}
// Function to perform a TCP port scan
void tcpPortScan() {
    char targetIP[50];
    printf("Enter the target IP address: ");
    scanf("%49s", targetIP);
    printf("\nRunning TCP port scan on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap -sT %s", targetIP);
    system(command);
}
// Function to perform a UDP port scan
void udpPortScan() {
    char targetIP[50];
    printf("Enter the target IP address: ");
    scanf("%49s", targetIP);
    printf("\nRunning UDP port scan on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap -sU %s", targetIP);
    system(command);
}
// Function to perform OS detection
void osDetection() {
    char targetIP[50];
    printf("Enter the target IP address: ");
    scanf("%49s", targetIP);
    printf("\nRunning OS detection on %s...\n", targetIP);
    char command[100];
    snprintf(command, sizeof(command), "nmap -O %s", targetIP);
    system(command);
}
// Main function
int main() {
    int choice;
    
    displayBanner();
    checkNmapInstallation();
    
    while(1) {
        printf("\nNetGuard Menu:\n");
        printf("1. Basic Network Scan\n");
        printf("2. Advanced Network Scan\n");
        printf("3. SMB Analysis\n");
        printf("4. SMTP Analysis\n");
        printf("5. DNS Analysis\n");
        printf("6. TCP Port Scan\n");
        printf("7. UDP Port Scan\n");
        printf("8. OS Detection\n");
        printf("9. Quit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                basicNetworkScan();
                break;
            case 2:
                advancedNetworkScan();
                break;
            case 3:
                smbAnalysis();
                break;
            case 4:
                smtpAnalysis();
                break;
            case 5:
                dnsAnalysis();
                break;
            case 6:
                tcpPortScan();
                break;
            case 7:
                udpPortScan();
                break;
            case 8:
                osDetection();
                break;
            case 9:
                printf("Exiting NetGuard...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        // Pause to view results
        printf("\nPress Enter to continue...");
        getchar();
        getchar(); // Consume the newline character
    }
    
    return 0;
}

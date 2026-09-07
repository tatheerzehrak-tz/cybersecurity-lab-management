#include <stdio.h>

int main() {
    char lab_name[50];
    int num_computers, num_network_devices, num_security_tools;
    double cost_per_computer, cost_per_device, software_cost;
    int total_computer_cost, total_network_cost, total_lab_investment;

    printf("Enter Lab Name: ");
    scanf(" %s", lab_name);

    printf("Enter Number of Computers: ");
    scanf("%d", &num_computers);

    printf("Enter Number of Network Devices: ");
    scanf("%d", &num_network_devices);

    printf("Enter Number of Security Tools: ");
    scanf("%d", &num_security_tools);

    printf("Enter Cost per Computer: ");
    scanf("%lf", &cost_per_computer);

    printf("Enter Cost per Network Device: ");
    scanf("%lf", &cost_per_device);

    printf("Enter Annual Security Software Cost: ");
    scanf("%lf", &software_cost);

    total_computer_cost = num_computers * cost_per_computer;
    total_network_cost = num_network_devices * cost_per_device;
    total_lab_investment = total_computer_cost + total_network_cost + software_cost;

    printf("\n------------------------------------------\n");
    printf("\tCYBERSECURITY LAB REPORT\n");
    printf("----------------------------------------\n");
    printf("Lab Name\t\t:\t%s\n", lab_name);
    printf("Computers\t\t:\t%d\n", num_computers);
    printf("Network Devices\t\t:\t%d\n", num_network_devices);
    printf("Security Tools\t\t:\t%d\n", num_security_tools);
    printf("Computer Cost\t\t:\t%d\n", total_computer_cost);
    printf("Network Device Cost\t:\t%d\n", total_network_cost);
    printf("Software Cost\t\t:\t%.0f\n", software_cost);
    printf("----------------------------------------\n");
    printf("Total Lab Investment\t:\t%d\n", total_lab_investment);
    printf("----------------------------------------\n");
 

    return 0;
}

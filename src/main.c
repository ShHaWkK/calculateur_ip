#include <stdio.h>
#include "ip_calcul.h"

int main() {
    char ip_address[16];
    int subnet_index;

    printf("Entrez l'adresse IP (ex: 192.168.1.1): ");
    scanf("%15s", ip_address);

    printf("Entrez l'indice de sous-réseau (ex: 24): ");
    scanf("%d", &subnet_index);

    char network_address[16], broadcast_address[16];

    calculate_network_address(ip_address, subnet_index, network_address);
    calculate_broadcast_address(ip_address, subnet_index, broadcast_address);

    printf("Adresse réseau: %s\n", network_address);
    printf("Adresse de broadcast: %s\n", broadcast_address);

    return 0;
}

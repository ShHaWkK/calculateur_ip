#include <stdio.h>
#include "ip_calcul.h"

int main() {
    char ip[16];
    int mask;

    printf("Entrez l'adresse IP : ");
    scanf("%15s", ip);

    printf("Entrez l'indice de masque : ");
    scanf("%d", &mask);

    char network[16], broadcast[16];

    calc_network_address(ip, mask, network);
    calc_broadcast_address(ip, mask, broadcast);

    printf("Adresse reseau: %s\n", network);
    printf("Adresse broadcast: %s\n", broadcast);

    return 0;
}
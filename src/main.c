#include <stdio.h>
#include "ip_utils.h"
#include "subnet_mask.h"

int main() {
    char ip[16];
    int mask;
    char network[16], broadcast[16];

    printf("Entrez l'adresse IP : ");
    scanf("%15s", ip);

    printf("Entrez l'indice de masque (ex: 24): ");
    scanf("%d", &mask);

    calculate_addresses(ip, mask, network, broadcast);

    printf("Adresse reseau: %s\n", network);
    printf("Adresse broadcast: %s\n", broadcast);

    return 0;
}

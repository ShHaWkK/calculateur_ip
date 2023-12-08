#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/ip_calcul.h"

void calculate_network_address(const char *ip, int subnet, char *network) {
    unsigned int ip_binary = ip_to_int(ip);
    unsigned int mask_binary = subnet_mask(subnet);

    unsigned int network_binary = ip_binary & mask_binary;

    int_to_ip(network_binary, network);
}

void calculate_broadcast_address(const char *ip, int subnet, char *broadcast) {
    unsigned int ip_binary = ip_to_int(ip);
    unsigned int mask_binary = subnet_mask(subnet);

    unsigned int broadcast_binary = ip_binary | ~mask_binary;

    int_to_ip(broadcast_binary, broadcast);
}

unsigned int ip_to_int(const char *ip) {
    unsigned int a, b, c, d;
    sscanf(ip, "%u.%u.%u.%u", &a, &b, &c, &d);
    return (a << 24) | (b << 16) | (c << 8) | d;
}

void int_to_ip(unsigned int num, char *ip) {
    sprintf(ip, "%u.%u.%u.%u", num >> 24, (num >> 16) & 0xFF, (num >> 8) & 0xFF, num & 0xFF);
}

unsigned int subnet_mask(int subnet) {
    return subnet == 0 ? 0 : ~((1 << (32 - subnet)) - 1);
}

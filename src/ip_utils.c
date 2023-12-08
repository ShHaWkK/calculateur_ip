#include <stdio.h>
#include "ip_utils.h"
#include "subnet_mask.h"

unsigned int ip_to_bin(const char *ip) {
    unsigned int bin = 0, a, b, c, d;
    sscanf(ip, "%u.%u.%u.%u", &a, &b, &c, &d);
    return (a << 24) | (b << 16) | (c << 8) | d;
}

void bin_to_ip(unsigned int bin, char *ip) {
    sprintf(ip, "%u.%u.%u.%u", bin >> 24, (bin >> 16) & 0xFF, (bin >> 8) & 0xFF, bin & 0xFF);
}


void calculate_addresses(const char *ip, int mask, char *network, char *broadcast) {
    unsigned int ip_bin = ip_to_bin(ip);
    unsigned int mask_bin = calculate_subnet_mask(mask);

    unsigned int net_addr_bin = apply_subnet_mask(ip_bin, mask_bin, 1);
    bin_to_ip(net_addr_bin, network);

    unsigned int broadcast_bin = apply_subnet_mask(ip_bin, mask_bin, 0);
    bin_to_ip(broadcast_bin, broadcast);
}

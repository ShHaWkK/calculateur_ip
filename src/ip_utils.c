#include <stdio.h>
#include <string.h>
#include "ip_utils.h"

void calc_network_address(const char *ip, int mask, char *network) {
    unsigned int ip_bin = ip_to_bin(ip);
    unsigned int mask_bin = ~(0xFFFFFFFF >> mask);

    unsigned int net_addr_bin = ip_bin & mask_bin;
    bin_to_ip(net_addr_bin, network);
}

void calc_broadcast_address(const char *ip, int mask, char *broadcast) {
    unsigned int ip_bin = ip_to_bin(ip);
    unsigned int mask_bin = ~(0xFFFFFFFF >> mask);

    unsigned int broadcast_bin = ip_bin | ~mask_bin;
    bin_to_ip(broadcast_bin, broadcast);
}

unsigned int ip_to_bin(const char *ip) {
    unsigned int bin = 0, a, b, c, d;
    sscanf(ip, "%u.%u.%u.%u", &a, &b, &c, &d);
    bin = (a << 24) | (b << 16) | (c << 8) | d;
    return bin;
}

void bin_to_ip(unsigned int bin, char *ip) {
    sprintf(ip, "%u.%u.%u.%u", bin >> 24, (bin >> 16) & 0xFF, (bin >> 8) & 0xFF, bin & 0xFF);
}

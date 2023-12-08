#ifndef IP_UTILS_H
#define IP_UTILS_H

void calc_network_address(const char *ip, int mask, char *network);
void calc_broadcast_address(const char *ip, int mask, char *broadcast);
unsigned int ip_to_bin(const char *ip);
void bin_to_ip(unsigned int bin, char *ip);

#endif

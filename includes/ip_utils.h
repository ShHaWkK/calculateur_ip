#ifndef IP_UTILS_H
#define IP_UTILS_H

unsigned int ip_to_bin(const char *ip);
void bin_to_ip(unsigned int bin, char *ip);
void calculate_addresses(const char *ip, int mask, char *network, char *broadcast);

#endif

#ifndef IP_CALCUL_H
#define IP_CALCUL_H

void calculate_network_address(const char *ip, int subnet, char *network);
void calculate_broadcast_address(const char *ip, int subnet, char *broadcast);
unsigned int ip_to_int(const char *ip);
void int_to_ip(unsigned int num, char *ip);
unsigned int subnet_mask(int subnet);

#endif

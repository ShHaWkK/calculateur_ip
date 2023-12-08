#ifndef SUBNET_MASK_H
#define SUBNET_MASK_H

unsigned int calculate_subnet_mask(int mask);
unsigned int apply_subnet_mask(unsigned int ip, unsigned int mask, int is_network);

#endif

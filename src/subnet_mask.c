#include "subnet_mask.h"

unsigned int calculate_subnet_mask(int mask) {
    return ~(0xFFFFFFFF >> mask);
}

unsigned int apply_subnet_mask(unsigned int ip, unsigned int mask, int is_network) {
    if (is_network) {
        return ip & mask;
    } else {
        return ip | ~mask;
    }
}

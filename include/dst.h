#ifndef DST_H_
#define DST_H_

#include "skbuff.h"

struct dst_entry {
    struct netdev *dev;
};

int dst_neigh_output(struct sk_buff *skb);

#endif
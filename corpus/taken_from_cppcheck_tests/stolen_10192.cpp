typedef struct ct_data_s {
    union {
        char freq;
    } fc;
} ct_data;
typedef struct internal_state {
    struct ct_data_s dyn_ltree[10];
} deflate_state;
void f(deflate_state *s) {
    s->dyn_ltree[0].fc.freq++;
}

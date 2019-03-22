typedef long (*state_func_t)(void);
typedef state_func_t (*state_t)(void);
state_t current_state = death;
static char get_runlevel(const state_t);
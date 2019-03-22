typedef enum {qfalse, qtrue} qboolean;
typedef qboolean (*localEntitiyAddFunc_t) (struct le_s * le, entity_t * ent);
void f()
{
    qboolean b;
    localEntitiyAddFunc_t f;
}
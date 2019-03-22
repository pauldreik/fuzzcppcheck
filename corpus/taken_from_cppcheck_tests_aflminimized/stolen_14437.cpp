void f(struct blame_entry *ent)
{
    struct origin *suspect = ent->suspect;
    char hex[41];
    strcpy(hex, sha1_to_hex(suspect->commit->object.sha1));
}
struct ClassyClass {
int id;
typedef int (ClassyClass::*funky_type);
operator funky_type() {
return &ClassyClass::id;
}}
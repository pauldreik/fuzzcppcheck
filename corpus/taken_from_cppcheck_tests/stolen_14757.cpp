class Carla {
};
class Fred : Carla {
};
void foo() {
    Fred fred;
    throw fred;
}
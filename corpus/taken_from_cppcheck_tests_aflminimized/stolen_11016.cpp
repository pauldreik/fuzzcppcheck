template<typename Task>
class MultiConsumer {
    MultiConsumer();
};
template<typename Task>
MultiConsumer<Task>::MultiConsumer() : sizeBuffer(0) {}
MultiReads::MultiReads() {
    mc = new MultiConsumer<reads_packet>();
}
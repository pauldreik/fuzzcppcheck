void QueueDSMCCPacket(unsigned char *data, int length) {
    unsigned char *dataCopy = malloc(length * sizeof(unsigned char));
    m_dsmccQueue.enqueue(new DSMCCPacket(somethingunrelated));
}
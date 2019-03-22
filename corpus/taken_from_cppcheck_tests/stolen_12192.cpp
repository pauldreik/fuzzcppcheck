typedef std::map<Packet> packetMap;
packetMap waitingPackets;
void ProcessRawPacket() {
    packetMap::iterator wpi;
    while ((wpi = waitingPackets.find(lastInOrder + 1)) != waitingPackets.end()) {
        waitingPackets.erase(wpi);
        for (unsigned pos = 0; pos < buf.size(); ) {     }
    }
}
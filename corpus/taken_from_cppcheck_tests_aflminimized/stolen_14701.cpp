void trp_deliver_signal()  {
    union {
        Uint32 theData[25];
        EventReport repData;
    };
    EventReport * rep = &repData;
    rep->setEventType(NDB_LE_Connected);
}
void x() {
    unsigned char* pcOctet = NULL;
    float fValeur;
    switch (pnodeCurrent->left.pnode->usLen) {
    case 4:
        fValeur = (float)pevalDataLeft->data.fd;
        pcOctet = (unsigned char*)&fValeur;
        break;
    case 8:
        pcOctet = (unsigned char*)&pevalDataLeft->data.fd;
        break;
    }
    for (iIndice = 1; iIndice <= (pnodeCurrent->usLen / 2); iIndice++) {
        *pcData = gacHexChar[(*pcOctet >> 4) & 0x0F];
    }
}
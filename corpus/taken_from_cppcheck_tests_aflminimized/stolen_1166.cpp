class S0 {
    class S1 {
        class S2 {
            class S3 {
                class S4 { };
            };
        };
    };
};
class TextIterator {
    S0::S1::S2::S3::S4 mCurrent, mSave;
public:
    bool setTagColour();
};
bool TextIterator::setTagColour() {
    mSave = mCurrent;
}
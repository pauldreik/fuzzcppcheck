int main() {
    map<int, int> myMap;
    vector<string> myVector;
    for(vector<int>::iterator x = myVector.begin(); x != myVector.end(); x++)
        myMap.erase(*x);
}
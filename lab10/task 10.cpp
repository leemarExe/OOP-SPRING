#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("data_records.txt");

    if (!in) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    in.seekg(18, ios::beg);

    string record;
    getline(in, record);
    cout << "Third record: " << record << endl;

    in.close();
    return 0;
}

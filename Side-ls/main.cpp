#include <iostream>

import Filesystem;

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Filesystem filesystem;
    filesystem.printCurrentDir();

    cout << "Bye!" << endl;
    return 0;
}

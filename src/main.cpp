#include <iostream>
#include "tools/Filesystem.hpp"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Filesystem filesystem;
    filesystem.getCurrentDirContent();

    return 0;
}

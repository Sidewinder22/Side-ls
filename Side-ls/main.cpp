#include <iostream>
#include <filesystem>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    const std::filesystem::path path(".");
    for (auto && entry : std::filesystem::directory_iterator{path})
    {
        cout << "Path: " << entry << endl;
    }




    return 0;
}

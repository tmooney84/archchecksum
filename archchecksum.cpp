#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 3) {
        cout << "Usage: " << argv[0] << " <arch> <checksum> " << endl;
        return 1;
    }

    string arch(argv[1]);
    string checksum(argv[2]);
    int errors = 0;

    for (int i = 0, j = 0; i < arch.size() && j < checksum.size(); i++, j++)
    {
        if (arch[i] != checksum[j])
        {
            cout << "Error...checksums do not match\n";
            errors++;
        }
    }
        if (errors == 0)
        {
            cout << "Checksums match\n";
        }
    return 0;
}

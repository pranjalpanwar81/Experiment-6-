// NAME - Pranjal Panwar
// PRN - 23070123164
// EXPERIMENT - 6(F) 

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            cout << "* ";
            ++j;
        } while (j <= 6);
        cout << endl;
        ++i;
    } while (i <= 6);

    return 0;
}

// PS C:\Users\dell\AppData\Local\Temp> cd "C:\Users\dell\AppData\Local\Temp\" ; if ($?) { g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// PS C:\Users\dell\AppData\Local\Temp>

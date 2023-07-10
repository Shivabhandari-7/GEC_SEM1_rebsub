#include <iostream>
using namespace std;

int main()
{
    int totalPackets = 40;
    int numStudents = 14;
    int packetsPerStudent = totalPackets / numStudents;
    int remainingPackets = totalPackets % numStudents;

    cout << "Each student gets: " << packetsPerStudent << " packets of Haribo." << endl;
    cout << "Remaining packets for me: " << remainingPackets << " packets." << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct Packet
{
    unsigned char header;   
    char data[15];          
};

void setHeader(Packet &p, int id, int len, int type)
{
    unsigned char header = 0;

    header = header + (id << 5);
    header = header + (len << 1);
    header = header + type;

    p.header = header;
}

int getPacketID(Packet p)
{
    return (p.header >> 5) & 0x07;
}

int getLength(Packet p)
{
    return (p.header >> 1) & 0x0F;
}

int getFrameType(Packet p)
{
    return p.header & 0x01;
}

void addPacket()
{
    Packet p;
    int id, len, type;

    do
    {
        cout << "Enter PacketID (0-7): ";
        cin >> id;

        if(id < 0 || id > 7)
            cout << "PacketID exceeds limit!\n";

    } while(id < 0 || id > 7);

    do
    {
        cout << "Enter Length (0-15): ";
        cin >> len;

        if(len < 0 || len > 15)
            cout << "Length exceeds limit!\n";

    } while(len < 0 || len > 15);

    do
    {
        cout << "Enter FrameType (0 or 1): ";
        cin >> type;

        if(type != 0 && type != 1)
            cout << "FrameType invalid!\n";

    } while(type != 0 && type != 1);

    setHeader(p, id, len, type);

    cout << "Enter FrameData: ";
    cin >> p.data;

    ofstream file("bhavi.bin", ios::binary | ios::app);
    file.write((char*)&p, sizeof(Packet));
    file.close();

    cout << "Packet saved successfully!\n";
}

void readPackets()
{
    Packet p;
    ifstream file("bhavi.bin", ios::binary);

    if (!file)
    {
        cout << "File not found!\n";
        return;
    }

    while (file.read((char*)&p, sizeof(Packet)))
    {
        cout << "\n--- Packet ---\n";
        cout << "PacketID: " << getPacketID(p) << endl;
        cout << "Length: " << getLength(p) << endl;
        cout << "FrameType: " << getFrameType(p) << endl;
        cout << "FrameData: " << p.data << endl;
    }

    file.close();
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Add Packet";
        cout << "\n2. Read Packets";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addPacket();
                break;

            case 2:
                readPackets();
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}
/*assignment program given from weekly assigned data

*/

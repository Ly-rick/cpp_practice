#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
using namespace std;

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        cerr << "Failed to create socket." << endl;
        return 1;
    }

    cout << "Socket created successfully." << endl;
    close(sock);
    return 0;
}
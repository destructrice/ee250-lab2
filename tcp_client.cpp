#include <string> 
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <sys/socket.h> 
#include <netdb.h>
#include <netinet/in.h> 
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char const *argv[]) 
{ 
    // check to see if user input is valid
    char socket_read_buffer[1024];
    
    // TODO: Fill out the server ip and port
    std::string server_ip = "172.20.10.4"; // Change this to your server's IP
    std::string server_port = "5000";    // Change this to your server's port

    int opt = 1;
    int client_fd = socket(AF_INET, SOCK_STREAM, 0); // TODO: Create a TCP socket()

    // Enable reusing address and port
    if (setsockopt(client_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) { 
        return -1;
    }

    // Check if the client socket was set up properly
    if(client_fd == -1){
        printf("Error- Socket setup failed");
        return -1;
    }
    
    // Helping you out by prepping the struct for connecting to the server
    struct addrinfo hints;
    struct addrinfo *server_addr;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    getaddrinfo(server_ip.c_str(), server_port.c_str(), &hints, &server_addr);

    // TODO: Connect() to the server (hint: you'll need to use server_addr)
    if (connect(client_fd, server_addr->ai_addr, server_addr->ai_addrlen) == -1) {
        perror("Error connecting to server");
        return -1;
    }

    // TODO: Retrieve user input
    std::string user_input;
    std::cout << "Enter a message: ";
    std::getline(std::cin, user_input);

    // TODO: Send() the user input to the server
    send(client_fd, user_input.c_str(), user_input.size(), 0);

    // TODO: Receive any messages from the server and print it here. Don't forget to make sure the string is null-terminated!
    recv(client_fd, socket_read_buffer, sizeof(socket_read_buffer), 0);
    std::cout << "Received from server: " << socket_read_buffer << std::endl;

    // TODO: Close() the socket
    close(client_fd);

    return 0; 
}

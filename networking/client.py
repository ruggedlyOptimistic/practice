import socket

def start_client():
    
    port = 4560
    isConnected = False

    while not isConnected:
        server_ip = input("Enter server IP address: ")

        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client_socket:
                client_socket.connect((server_ip, port))
                print(f"Connected to server at {server_ip}:{port}")
                isConnected = True

                while True:
                    msg = input("Enter a message: ")
                    client_socket.sendall(msg.encode('utf-8'))
                    response = client_socket.recv(1024)
                    print(f"Server Response: {response.decode()}")
        except KeyboardInterrupt:
            print("Closing client side connection...")

        except Exception as e:
            print(e)


if __name__ == '__main__': 
    start_client()
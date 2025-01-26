import socket

def start_client():
    server_ip = "169.254.132.244"
    port = 4560

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client_socket:
        client_socket.connect((server_ip, port))
        print(f"Connected to server at {server_ip}:{port}")

        client_socket.sendall(b"Hello, Server!")
        response = client_socket.recv(1024)
        print(f"Server Response: {response.decode()}")

if __name__ == '__main__': 
    start_client()
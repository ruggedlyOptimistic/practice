import socket

def start_server():
    server_ip = "0.0.0.0"  # Listen on all interfaces
    port = 12345  # Choose a port number
    buffer_size = 1024  # Max size of messages

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server_socket:
        server_socket.bind((server_ip, port))
        server_socket.listen(1)  # Allow one connection at a time
        print(f"Server is listening on {server_ip}:{port}...")

        conn, addr = server_socket.accept()  # Accept a connection
        print(f"Connection from {addr}")

        while True:
            data = conn.recv(buffer_size)
            if not data:
                break
            print(f"Received: {data.decode()}")
            conn.sendall(b"Message received!")

if __name__ == "__main__":
    start_server()

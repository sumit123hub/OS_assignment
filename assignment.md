# System Calls in Operating Systems

System calls are fundamental mechanisms provided by an operating system (OS) that allow user-level applications to request services from the kernel. These calls serve as the interface between a program and the OS, enabling programs to perform operations that are otherwise restricted by the kernel's protected mode. Here’s an overview of system calls:

## What is a System Call?

A system call is a request made by a user-space application to the OS kernel to perform a specific task. It allows applications to interact with hardware resources and manage system operations safely and efficiently. System calls provide a controlled interface for performing tasks such as file operations, process management, and communication.

## How System Calls Work

1. **User Mode to Kernel Mode Transition**:
   - When a system call is invoked, the CPU switches from user mode to kernel mode. This transition is necessary to ensure that the system call can execute privileged operations without compromising system stability or security.

2. **System Call Invocation**:
   - User applications typically invoke system calls using library functions provided by the standard C library (e.g., `libc`). These functions act as a wrapper around the low-level system call interface.

3. **Kernel Processing**:
   - The OS kernel receives the request, processes it, and performs the requested operation. This might involve interacting with hardware, managing memory, or manipulating system resources.

4. **Return to User Mode**:
   - After completing the operation, the kernel returns control to the user application, switching back to user mode. The result of the system call is returned to the application.

## Types of System Calls

1. **File Management**:
   - **Open**: Opens a file.
   - **Read**: Reads data from a file.
   - **Write**: Writes data to a file.
   - **Close**: Closes an opened file.
   - **Delete**: Deletes a file.

2. **Process Management**:
   - **Fork**: Creates a new process by duplicating the calling process.
   - **Exec**: Replaces the current process image with a new process image.
   - **Wait**: Waits for a child process to terminate.
   - **Exit**: Terminates the calling process.

3. **Memory Management**:
   - **Mmap**: Maps files or devices into memory.
   - **Munmap**: Unmaps memory regions.
   - **Brk**: Changes the data segment size (heap memory).

4. **Communication**:
   - **Socket**: Creates a communication endpoint.
   - **Bind**: Binds a socket to a specific address.
   - **Listen**: Listens for incoming connections on a socket.
   - **Accept**: Accepts an incoming connection on a socket.
   - **Send**: Sends data over a socket.
   - **Receive**: Receives data from a socket.

5. **Device Management**:
   - **Ioctl**: Controls device parameters.
   - **Read**: Reads data from a device.
   - **Write**: Writes data to a device.

## Example of a System Call

# System Calls in Operating Systems

System calls are fundamental interfaces between user programs and the operating system. They allow programs to request services from the OS. Here’s a simple explanation of some common types of system calls:

## File Management

- **`open()`**: Opens a file or creates a new one. It returns a file descriptor that is used to refer to the file in subsequent operations.

- **`read()`**: Reads data from an open file. The data is read into a buffer, and the number of bytes read is returned.

- **`write()`**: Writes data to an open file. The data is taken from a buffer, and the number of bytes written is returned.

- **`close()`**: Closes an open file descriptor, releasing it for reuse.

## Process Management

- **`fork()`**: Creates a new process by duplicating the current process. The new process is called the child process and gets a unique identifier (PID).

- **`exec()`**: Replaces the current process image with a new program. This means the current process is replaced by a different program.

- **`wait()`**: Suspends the execution of a process until one of its child processes terminates. It allows the parent process to retrieve the exit status of the child process.

- **`exit()`**: Terminates the current process and provides an exit status to the parent process.

## Communication

- **`socket()`**: Creates a new socket for communication between processes, either on the same machine or over a network. It specifies the type of communication (e.g., TCP or UDP).

- **`bind()`**: Associates a socket with a specific local address and port. This is necessary for a server to listen for incoming connections on a particular port.

- **`listen()`**: Prepares a socket to accept incoming connection requests. It specifies the maximum number of pending connections that can be queued.

- **`accept()`**: Accepts an incoming connection on a listening socket. It creates a new socket for the actual communication with the connected client.

- **`send()`**: Sends data over a connected socket. The data is transmitted to the other end of the connection.

- **`recv()`**: Receives data from a connected socket. The data is read into a buffer from the other end of the connection.

## Conclusion

System calls are essential for performing various tasks within an operating system. They provide a controlled way for applications to interact with the system's resources and hardware, enabling functionalities like file manipulation, process control, and network communication.

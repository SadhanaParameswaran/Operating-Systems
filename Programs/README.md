Child and Parent process

-	Child process: A child process is a process created by a parent process in operating system using a fork() system call. A child process is created as its parent process’s copy and inherits most of its attributes. If a child process has no parent process, it was created directly by the kernel. The Process ID (PID) of the child process is returned to the parent process

-	Parent process: All the processes in operating system are created when a process executes the fork() system call except the startup process. The process that used the fork() system call is the parent process. In other words, a parent process is one that creates a child process. A parent process may have multiple child processes but a child process only one parent process.


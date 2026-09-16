## Container Management Shell

**Project Description**

The Container Management Shell is a Linux-based command-line shell designed to provide users with a simple interface for managing containerized processes. The project aims to implement basic container operations such as creating, starting, stopping, monitoring, and managing isolated processes through shell commands.

The project demonstrates important Operating Systems and Systems Programming concepts, including process creation and control, system calls, memory management, file handling, I/O redirection, signals, pipes, and concurrency.

**Technologies Used**
C Programming – Core implementation of the shell and system-level operations.
Linux / Ubuntu – Development and execution environment.
GCC – Compiling C programs.
Linux Terminal / Bash – Command-line interaction and testing.
POSIX System Calls – Process and file management operations.
Make / Makefile – Automating compilation and project builds.
GDB – Debugging and examining program execution.
strace – Tracing and analyzing Linux system calls.
Git & GitHub – Version control and project repository management.

## Week 1 – Project Setup and Basic Shell

- Set up the Linux/Ubuntu development environment.
- Created the modular project structure with `src/`, `include/`, `docs/`, `tests/`, `screenshots/`, and `bin/`.
- Implemented the initial ShellForge interactive REPL loop.
- Added basic command input and `exit` functionality.
- Created a Makefile for compiling and running the project.
- Initialized Git and connected the project to GitHub.

  ## Week 2 – Dynamic Input Handling

- Implemented dynamic command input using `malloc()`.
- Added automatic buffer expansion using `realloc()`.
- Added memory allocation error handling.
- Added proper memory management using `free()`.
- Tested the shell with commands longer than a fixed-size input buffer.

  ## Week 3 Features
- Command parsing using strtok()
- Dynamic argv[] construction
- Modular parser implementation
- Ready for process execution with execvp()

## Week 4 – Process Management and Command Execution

- Process creation using fork()
- Command execution using execvp()
- Parent-child synchronization using waitpid()
- Error handling using perror()
- Execution of real Linux commands

## Week 5 – Built-in Commands and Environment Variables

- Implemented built-in command support.
- Added `cd` for changing the shell's current directory.
- Added `pwd` for displaying the current directory.
- Added `help` for displaying available built-in commands.
- Added `clear` for clearing the terminal.
- Added `exit` for terminating the shell.
- Added `env` for displaying environment variables such as `HOME`, `USER`, and `PATH`.
- Built-in commands execute directly in the shell process.
- External commands continue to execute using `fork()`, `execvp()`, and `waitpid()`.



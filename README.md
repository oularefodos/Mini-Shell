# Mini-Shell

## About The Project
Embark on a journey into systems programming by crafting a miniature shell in C. Design and implement a simplified shell that interprets user commands, initiates processes, and orchestrates their execution.

## Prerequisites

Before using the Mini-Shell project, ensure that your environment meets the following prerequisites. The project relies on various functions for its functionality:

- `readline`: For reading input lines with editing capabilities.
- `rl_clear_history`, `rl_on_new_line`, `rl_replace_line`, `rl_redisplay`, `add_history`: Functions for readline library to manage command history and line editing.
- Standard I/O functions: `printf`, `malloc`, `free`, `write`.
- File system functions: `access`, `open`, `read`, `close`, `unlink`.
- Process management functions: `fork`, `wait`, `waitpid`, `wait3`, `wait4`, `execve`, `kill`, `exit`.
- Signal handling functions: `signal`, `sigaction`, `sigemptyset`, `sigaddset`.
- Directory functions: `opendir`, `readdir`, `closedir`.
- File status functions: `stat`, `lstat`, `fstat`.
- File descriptor functions: `dup`, `dup2`, `pipe`.
- Terminal control functions: `isatty`, `ttyname`, `ttyslot`, `ioctl`, `tcsetattr`, `tcgetattr`.
- Environment functions: `getenv`.
- Terminal capabilities functions: `tgetent`, `tgetflag`, `tgetnum`, `tgetstr`, `tgoto`, `tputs`.
- Error handling functions: `strerror`, `perror`.

Ensure that these functions are available and properly configured in your environment before compiling and running the Mini-Shell project.

## Algorithm Used: Abstract Syntax Tree (AST)

In the Mini-Shell project, an Abstract Syntax Tree (AST) algorithm is employed to parse and analyze user commands. The AST represents the syntactic structure of commands entered by the user, facilitating their interpretation and execution within the shell environment.

### AST Features:
- **Parsing:** The AST algorithm parses user input to generate a hierarchical representation of the command structure, capturing relationships between components such as commands, arguments, and redirections.
- **Analysis:** Once parsed, the AST enables the analysis of command semantics and the extraction of relevant information needed for execution.
- **Execution:** The AST facilitates the execution of user commands by providing a structured representation that guides the interaction with the underlying operating system.

By leveraging the AST algorithm, the Mini-Shell project achieves efficient command interpretation and execution, enhancing the user experience and shell functionality.


## Quick Start

1. **Clone the Repository**
   ```sh
   git clone git@github.com:oularefodos/Mini-Shell.git
2. **Navigate to the Mini-Shell Directory**
   ```sh
   cd Mini-Shell
3. **Compile the Project**
   ```sh
   make
4. **Launch the Program**
   ```sh
   ./minishell

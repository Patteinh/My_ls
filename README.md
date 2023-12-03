# my_ls 📁

Welcome to **my_ls**.

This project focuses on recoding the `ls` command, which is used in Unix-based systems for listing directory contents.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** my_ls

## Project Overview 🔎

The aim of this project is to replicate the functionality of the `ls` command with support for multiple options such as `-l`, `-R`, `-d`, `-r`, and `-t`. The program should handle a list of files/folders as parameters and mimic the output formatting of the original `ls` command.

### Usage

`./my_ls [options] [files/folders]`


#### Supported Options
- `-l`: Use a long listing format.
- `-R`: List subdirectories recursively.
- `-d`: List directories themselves, not their contents.
- `-r`: Reverse order while sorting.
- `-t`: Sort by modification time, newest first.

### Examples

#### Example 1

```
Input: ./my_ls -l -R

Output:
.:
total 12
drwxr-xr-x 2 student student 4096 Nov 13 15:38 dir
-rw-r––- 1 johan johan 0 Nov 13 15:39 ‘#test#’
-rw-r––- 1 johan johan 22 Nov 13 15:39 test
-rw-r––- 1 johan johan 15 Nov 13 15:39 test~
./dir:
total 0
-rw-r–r– 1 student student 0 Nov 13 15:38 test
```

#### Example 2

```
Input: my_ls -la

Output:
total 24
drwxr-xr-x 4 johan johan 4096 Nov 13 16:11 .
drwxr-xr-x 12 johan johan 4096 Nov 13 15:39 ..
drwxr-xr-x 2 student student 4096 Nov 13 15:38 dir
drwxr-xr-x 2 johan johan 4096 Nov 13 16:11 .hiddenfolder
-rw-r––- 1 johan johan 0 Nov 13 15:39 ‘#test#’
-rw-r––- 1 johan johan 22 Nov 13 15:39 test
-rw-r––- 1 johan johan 15 Nov 13 15:39 test~
```


*Note: Handling column formatting without the `-l` option, sorting, and coloring are considered bonus features.*

## Authorized Functions

The following system calls are allowed:
- `opendir`, `readdir`, `closedir`, `stat`, `lstat`, `write`
- `getpwuid`, `getgrgid`, `time`, `ctime`, `readlink`
- `malloc`, `free`, `perror`, `strerror`, `exit`

## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using the provided Makefile.
3. Run the program: `./my_ls [options] [files/folders]`.
4. For detailed guidelines, refer to `my_ls.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.

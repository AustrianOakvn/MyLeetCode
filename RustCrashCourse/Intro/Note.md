# Note for the introduction

## Anatomy of a Rust program

- Use main function just like C/C++
- Params go inside parentheses ()
- Function body go inside {}
- Rust indent style: 4 spaces
- The **!** means Rust macro
- Line ends with semicolon (;)
- Naming convention follow snake case name

## Compiling and running

- Invoke Rust compiler with `rustc`
```bash
$ rustc main.rs
```
- Run the program binary just like C++

## Creating project with cargo 

- Create new project using `cargo new`
- Build project using `cargo build`
- Run project using `cargo run`
- Build without producing binary to check for error `cargo check`
- Cargo save binary to */target/debug* directory

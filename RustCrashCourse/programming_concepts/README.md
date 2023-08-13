# Common Programming Concepts

## Variables and Mutability

- Declare and assign variable:

```rust
let x = 5;
```

- By default, variable is immutable, can not change value

```rust
x = 6; // error
```

- To make variable mutable:

```rust
let mut x = 5;
```

### Constant

- Syntax:

```rust
const AGE = 23;
```

- Cannot use with mut
- Naming convention is to use all CAP with underscore

### Shadowing

- Reuse variable by redeclare it, the type of variable can be changed.

```rust
let x = 5;
let x = x + 1;

let spaces = "   ";
// change of type
let spaces = spaces.len();
```

- It is different from mutable variable. we cannot mutate variable type.

```rust
let mut spaces = "    ";
spaces = spaces.len();
```

## Data Types

### Scalar

#### Integer types

| Length    | Signed  | Unsigned |
| --------- | ------- | -------- |
| `8-bit`   | `i8`    | `u8`     |
| `16-bit`  | `i16`   | `u16`    |
| `32-bit`  | `i32`   | `u32`    |
| `64-bit`  | `i64`   | `u64`    |
| `128-bit` | `i128`  | `u128`   |
| `arch`    | `isize` | `usize`  |

- Integer literals

| Number literals | Example       |
| --------------- | ------------- |
| Decimal         | `98_222`      |
| Hex             | `0xff`        |
| Octal           | `0o77`        |
| Binary          | `0b1111_0000` |
| Byte (u8 only)  | `b'A'`        |

- Default integer type is `i32`

#### Floating-Points Types

- Rust support float 32 `f32` and float 64 `f64`. Default is `f64`.

```rust
let x:f32 = 3.0;
```

#### Numeric Operations

- Rust support: add, subtract, mul, div and remainder

```rust
let truncated = -5/3; //result is -1
// Remainder
let remainder = 43%5;
```

#### Boolean Type

- Rust bool has 2 possible values: `true` and `false`

```rust
let f:bool = false;
```

#### Character Type

- Represent 1 character, 4 byte, encapsulated by single quotes

```rust
let z:char = 'Z';
```

### Compound Types

#### Tuple

- Fixed length, can contain a variety of types in one tuple. Tuple is immutable.

```rust
let tup: (i32, f64, u8) = (500, 6.4, 1);
let tup = (500, 6.4, 1);
```

- Use pattern matching to destructure a tuple value

```rust
let (x, y, z) = tup;
```

- Access element by index

```rust
let five_hundred = x.0;
```

#### Array

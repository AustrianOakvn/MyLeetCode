use std::io;
use rand::Rng;
use std::cmp::Ordering;



fn main() {
    println!("Guess the number!");

    // thread_rng: local to the current thread of execution and seeded by OS
    // start..=end: lower and upper bound expression
    let secret_number = rand::thread_rng().gen_range(1..=100);
    println!("The secret number is: {secret_number}");
    loop{
        println!("Please input your guess.");

        // Create new variable using "let" keyword. Example: let apples = 5;
        // "mut" keyword means that once the variable is set, its value won't
        // change.
        // "::" syntax indicate "new" is an associated function of the String type 
        // An associated function is a function that's implemented on a type.

        let mut guess = String::new();
        // .read_line() is the method of standard input handle
        // "&" indicate the argument is reference, just like in cpp, instead of copy
        // we could use reference to reduce memory usage
        // Reference is immutable so we need "mut" keyword
        // The return of readline is "Result" and it is enumeration type "Ok", "Err". 
        // The "expect" method is used to catch if "Err" is returned
        io::stdin().read_line(&mut guess).expect("Failed to read line");
        
        // We use shadowing to reuse variable instead of making a new one 
        // ":u32" define unsigned 32 bit integer
        // "trim()" remove whitespace at begining and end from string 
        // parse() convert string to another type, refer to the type of the declared variable
        let guess: u32 = match guess.trim().parse() {
            // If ok then return the number
            Ok(num) => num,
            // "_" is catchall value, no matter what the error is, the program continues
            Err(_) => continue,
        };

        println!("You guessed: {guess}");
        match guess.cmp(&secret_number){
            Ordering::Less => println!("Too small"),
            Ordering::Greater => println!("Too big"),
            Ordering::Equal => {
                println!("You win");
                break;
            }
        }
    }
}

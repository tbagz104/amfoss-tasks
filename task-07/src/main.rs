extern crate regex;

use regex::Regex;

use std::io;


fn main() {

let mut input = String::new();

println!("Enter email:");

io::stdin().read_line(&mut input);

let id = Regex::new(r"\w[a-zA-Z0-9._+-]+@[a-zA-Z0-9._]+\.[a-zA-Z]").unwrap();

println!("Email is Valid? {}" , id.is_match(&mut input));



}
use std::io;
use std::io::prelude::*;

fn main() {
    let stdin = io::stdin();
    for line in stdin.lock().lines() {
        let s = line.unwrap();
        println!("{}", &s[4..]);
    }
}


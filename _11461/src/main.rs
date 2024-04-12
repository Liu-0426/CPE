use std::env;
fn a(b:&str) -> String{
    let mut c :i32= b.parse().unwrap();
    let str:String = String::new();
    let mut byte:Vec<i32> = Vec::new();
    while c!=0 {
        byte.push(c%2);
        c/=2;
    }

    str.
    str
}
fn main() {
    let args:Vec<String> = env::args().collect();
    println!("{}",a(&args[1]));
}
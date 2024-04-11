use std::env;
fn a(b:&str) -> String{
    if b.len()==1 {
        return b.to_string();
    }
    let mut c = 0;
    for i in b.as_bytes() {
        c+=i-'0' as u8;
    }
    return a(&c.to_string());
}
fn main() {
    let args:Vec<String> = env::args().collect();
    println!("{}",a(&args[1]));
}
use std::io;

fn main() {
    let mut line = String::new();

    io::stdin().read_line(&mut line).unwrap();

    let t = line.trim().parse::<i32>().unwrap();

    for _ in 0..t {
        let mut line = String::new();
        io::stdin().read_line(&mut line).unwrap();

        let n = line.trim().parse::<i32>().unwrap();
        let mut target_vec = (1..=n*3).collect::<Vec<i32>>();

        for i in 0..(n as usize) {
            target_vec[0+3*i] = (i as i32) + 1 ;
            target_vec[2+3*i] = 3*n-(i as i32)*2;
            target_vec[1+3*i] = 3*n-(i as i32)*2-1;
        }

        println!("{}", target_vec.iter().map(|x| x.to_string()).collect::<Vec<String>>().join(" "));
    }
}

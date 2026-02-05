use std::fs::File;
use std::io::{Write, BufWriter};

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let file = File::create("output.csv")?;
    let mut writer = BufWriter::new(file);
    writeln!(writer, "sigma")?;
    loop {
        writeln!(writer, "67")?;
        writer.flush()?;
    }
}
// Using bitInt
const addBinary = (a, b) => {
    let aBin = `0b${a}`;
    let bBin = `0b${b}`;
    
    const sum = BigInt(aBin) + BigInt(bBin);
    return sum.toString(2);
}

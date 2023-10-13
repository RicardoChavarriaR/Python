let b = 1.8;
arreglo = [-9,-2,-1,0,1,2,3];

//Tabular tabla
for(let i = 0; i < arreglo.length; i++){
    let xCuadrada = Math.pow(arreglo[i],2);
    let x = (arreglo[i])*b;

    let funcion = -xCuadrada + x + 2.5;
    console.log(`Valor de x en ${arreglo[i]}: ${funcion}`);
}
console.log("\n");

//Xn y Xn+1
let n = 6;
// let funcion = -(x**2)+1.8*x+2.5;
// let funcionDerivada = -2*x+1.8;
// let Xn = 1.395;
let Xn = 5;

for(let j = 0; j < n; j++){
    console.log(`Valor de Xn: ${Xn}`);
    let operación = Xn - ((-(Xn**2)+1.8*Xn+2.5)/(-2*Xn+1.8));
    Xn = operación;
    console.log(`número de operación: ${j+1}`);
    console.log(`Xn+1: ${operación}\n`);
    
}
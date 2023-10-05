// var nome = document.getElementById('nome')
// var resultado = document.getElementById('resultado')
// function buscarElemento(){
//     // let nome = document.getElementById('nome').value
//     // console.log(nome.value)
//     resultado.innerHTML = nome.value
// }


// Ler os três números do usuário

// var numero1 = 10;
// var numero2 = 6;
// var numero3 = 2;

// var resultado = (numero1 + numero2) / numero3;

//   console.log("O resultado da soma dos dois primeiros números dividido pelo terceiro é: " + resultado);

// Função para ler um número do usuário
// Solicita ao usuário que insira os três números

// var numero1 = parseFloat(prompt("Digite o primeiro número:"));
// var numero2 = parseFloat(prompt("Digite o segundo número:"));
// var numero3 = parseFloat(prompt("Digite o terceiro número:"));

// // Realiza a soma dos dois primeiros números
// var soma = numero1 + numero2;

// // Verifica se o terceiro número é diferente de zero antes de realizar a divisão
// if (numero3 !== 0) {
//   // Realiza a divisão
//   var resultado = soma / numero3;

//   // Exibe o resultado na tela
//   console.log("O resultado da soma dos dois primeiros números dividido pelo terceiro número é: " + resultado);
// } else {
//   console.log("Não é possível dividir por zero. Por favor, insira um terceiro número diferente de zero.");

function calculo(){
    let a = Number(document.getElementById('a').value);
    let b = Number(document.getElementById('b').value);
    let c = Number(document.getElementById('c').value);

    document.querySelector('#result').innerHTML = `A soma de 'a' + 'b' divido por 'c' é igual a: ${(a+b)/c}`
}



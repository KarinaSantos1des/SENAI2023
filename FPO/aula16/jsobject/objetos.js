//Objeto declarado diretamente
const obj = {};
//Atributos dinamicamente
obj.nome = 'Bola';
obj.preço = 39.90;
obj.qtd = 10;
//Método com function
obj.total = function (){
    return obj.preço * obj.qtd;
}
//Método com arrow function
obj.showHTML = () => {
    let str = `<label>Nome:</label><label>${obj.nome}</label>`;
    str += `<label>Preço:</label><label>${obj.preço}</label>`;
    str += `<label>Quantidade:</label><label>${obj.qtd}</label>`;
    str += `<label>Total:</label><label>${obj.total().toFixed(2)}</label>`;
    return str;
}

//Saídas no console
console.log(obj);
console.log('Valor total = R$ '+obj.total().toFixed(2));

//Saída no HTML
const main = document.getElementById('objetos');
const div = document.createElement('div');
div.innerHTML = obj.showHTML();
main.appendChild(div);

let pantalla = document.getElementById('pantalla');
let expresion = '';

function agregar(valor) {
    expresion += valor;
    pantalla.textContent = expresion;
}

function borrar() {
    expresion = '';
    pantalla.textContent = '0';
}

function calcular() { // Al usar eval, tenemos que emplear un try-catch ya que la funcion eval puede devolver excepciones
    try {
    let resultado = eval(expresion);
    if (isNaN(resultado) || !isFinite(resultado)) {
        pantalla.textContent = 'Error';
        expresion = '';
        return;
    }
    expresion = resultado.toString();
    pantalla.textContent = expresion;
    } catch {
    pantalla.textContent = 'Error';
    expresion = '';
    }
}
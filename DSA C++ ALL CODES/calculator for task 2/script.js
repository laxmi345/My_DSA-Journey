let string = "";
let buttons = document.querySelectorAll('.button');
let input = document.querySelector('.input');

Array.from(buttons).forEach((button) => {
  button.addEventListener('click', (e) => {

    if (e.target.innerHTML === '=') {
      try {
        string = eval(string);
        input.value = string;
      } catch {
        input.value = "Error";
        string = "";
      }
    }

    else if (e.target.innerHTML === 'C') {
      string = "";
      input.value = "";
    }

    else {
      string += e.target.innerHTML;
      input.value = string;
    }
  });
});

let btns = document.querySelectorAll("button");
// console.dir(btns);

// DOM Events :-
// for (btn of btns) {
//   btn.onclick = () =>{
//     alert("Clicked the Button");
//   };

//   btn.onmouseenter = () =>{
//     console.log("You hovered a button");
//   }
// }

// Event Listeners :-
for (btn of btns) {
  btn.addEventListener("dblclick", () => {
    console.log("Clicked Me !");
  });
}

// this in Event Listeners :-
for (let btn of btns) {
  btn.addEventListener("click", function () {
    this.style.backgroundColor = "red";
  });
}

// Keyboard Events :-
let input = document.querySelector("input");

input.addEventListener("keydown", function () {
  console.log("Key was Pressed");
});

input.addEventListener("keyup", function () {
  console.log("Key was Released");
});

input.addEventListener("keydown", function (event) {
  console.log(event.key);
  console.log(event.code);
});

// Form Events :-
let form = document.querySelector("form");

form.addEventListener("submit", function (event) {
  event.preventDefault();
  alert("Form submitted");
});

// Extracting Form Data :-
form.addEventListener("submit", function (event) {
  let username = document.querySelector("#username");
  let password = document.querySelector("#password");

  console.log(username.value);
  console.log(password.value);

  alert(`Hi , ${username.value} your password is set to ${password.value}`);
});

// More Events :-

//change
username.addEventListener("change", function () {
  console.log("Change Event");
  console.log("Final Value = ", this.value);
});

//input
username.addEventListener("input", function () {
  console.log("input Event");
  console.log("Final Value = ", this.value);
});

// Event Bubbling :-
let div = document.querySelector("div");
let ul = document.querySelector("ul");
let li = document.querySelector("li");

div.addEventListener("click", function () {
  console.log("Div was clicked");
});

ul.addEventListener("click", function () {
  console.log("ul was clicked");
});

li.addEventListener("click", function () {
  console.log("li was clicked");
});

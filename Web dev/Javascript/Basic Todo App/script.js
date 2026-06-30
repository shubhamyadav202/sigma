let btn1 = document.querySelector(".btn1");
let ul = document.querySelector("ul");
let li = document.querySelector("li");
let input = document.querySelector("input");

btn1.addEventListener("click", function () {
  let item = document.createElement("li");
  item.innerText = input.value;
  ul.appendChild(item);
  input.value = "";

  let deletebtn = document.createElement("button");
  deletebtn.innerText = "Delete";
  deletebtn.classList.add("delete");
  item.appendChild(deletebtn);
});

ul.addEventListener("click", function (event) {
  // console.log(event.target.nodeName);
  console.log(event);
  if (event.target.nodeName == "BUTTON") {
    let listItem = event.target.parentElement;
    listItem.remove();
    console.log("deleted");
  }
});

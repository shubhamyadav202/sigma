// async :-

// async function greet() {
//   return "Hello World";
// }

// greet()
//   .then((result) => {
//     console.log("Promise was Resolved");
//     console.log("result :", result);
//   })
//   .catch((error) => {
//     console.log("Promise was Rejected");
//     console.log("error :", error);
//   });

// // async function using arrow function :-
// let greeting = async () => {
//   return "hello worlddd";
// };

// async and await with color changing example:-
let bodyColor = document.querySelector("body");

function changeColor(color, delay) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      bodyColor.style.backgroundColor = color;
      console.log(`Color changed to ${color}.`);
      resolve("Color Changed !"); // <--- resolve tells the 'await' to proceed!
    }, delay);
  });
}

async function changingColor() {
  try {
    await changeColor("red", 1000);
    await changeColor("green", 1000);
    await changeColor("blue", 1000);
    await changeColor("yellow", 1000);
    await changeColor("pink", 1000);
    await changeColor("orange", 1000);
    await changeColor("indigo", 1000);
    await changeColor("purple", 1000);
  } catch (error) {
    console.log("Error Caught !");
    console.log(error);
  }

  let a = 20;
  console.log(a);
}

changingColor();

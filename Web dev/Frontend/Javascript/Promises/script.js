// Callback hell :-
let h1 = document.querySelector("h1");

// function changeColor(color, delay, nextColorChange) {
//   setTimeout(() => {
//     h1.style.color = color;
//     nextColorChange();
//   }, delay);
// }

// changeColor("orange", 1000, () => {
//   changeColor("red", 1000, () => {
//     changeColor("blue", 1000, () => {
//       changeColor("green", 1000);
//     });
//   });
// });

// Promises :-
// Changing upper callback hell into promises :-
function changeColor(color, delay) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      h1.style.color = color;
      resolve(`color changed to ${color}`);
    }, delay);
  });
}

let req = changeColor("red", 1000);
req
  .then((result) => {
    console.log("result :", result);
    return changeColor("green", 1000);
  })
  .then((result) => {
    console.log("result :", result);
    return changeColor("blue", 1000);
  })
  .then((result) => {
    console.log("result :", result);
    return changeColor("orange", 1000);
  })
  .then((result) => {
    console.log("result :", result);
    return changeColor("yellow", 1000);
  })
  .catch((error) => {
    console.log("Error :", error);
  });

// Example 2 :-
// function savetoDb(data) {
//   return new Promise((resolve, reject) => {
//     let internetSpeed = Math.floor(Math.random() * 10) + 1;
//     if (internetSpeed > 4) {
//       resolve("Success : data was saved");
//     } else {
//       reject("Failure : Weak connection");
//     }
//   });
// }

// // // Promise Methods :-

// let request = savetoDb("Shubham Yadav");
// request
//   .then((result) => {
//     console.log("result :", result);
//     console.log("data 1 saved");
//     return savetoDb("helloworld");
//   })
//   .then((result) => {
//     console.log("result :", result);
//     console.log("data 2 saved");
//     return savetoDb("shraddha");
//   })
//   .then((result) => {
//     console.log("result :", result);
//     console.log("data 3 saved");
//   })
//   .catch((error) => {
//     console.log("error :", error);
//     console.log("Promise was Rejected");
//   });

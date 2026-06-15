const sum = (a, b) => {
  return a + b;
};

console.log(sum(2, 4));

setTimeout(() => {
  console.log("Hello I will be there after 4 Seconds");
}, 4000);

let id = setInterval(() => {
  console.log("I am Set Interval !");
}, 2000);

clearInterval(id);
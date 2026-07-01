// normal function :-
function hello() {
  console.log("I am Hello");
}

hello();

// Function Expression :-
const sum = function (a, b) {
  return a + b;
};

console.log(sum(1, 5));

//Higher Order Function :-
function multipleGreet(func, count) {
  for (let i = 1; i <= count; i++) {
    func();
  }
}

let greet = function () {
  console.log("HELLOO");
};

multipleGreet(greet, 5);

//Methods :-
const calculator = {
  add: function (a, b) {
    return a + b;
  },
  mul: function (a, b) {
    return a * b;
  },
  sub: function (a, b) {
    return a - b;
  },
};

console.log(calculator);
console.log(calculator.add(2, 5));
console.log(calculator.sub(2, 5));
console.log(calculator.mul(2, 5));

// Methods Shorthand :-
const calculate = {
  add(a, b) {
    return a + b;
  },
  sub(a, b) {
    return a - b;
  },
  mul(a, b) {
    return a * b;
  },
};

console.log(calculate);
console.log(calculate.add(2, 5));
console.log(calculate.sub(2, 5));
console.log(calculate.mul(2, 5));

// this keyword : It represents the object
const obj = {
  name: "shubham",
  age: 20,
  city: "Delhi",
  printname() {
    console.log(this.name);
  },
};

obj.printname();

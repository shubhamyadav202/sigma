let arr = [1, 2, 3, 4, 5];

// forEach
arr.forEach((el) => {
  console.log(el);
});

// Map
let double = arr.map((el) => {
  return el * el;
});

console.log(double);

//filter :-
let nums = [1, 2, 3, 4, 5];

let ans = nums.filter((el) => {
  return (el % 2 == 0);
});
console.log(ans);

//every :-
let a = [2,4,6,9];

let answer = a.every((el)=>{
    return (el % 2 == 0);
})
console.log(answer);

// some :-
let b = a.some((el)=>{
    return (el % 2 == 0);
})
console.log(b);

// reduce :-
let c = [1,2,3,4];

let d = c.reduce((res,el)=>{
    return (res + el);
})
console.log(d);
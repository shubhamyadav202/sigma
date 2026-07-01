let student = {
  name: "shubham",
  age: 19,
  city: "Mumbai",
  hobby: ["football", "eating"],
};

console.log(student);
console.log(student.name);
console.log(student.age);
console.log(student.city);
console.log(student.hobby[0]);

student.city = "Delhi";
console.log(student);

student.gender = "male";
console.log(student);

// Nested Objects
let classInfo = {
  aman: {
    grade: "A",
    city: "Mumbai",
  },
  shubham: {
    grade: "A+",
    city: "Delhi",
  },
};

console.log(classInfo);

console.log(classInfo.aman);

console.log(classInfo.shubham.city);

classInfo.shubham.city = "Gudgaon";

console.log(classInfo.shubham.city);


let classInformation = [
    {
        name : "aman",
        age : "52",
        city : "Mumbai"
    },
    {
        name : "shubham",
        age : "20",
        city : "Gudgaon"
    }
];

console.log(classInformation[0]);
console.log(classInformation[1].name);

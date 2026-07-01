let a = document.getElementById("mainImg");

let smallImages = document.getElementsByClassName("oldImg");

for(let i = 0;i<smallImages.length;i++)
{
    console.dir(smallImages[i]);
}

let b = document.getElementsByTagName("p");

// Query Selector :-
let tagName = document.querySelector('p');
console.dir(tagName);

let id = document.querySelector('#mainImg');
console.dir(id);

let className = document.querySelector('.box');
console.dir(className);

let d = document.querySelectorAll('div a');
console.dir(d);

// Properties and Methods :-
let para = document.querySelector('p');
console.log(para.innerText);
console.log(para.innerHTML);
console.log(para.textContent);

let heading  = document.querySelector('h1');
heading.innerHTML = `<u> ${heading.innerText} </u>`; // Adding an underline to the existing text

// Manipulating Attributes :-
let img = document.querySelector('img');
console.log(img.getAttribute('id')); // mainImg

console.log(img.setAttribute('id','spiderimg'));

// Manipulating Style :-
let headingText = document.querySelector('h1');
headingText.style.background = 'yellow';

let links = document.querySelectorAll('.box a');
for (link of links) // for of loop
{
    link.style.color = "purple";
}

// classList Property :-
img.classList.add('tony');
img.classList.remove('tony');
console.log(img.classList.contains('abc'));
console.log(img.classList);

// Navigation on page :-

// Parent Element :-
let h4 = document.querySelector('h4');
console.log(h4.parentElement);

// CHild Element :-
let div = document.querySelector('.box');
console.log(div.children);

// Previous Child Sibling / Next Child Sibling :-
console.log(div.previousElementSibling);
div.nextElementSibling.style.color = "green";
console.log(div.nextElementSibling);


// Adding Elements :-
let body = document.querySelector('body');

// Adding a para into the body:
let newPara = document.createElement('p');
para.innerText = "hey I am paradox";
body.appendChild(para);

// Adding a button into the body :
let btn = document.createElement('button');
btn.innerText = "Button";
body.appendChild(btn);

btn.append(" BUTTTONNNNNNNN"); // Mostly we use this one 

// Removing the elements :-
// btn.remove();    
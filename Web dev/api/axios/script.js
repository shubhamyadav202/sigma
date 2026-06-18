let url = "https://catfact.ninja/fact";
let btn = document.querySelector("button");
let body = document.querySelector("body");

btn.addEventListener("click",async()=>{
    let fact = await getFacts();
    let newPara = await document.createElement("p");
    newPara.innerText = fact;
    body.appendChild(newPara);
})

async function getFacts() {
  try {
    let result = await axios.get(url);
    return result.data.fact;
  } catch (error) {
    console.log(error);
    return "No fact Found"; 
  }
}



// async function getFacts() {
//   try {
//     let result = await axios.get(url);
//     console.log(result.data);
//     console.log(result.data.fact);
//   } catch (error) {
//     console.log(error);
//   }
// }

// getFacts();
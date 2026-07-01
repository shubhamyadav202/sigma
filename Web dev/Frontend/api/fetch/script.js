let url = "https://catfact.ninja/fact";

// fetch(url)
//   .then((result) => {
//     return result.json();
//   })
//   .then((data) => {
//     console.log("Data 1 : ",data);
//     return fetch(url);
//   })
//   .then((result) => {
//     return result.json();
//   })
//   .then((data) => {
//     console.log("Data 2 : ",data);
//   })
//   .catch((error) => {
//     console.log(error);
//   });

// Fetching with async and await :-
async function getFacts() {
  try {
    let result = await fetch(url);
    let data = await result.json();
    console.log(data.fact);
  } catch (error) {
    console.log(error);
  }       
}

getFacts();

let url = "http://universities.hipolabs.com/search?name=";
let btn = document.querySelector("button");

btn.addEventListener("click", async () => {
  let country = document.querySelector("input").value;//input ka value country me store kiya

  let collegeArray = await getColleges(country);
  showColleges(collegeArray);
});

async function showColleges(collegeArray) {
    let ul = await document.querySelector("ul");
    ul.innerText = "";// this empties the ul
    for (colleges of collegeArray) {
        let li = await document.createElement("li")
        li.innerText = colleges.name;
        ul.appendChild(li);
  }
}

async function getColleges(country) {
  try {
    let result = await axios.get(url + country);
    return result.data;
  } catch (error) {
    console.log(error);
  }
}

getColleges();

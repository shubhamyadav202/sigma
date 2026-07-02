const express = require("express");
const app = express();

let port = 8080;

app.listen(port, () => {
  console.log("App is Listening");
});

// app.get("/:username", (req, res) => {
//     let {username} = req.params;
//     res.send(`Hello I am ${username}`);
// });

app.get("/:username", (req, res) => {
    let {username} = req.params;
    let htmlStr = `<h1>Hello I am ${username}</h1>`;
    res.send(htmlStr);
});

// app.get("/:username/:id", (req, res) => {
//     let {username,id} = req.params;
//     res.send(`Hello I am ${username} id:${id}`);
// });
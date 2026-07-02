const express = require("express");
const app = express();

let port = 8080;

app.listen(port, () => {
  console.log("App is Listening");
});

app.get("/", (req, res) => {
  res.send("You contacted root path");
});

app.get("/search", (req, res) => {
  res.send("You contacted search path");
});

app.get("/about", (req, res) => {
  res.send("You contacted about path");
});


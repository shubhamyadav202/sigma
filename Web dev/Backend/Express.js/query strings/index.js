const express = require("express");
const app = express();

let port = 8080;

app.listen(port, () => {
  console.log("App is listening");
});

app.get("/search", (req, res) => {
  let { q } = req.query;
  if (!q) {
    res.send("<h1> Nothing Searched </h1>");
  }
  res.send(`<h1> Search Results for query : ${q}</h1>`);
});

const express = require("express");
const app = express();

let port = 8080;

app.listen(port, () => {
  console.log(`app is listening on port : ${port}`);
});

app.use((request, response) => {
  //   console.log(request);
    // response.send("I am Response");
  //   response.send({ name: "shubham", surname: "yadav" });
  let code ="<h1>Fruits</h1> <ul><li>apple</li><li>orange</li></ul>";
  response.send(code);
  console.log("Request Received");
});

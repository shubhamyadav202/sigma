const url = "https://icanhazdadjoke.com/";

async function getJokes()
{
    try{
        let config = {headers : {Accept : "application/json"}};
        let result = await axios.get(url,config);
        console.log(result.data.joke);
    }
    catch(error)
    {
        console.log(error);
    }
}

getJokes();
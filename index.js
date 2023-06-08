//index.js
const http=require('http');
const server = http.createServer((req, res)=>{
  res.writehead( 200,{'content-type': 'text/plain'});
  res.end('hello World \n');
});

server.listen( 3000, () =>{
  console.log('Server running at http://localhost:8080/');
});

let heading=document.getElementById("heading");
        let button=document.getElementById("button");
        button.addEventListner("click", function()
        {
          heading.style.color="red";});
     

let myImage = document.querySelector('img');

myImage.onclick = function() {
  let mySrc = myImage.getAttribute('src');
  if(mySrc === 'images/##') {
    myImage.setAttribute ('src','images/##');
  } else {
    myImage.setAttribute ('src','images/##');
  }
}

// Personalized welcome message code

let myButton = document.querySelector('button');
let myHeading = document.querySelector('h1');

function setUserName() {
  let myName = prompt('Please enter your name.');
  if(!myName) {
    setUserName();
  } else {
    localStorage.setItem('name', myName);
    myHeading.innerHTML = 'TreasureMine is cool, ' + myName;
  }
}

if(!localStorage.getItem('name')) {
  setUserName();
} else {
  let storedName = localStorage.getItem('name');
  myHeading.innerHTML = 'TreasureMine is cool, ' + storedName;
}

myButton.onclick = function() {
  setUserName();
}

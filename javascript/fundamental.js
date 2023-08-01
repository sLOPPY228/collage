let colorBox = document.getElementById('color-box')
const changeColorButton = document.querySelector('#change-color')
let colorNameBox = document.getElementById('color-name')
colorNameBox = colorBox.style.backgroundColor;
colorNameBox.innerText = colorBox.style.backgroundColor;


changeColorButton.addEventListener('click',()=>{
    colorBox.style.backgroundColor = `rgb(${Math.random()*250},${Math.random()*250},${Math.random()*250})`   
    console.log(changeColorButton)
})
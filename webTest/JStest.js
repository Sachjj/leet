function displaySum(){
    let firstNum = Number(document.getElementById('firstNum').innerHTML)
    let secondNum = Number(document.getElementById('secondNum').innerHTML)

    let total = firstNum + secondNum;

    document.getElementById('answer').innerHTML = `${firstNum} + ${secondNum} = ${total}`;
}

const eventList = document.getElementById('sumButton');
if(eventList){
    eventList.addEventListener('click', displaySum);
}
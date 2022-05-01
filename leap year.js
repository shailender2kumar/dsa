let result = document.getElementById("result");
let btn =document.getElementById("get-leap-year");
btn.addEventListener("click",() =>{
    let Startyear = Number(document.getElementById("start-year").value);
    let endyear = Number(document.getElementById("end-year").value);
    if(
        (Startyear<1582||Startyear>2999)&&
    (endyear<1582||endyear>2999)){
        result.innerHTML ="invalid";
    }
    else if(Startyear>endyear){
        result.innerHTML ="check"
    }
    else if(Startyear>2999||Startyear<1582){
        result.innerHTML ="check start"
    }
    else if(endyear<1582||endyear >2999){
        result.innerHTML ="checkend"
    }
    else {
        //Empty array to store the leap years
        let leapYears = [];
        for (let i = Startyear; i <= endyear; i++) {
          //Determine if a year is a leap year
          //If true push it into leapYears[]
          if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
            leapYears.push(i);
          }
        }
        //Display leap years in result div
        //toString() returns a string with comma seperated values
        //Use combo of split() and join() to replace ',' with ', '
        result.innerHTML = `<b>There are ${
          leapYears.length
        } leap years between ${Startyear} & ${endyear}.</b><span>${leapYears.toString().split(",").join(", ")}</span>`;
        }
 });



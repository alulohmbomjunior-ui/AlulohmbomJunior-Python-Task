//this is my homework( A guessing number Game)
    
let secretNumber = 7

let guess = prompt("Guess a number between 1 and 10")

guess = Number(guess)

if (guess == secretNumber) {
    console.log("Congratulations! You won")
}
else {
    console.log("Wrong guess! Try again")
}



//And this is my class work (g to kg converter)

let grams = prompt("Enter the weight in grams")

grams = Number(grams)

let kg = grams / 1000

console.log("The weight in kilograms is: " + kg + " kg")


let secretNumber = 7

let guess = prompt("Guess a number between 1 and 10")

guess = Number(guess)

if (guess == secretNumber) {
    console.log("Congratulations! You won")
}
else {
    console.log("Wrong guess! Try again")
}

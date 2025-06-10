const checkBal = () => {
  var avlBal = 50000;
  return avlBal;
};

const withDraw = () => {
  var amt = parseInt(prompt("Enter amount: "));
  var avlBal = checkBal();
  if (amt < avlBal) {
    console.log("Successful withdraw!!");
    avlBal -= amt;
    console.log("Remaining balance: " + avlBal);
  } else {
    console.log("Insufficient balance..");
    console.log("your available balance is: " + checkBal());
  }
};

const deposit = () => {
  var amt = parseInt(prompt("Enter amount to deposit: "));
  var avlBal = checkBal();
  avlBal += amt;
  console.log("Amount deposited successfully!");
  console.log("Available balance: " + avlBal);
};

var pin = 382421;

const atm = () => {
  let accNum = parseInt(prompt("Enter account Number: "));
  let userPin = parseInt(prompt("Enter pin: "));

  if (userPin == pin) {
    let choice = parseInt(
      prompt("Enter choice: \n1__checkBalance\n2__withdraw\n3__deposit")
    );
    switch (choice) {
      case 1:
        let avlBal = checkBal();
        console.log("your available balance: " + avlBal);
        break;
      case 2:
        withDraw();
        break;
      case 3:
        deposit();
        break;
    }
  } else {
    console.log("Invalid credentials...");
  }

  console.log("Thank you for visiting ATM");
};

atm();

def main():
    print("1: diposit")
    print("2: withdraw")
    print("3: checkBalance")
    print("4: exit")
    amount = 50000
    amt = 0
    
    while(1):
        choice = int(input("Enter choice: "))
        
        match(choice):
            case 1:
                amt = diposit(amount)
                checkBalance(amt)
                amount = amt
            case 2:
                amt = withdraw(amt)
                if(amt==0):
                    print("Minium balance should remain 10000, it exceds limitation")
                else:
                    checkBalance(amt)
                amount = amt 
            case 3:
                checkBalance(amt)
            case 4:
                exit(0)

def diposit(original):

    amt = int(input("Enter amount to deposit: "))

    original += amt
    return original

def withdraw(original):
    amt = int(input("Enter amount to withdraw: "))
    original = original - amt
    if(original<=10000):
        return 0
    
    return original

def checkBalance(amount):
    print("Total balance: ",amount)

if __name__ == "__main__":
    main()
    

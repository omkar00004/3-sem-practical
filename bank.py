'''Write a Python program that computes the net amount of a bank account based a transaction
log from console input. The transaction log format is shown as following: D 100 W 200
(Withdrawal is not allowed if balance is going negative. Write functions for withdraw and
deposit) D means deposit while W means withdrawal.
Suppose the following input is supplied to the program:
D 300, D 300 , W 200, D 100 Then, the output should be: 500'''

data=[]

def deposit(balance):
    enter_deposit=int(input("What amount you want to deposit? "))
    data.append(f"${enter_deposit} Deposited.")
    print(f"D ${enter_deposit}")
    balance += enter_deposit
    return balance
    
def withdraw(balance):
    withdraw_deposit=int(input("What amount you want to withdraw? "))
    if balance>0:
        data.append(f"${withdraw_deposit} Withdrawn.")
        print(f"W ${withdraw_deposit}")
        balance -= withdraw_deposit
        return balance
    else:
        print("Not enough balance could not initiate transaction.")
    
def log():
    print("\t\t ---------You're transaction log---------")
    for i in data:
        print(f"\t{i}")
        
def display(balance):
    print(f"Your balance is ${balance}.")
    
        
balance=0
end_game=False
while not end_game:
    print("1.DEPOSIT\n2.WITHDRAW\n3.DISPLAY BALANCE\n4.BANK TRANSACTION LOG BOOK")
    operation = int(input("What operation do you want to perform? "))
    if operation==1:
        balance=deposit(balance)
    elif operation==2:
        balance=withdraw(balance)
    elif operation==4:
        log()
    elif operation==3:
      display(balance)
    elif operation=="end":
        end_game=True
        

class Transaction:
    def __init__(self, transaction_type, amount):
        self.transaction_type = transaction_type
        self.amount = amount


class Account:
    def __init__(self, account_number, owner_name, initial_balance=0):
        self.account_number = account_number
        self.owner_name = owner_name
        self.balance = initial_balance
        self.transactions = []

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            self.transactions.append(Transaction("Deposit", amount))
            return f"Deposited ${amount} into account {self.account_number}. New balance: ${self.balance}"
        else:
            return "Invalid deposit amount."

    def withdraw(self, amount):
        if 0 < amount <= self.balance:
            self.balance -= amount
            self.transactions.append(Transaction("Withdrawal", amount))
            return f"Withdrew ${amount} from account {self.account_number}. New balance: ${self.balance}"
        else:
            return "Insufficient funds or invalid withdrawal amount."

    def get_balance(self):
        return f"Account {self.account_number} balance: ${self.balance}"

    def view_transaction_history(self):
        history = []
        for transaction in self.transactions:
            history.append(f"{transaction.transaction_type}: ${transaction.amount}")
        return "\n".join(history)


class Bank:
    def __init__(self):
        self.accounts = {}
        self.account_counter = 1000  # Starting account number

    def open_account(self, owner_name, initial_balance=0):
        self.account_counter += 1
        new_account = Account(self.account_counter, owner_name, initial_balance)
        self.accounts[self.account_counter] = new_account
        return new_account

    def get_account(self, account_number):
        if account_number in self.accounts:
            return self.accounts[account_number]
        else:
            return "Account not found."


# Example usage:
if __name__ == "__main__":
    bank = Bank()

    account1 = bank.open_account("John Doe", 1000)
    account2 = bank.open_account("Alice Smith", 500)

    print(account1.deposit(500))
    print(account1.withdraw(200))
    print(account1.get_balance())
    print(account1.view_transaction_history())

    print(account2.deposit(200))
    print(account2.withdraw(100))
    print(account2.get_balance())
    print(account2.view_transaction_history())

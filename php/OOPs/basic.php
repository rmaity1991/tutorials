<?php

class BankAccount
{
	public $accountNumber;

	public $balance;

	public function deposit($amount)
	{
		if ($amount > 0) {
			$this->balance += $amount;
		}
	}

	public function withdraw($amount)
	{
		if ($amount <= $this->balance) {
			$this->balance -= $amount;
			return true;
		}
                return false;

	}

    public function showBalance(){
        echo "The balance is " . $this->balance;
    }
}


$account = new BankAccount();

$account->accountNumber = 1;
$account->balance = 1000;

$account->deposit(100);

$account->withdraw(300);

$account->showBalance();


?>
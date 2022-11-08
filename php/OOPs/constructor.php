<?php

class ClassName
{
	function __construct()
	{
		// implementation
	}
}

$object = new ClassName();

class BankAccount
{
	private $accountNumber;
	private $balance;

	public function __construct($accountNumber, $balance)
	{
		$this->accountNumber = $accountNumber;
		$this->balance = $balance;
	}
    

}

$account = new BankAccount(1, 100);
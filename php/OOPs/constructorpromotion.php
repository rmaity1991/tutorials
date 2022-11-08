<?php

class BankAccount1
{
	function __construct( private $accountNumber, private $balance)
	{	
	}

}

class BankAccount2
{
	function __construct(private $accountNumber, private $balance, $type)
	{	
 	}
}


?>

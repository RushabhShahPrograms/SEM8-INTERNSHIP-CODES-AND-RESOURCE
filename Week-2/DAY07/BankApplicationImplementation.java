/*
Author: Rushabh Shah

Date of Creation: 13th Feb 2023

Subject: Creating the Banking Application using Java 
where admin can login and help customer to deposit, 
withdrwal the money from account as well as check balance of account.
*/
package javaapplication2;

import java.util.Scanner;

class Bank
{
	private int custID,accountNo;
        private String adminUser, adminPassword;
	private String custName,custUserName,custPassword,gender,maritialStatus;
	private float balance,deposit,withdrawal;
	
	Bank() //default constructor
	{
		balance=10000;
		gender="MALE";
		maritialStatus="U";
		custName="Rushabh Shah";
                adminUser="admin";
                adminPassword="admin";
	}
	
	void depositAmount()
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the amount you want to deposit: ");
		deposit = obj.nextFloat();
		if(deposit>0)
		{
			balance=balance+deposit;
		}
		else
		{
			System.out.println("The deposit amount cannot be less than or equal to zero");
		}
	} //End of DepositAmount
	
	void withAmount()
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the withdrawal amount: ");
		withdrawal = obj.nextFloat();
		float tempBalance = balance-withdrawal;
		if(tempBalance<10000)
		{
			System.out.println("Insufficient Amount");
		}
		else
		{
			balance=tempBalance;
		}
	} //End of withdrawalAmount
	
	void checkBalance()
	{
		if(gender.equalsIgnoreCase("MALE") && maritialStatus.equalsIgnoreCase("U"))
		{
			System.out.println("Master "+custName+" your balance is "+balance);
		}
		else if(gender.equalsIgnoreCase("MALE") && maritialStatus.equalsIgnoreCase("M"))
		{
			System.out.println("Mr. "+custName+" your balance is "+balance);
		}
		else if(gender.equalsIgnoreCase("FEMALE") && maritialStatus.equalsIgnoreCase("U"))
		{
			System.out.println("Miss "+custName+" your balance is "+balance);
		}
		else
		{
			System.out.println("Mrs. "+custName+" your balance is "+balance);
		}
	} //End of checkBalance
        
        int loginAdmin(String uAdmin,String pAdmin)
        {
            if(uAdmin.equals(adminUser) && pAdmin.equals(adminPassword))
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        
        static void showAdminMenu()
        {
            System.out.println("1) Create Customer");
            System.out.println("2) Display Customer");
            System.out.println("3) Exit");
        } //End of showAdminMenu
	
	void createCustomer()
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the custid: ");
		custID = obj.nextInt();
		System.out.println("Enter the account number: ");
		accountNo = obj.nextInt();
		System.out.println("Enter the customer name: ");
		custName = obj.next();
		System.out.println("Enter the username you want to set: ");
		custUserName=obj.next();
		System.out.println("Enter the password: ");
		custPassword=obj.next();
	} //End of createCustomer
	
	void displayCustomer()
	{
		System.out.println(custID+"\t"+accountNo+"\t"+custUserName+"\t"+custPassword+"\t"+balance);
	}
}

public class BankApplicationImplementation
{
	public static void main(String[] args)
	{
		Scanner obj = new Scanner(System.in);
		Bank objBank = new Bank();
		Bank objBank1[]=new Bank[2];
		while(true)
		{
                        System.out.println("1) Admin Login");
                        System.out.println("2) Customer Login");
                        System.out.println("3) Exit");
                        int choice=obj.nextInt();
                        
			switch(choice)
                        {
                            case 1:System.out.println("Plese Enter username and password: ");
                                String uAdmin=obj.next();
                                String pAdmin=obj.next();
                                if(objBank.loginAdmin(uAdmin,pAdmin)==1)
                                {
                                    Bank.showAdminMenu();
                                    System.out.println("Enter the choice: ");
                                    int choiceAdmin=obj.nextInt();
                                    switch(choiceAdmin)
                                    {
                                        case 1: for(i=0;i<2;i++)
					{
						objBank1[i]=newBank();
						objBank1[i].createCustomer();
					}//createCustomer();
                                        break;
                                        case 2: System.out.println("cid\taccount\tcname\tusername\tpassword\tbalance");
						    for(int i=0;i<2;i++)
						    {
							    objBank1[i].displayCustomer();
						    }//displayCustomer();
                                        break;
                                        case 3: System.out.println("Exit");
                                        break;
                                    } //End of Admin Menu Switch
                                }
                                else
                                {
                                    System.out.println("Please enter correct username and password");
                                }
                                break;
                                
                            case 2: System.out.println("Customer Login");
                            System.out.println("1) Deposit");
                            System.out.println("2) Withdrawal");
                            System.out.println("3) check Balance");
                            System.out.println("4) Exit");
                            System.out.println("Enter the choice: ");
                            int key=obj.nextInt();
                            switch(key)
                            {
                                    case 1:objBank.depositAmount();
                                    break;
                                    case 2:objBank.withAmount();
                                    break;
                                    case 3:objBank.checkBalance();
                                    break;
                                    case 4:System.exit(0);
                                    break;
                            } //End of switch of customer login
                            case 3: System.exit(0);
                        } //End of main switch
		} //End of While
	}
}

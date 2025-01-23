import mysql.connector as m
import random
from datetime import datetime


con=m.connect(host="localhost", user="root",passwd="")
if con.is_connected():#Checking connectivivty
    print('Successfully connected')
else:
    print('Not Connected!')
#hi  
#Creating cursor object
co=con.cursor()
co.execute('create database if not exists Banksystem')#creating database
co.execute('use Banksystem')
#creating table
co.execute('create table if not exists accountBrief(Name varchar(100) not null ,AccountNumber varchar(20) unique primary key,PhoneNumber varchar(10)unique, Balance int ,AadharNum varchar(16) unique)')
co.execute('create table if not exists TransactDetails(AccountNumber varchar(20) primary key ,Name varchar(89),AmountTransact int,Date varchar(40))')
co.execute('create table if not exists UniqAccount(uniID varchar(6) unique,AccountNumber varchar(20) unique,Name varchar(30) not null,AadharNum varchar(45) unique)')

#Open account
def openAcc():
    ac=random.randint(1000000,9999999)     #Generating Account Number
    u=random.randint(100,999)
    while True:
        n=input('Enter name for which account to be created:')
        if n == "":
            print('Kindly Enter Name to proceed further')
            print('Also all information ask are mandatory to fill.')
        else:
            break
    p=int(input('Enter phone number:'))
    if len(str(p))>10 or len(str(p))<10:
        print('\t\t\t!!!!!!>-WRONG INPUT-<!!!!!!\t\t\t')
        openAcc()
    ad=input('Enter your address:')
    e=input('Enter your email:')
    while True:
        if e.endswith('.com'):
            print('Ok')
            break
        else:
            print('invalid email!')
            break
    db=input('Enter date of birth[YYYY/MM/DD]:')
    while True :
        ob=input('Enter opening balance:')
        if ob == '0' or ob == "":
            print('Please enter opening balance.')
        else:
            print('OK')
            break
    ci=input('Enter city:')
    pi=int(input('Enter pincode:'))
    aa=int(input('Enter your Aadhar Number:'))
    if len(str(pi))>6:
           print('Invalid Pincode!!')
           openAcc()
    print()
    print('KINDLY NOTE:YOUR ACCOUNT NUMBER =' ,ac)
    print('AND YOUR UNIQUE ID:',u)
    c=con.cursor()
    data2=(n,ac,p,ob,aa)
    c.execute("insert into account values('{}',{},'{}','{}','{}',{},'{}',{})".format(n,ac,db,e,ad,ob,ci,pi))
    sq2='insert into accountBrief values(%s,%s,%s,%s,%s)'
    c.execute(sq2,data2)
    data3=(u,ac,n,aa)
    sq3='insert into UniqAccount values(%s,%s,%s,%s)'
    c.execute(sq3,data3)
    con.commit()
    print('Following Data Entered successfully:')
    di={'Name':n,'Address':ad,'Email':e,'PhoneNumber':p,'DateOfBirth':db,'OpeningBalance':ob,'City':ci,'ACCOUNT_NUMBER':ac,'Pincode':pi,'AadharNumber':aa}
    for key in di:                              
        print(key,':',di[key])                  #Displaying Data 
    print()
    main1()
#forgotAC
def fac():
    n=input("Enter account holder's name:")
    a=input('Enter your aadhar number:')
    c=input('Enter your unique id:')
    b='select AccountNumber from UniqAccount where uniID = %s'
    data = (c,)
    c = con.cursor()
    c.execute(b,data)
    my = c.fetchone()
    print('Your Account Number is :',my[0])
    
#Deposit amount
def depo():
    ac=int(input('Enter Account Number:'))
    am=input('Enter Amount To Deposit:')
    c=con.cursor()
    c.execute("update accountBrief set balance = balance + {} where accountNumber = '{}'".format(am,ac))
    con.commit()
    print('AMOUNT SUCCESSFULLY DEPOSITED')
    c.execute("select*from accountBrief where accountNumber = '{}'".format(ac))
    mm=c.fetchall()
    print()
    print('ACCOUNT DETAILS:')
    print('NAME:',mm[0][0])
    print('ACCOUNT NUMBER:',mm[0][1])
    print('CURRENT BALANCE:',mm[0][3])
    print()
    main1()
    
#Withdraw amount
def witha():
    try:
        import datetime
        n=input("Enter Account holder's name[cases of letter should be same]:")
        ac=input('Enter Account Number:')
        am=int(input('Enter Amount To Withdraw:'))
        # Get current date and time
        dt = datetime.datetime.now()
        # Replace microseconds with zero
        da = dt.replace(microsecond=0)
        da1=str(da)
        c=con.cursor()
        c.execute("insert into TransactDetails values('{}','{}',{},'{}')".format(ac,n,am,da1)) 
        s='select balance from accountBrief where accountNumber = %s'
        a=(ac,)
        c.execute(s,a)
        myresult = c.fetchall()
        tam = myresult[0][0]-am                     #To Deduct Amount From Balance
        sql='update accountBrief set balance = %s where accountNumber = %s'
        d=(tam,ac)
        c.execute(sql,d)
        con.commit()
        c.execute("select*from accountbrief where accountNumber='{}'".format(ac))
        mm=c.fetchall()
        #print(mm)
        print('ACCOUNT DETAILS:')
        print('NAME:',mm[0][0])
        print('ACCOUNT NUMBER:',mm[0][1])
        print('CURRENT BALANCE:',mm[0][3])
        print()
        main1()
    except:
        print('Invalid input')
        print(' kindly,check all information that you have entered.')
        witha()
#Transactdetails
def transactd():
    ac=input('Enter Account number:')
    a='select*from TransactDetails where accountNumber = %s'
    data = (ac,)
    c = con.cursor()
    c.execute(a,data)
    my = c.fetchall()              #Fetching details from table
    l=len(my)
    i=l-1
    print()
    print('Your recent transaction details is as follows:')      
    print('Account number:',my[i][0])
    print('Name:',my[i][1])
    print('Amount Withdraw:',my[i][2])
    print('Time:',my[i][3])
    main1()
    
#check balance
def bal():
    ac = input('Enter Account number:')
    a='select balance from accountBrief where accountNumber = %s'
    data = (ac,)
    c = con.cursor()
    c.execute(a,data)
    my = c.fetchone()             #Fetching balance from table
    print('Balance For Your Account is: Rs.',my[0])
    print()
    main1()
    
#display details
def disp():
    ac = input('Enter Account number:')
    a = 'select*from account where accountNumber = %s'
    data = (ac,)
    c = con.cursor()
    c.execute(a,data)
    mm = c.fetchone()
    s='select balance,PhoneNumber from accountBrief where accountNumber = %s'
    a=(ac,)
    c.execute(s,a)
    m = c.fetchall()
    print('ACCOUNT DETAILS:')                 #Displaying all customer details
    print('NAME:',mm[0])
    print('ACCOUNT NUMBER:',mm[1])
    print('DATE OF BIRTH:',mm[2])
    print('PHONE NUMBER:',m[0][1])
    print('EMAIL:',mm[3])
    print('ADDRESS:',mm[4])
    print('CURRENT BALANCE:',m[0][0])
    print('CITY:',mm[6])
    print('PINCODE:',mm[7])
    print()
    main1()
    
#close Account
def close():
    ac = input('Enter Account Number:')
    sq = 'delete from accountBrief where accountNumber = %s'
    sq1 = 'delete from account where accountNumber = %s'
    data = (ac,)
    c = con.cursor()
    c.execute(sq,data)              #Deleting table1
    c.execute(sq1,data)             #Deleting table2
    con.commit()
    print('ACCOUNT CLOSE SUCCESSFULLY')
    main1()
    
#update Information
def update():
     ac = input('Enter Account number:')
     print("'N' below denotes to update information other than name,phone number and address in your bank account.")
     ch=input('What do you want to change? [name/phone number/address/N]:')
     c=con.cursor()
     if ch == 'name'or ch == 'NAME' or ch == 'Name':
         n=input('enter new name:')
         cl='update account set name = %s where accountNumber = %s'
         l=(n,ac)
         c.execute(cl,l)
         con.commit()
         c.execute("update accountbrief set name = '{}' where accountNumber = '{}'".format(n,ac))
         con.commit()
         c.execute("update transactdetails set name = '{}' where accountNumber = '{}'".format(n,ac))
         con.commit()
         c.execute("update Uniqaccount set name = '{}' where accountNumber = '{}'".format(n,ac))
         con.commit()
         print('INFORMATION UPDATE SUCCESSFULLY')
         print()
     elif ch=='phone number' or ch=='Phone number' or ch=='Phone Number':
         p=input('enter new number:')
         s='update accountBrief set PhoneNumber = %s where accountNumber = %s'
         a=(p,ac)
         c.execute(s,a)
         con.commit()
         print('INFORMATION UPDATE SUCCESSFULLY')
         print()
     elif ch=='address' or ch=='Address'or ch=='ADDRESS':
         a=input('Enter new address:')
         cv='update account set Address = %s where accountNumber = %s'
         d=(a,ac)
         c.execute(cv,d)
         con.commit()
         print('INFORMATION UPDATE SUCCESSFULLY')
         print()
     elif ch == 'N' or ch =='n':
         w=input('change email?[Y/N]:')
         if w=='y' or w=='Y':
             e=input('enter new email:')
             c.execute("update account set Email = '{}' where accountNumber = '{}'".format(e,ac))
             con.commit()
             print('EMAIL UPDATED SUCCESSFULLY')
             print()
             u=input('Do you want to change anything else?[Y/N]:')
             if u=='Y' or u=='y':
                 update()
             else:
                 main1()
         else:
             print('KINDLY READ OUR POLICY')
             print('THANK YOU')
             print()
     else:
         print('KINDLY READ OUR POLICY')
         po()
         print()
         
#Login 
def login():
    username=input('Enter your username:')
    password=input('Enter your password:')
    mycursor=con.cursor()
    mycursor.execute('select username from signup')
    user1=mycursor.fetchall()
    con.commit()
    user2=[]
    for i in range(len(user1)):
        user2.append(user1[i][0])
    mycursor=con.cursor()
    mycursor.execute('select password from signup')
    pw1=mycursor.fetchall()
    con.commit()
    pw2=[]
    for i in range(len(pw1)):
        pw2.append(pw1[i][0])
    if (username not in user2) or (password not in pw2):
        print('wrong USERNAME OR PASSWORD!')
        f=1
        while True:
            f=int(input('PRESS 1 FOR RETRY OR PRESS 2 FOR EXIT'))
            if f == 1:
                login()
            else:
                exit()
    else:
        print()
        cur=con.cursor()
        print('\t\t************LOGIN SUCCESSFULLY************\t\t')
        cur.execute("create table if not exists account(Name varchar(89) not null,AccountNumber varchar(20) primary key, DateOfBirth date not null,Email varchar(20) not null, Address varchar(89) not null, OpeningBalance int not null, City varchar(10) not null, Pincode int not null)")
        con.commit()
        main1()
        print()
#login 2.0
def main1():
    while True:
        print()
        print('\t\t\tPress 1 for Opening New Account\t\t\t')
        print('\t\t\tPress 2 to Deposit Amount\t\t\t')
        print('\t\t\tPress 3 to Withdraw Amount\t\t\t')
        print('\t\t\tPress 4 for Balance Enquiry\t\t\t')
        print('\t\t\tPress 5 to Display Details\t\t\t')
        print('\t\t\tPress 6 for Information Updation\t\t\t')
        print('\t\t\tPress 7 for Close Account\t\t\t')
        print('\t\t\tPress 8 to Provide Account Number(if forgotted)\t\t\t')
        print('\t\t\tPress 9 to View Recent Transaction\t\t\t')
        print('\t\t\tPress ZERO for EXIT\t\t\t')
        print()
        try:
            a=input('Enter what you want to do?:')
            if a == '1':
                openAcc()
            elif a=='2':
                depo()
            elif a=='3':
                witha()
            elif a=='4':
                bal()
            elif a=='5':
                disp()
            elif a=='7':
                close()
            elif a=='6':
                update()
            elif a=='8':
                fac()
            elif a=='9':
                transactd()
            elif a=='0':
                print('\t\t\t>>>>>>>>>--THANK YOU--<<<<<<<<\t\t')
                print('\t\t\t>>>>>>--HAVE A GOOD DAY--<<<<<\t\t')
                exit()
            else:
                print('INVALID INPUT')
            main1() 
        except:
            print('Invalid Input')
            print('kindly please check all the details that you have entered.')
            print('Details should be entered in prescribed format !')
            main1()
             
#Signup
def signup():
    print()
    print('\t\t##########{WELCOME TO A.R.BANK SYSTEM}##########\t\t')
    print()
    print('\tKINDLY READ OUR POLICY CAREFULLY:\t\t')
    print('1.KINDLY GIVE AUTHENTIC DETAILS AND ALL DETAILS ASK ARE MANDATORY TO FILL.\t\t')
    print('2.UPDATION OF CITY AND PINCODE ARE ALLOWED.')
    print('3.KINDLY GIVE CORRECT INPUT WHENEVER ASKED OR ELSE YOU WILL NOT BE ABLE TO USE OUR SYSTEM.')
    print('ABOVE ARE SOME MUST READ DETAILS THAT YOU SHOULD KNOW.')
    print('FOR MORE DETAILS,KINDLY GO THROUGH OUR WEBSITE(www.arbankol.com).')
    print()
    print('SIGNUP HERE:')
    try:
        while True:
            username=input('Enter your name:')
            if username == "":
                print('Please enter your name.')
            else:
                print('OK')
                break
        while True:
            password=input('Enter password:')
            if password == "":
                print('Please enter your name.')
            else:
                print('OK')
                break
        mycursor=con.cursor()
        mycursor.execute('create table if not exists signup(Username varchar(20) not null,Password varchar(20) not null)')
    except:
        print('INVALID INPUT.')
        sign()
    mycursor.execute("insert into signup values('{}','{}')".format(username,password))
    con.commit()
    print("\t\t****************SIGNUP SUCCESSFULLY*************\t\t")
    s=str(input('DO YOU WANT TO CONTINUE ? [yes/no] :'))
    if s == 'yes' or s == 'YES' or s == 'Yes':
        print('NOW PLEASE LOGIN TO CONTINUE')
        login()
    elif s == 'no' or s == 'NO' or s == 'No':
        print('\t\t\t>>>>>>>>>--THANK YOU--<<<<<<<<\t\t')
        print('\t\t\t>>>>>>--HAVE A GOOD DAY--<<<<<\t\t')
    else:
        print('\t\t\t!!!!!!>-WRONG INPUT-<!!!!!!\t\t\t')
        print('\t\t\t>>>>>>>>>--THANK YOU--<<<<<<<<\t\t')
        print('\t\t\t>>>>>>--HAVE A GOOD DAY--<<<<<\t\t')
#_main_
print('\t\t************************************************\t\t')
print()
print('\t\t########  { WELCOME TO A.R.BANK SYSTEM } #######\t\t')
print()
print('\t\t************************************************\t\t')
try:
    cs=input('Enter to login or signup[1/2]:')
    if cs == '1':
        login()
    elif cs == '2':
        signup()        
    else:
        while True:
            print('\t\t\t!!!!!!>-WRONG INPUT-<!!!!!!\t\t\t')
            print('Now you have only one last chance:')
            cs=input('Enter to login or signup[1/2]:')
            if cs == '1':
                login()
            elif cs == '2':
                signup()
            else:
                print('\t\t\t>>>>>>>>>--THANK YOU--<<<<<<<<\t\t')
                print('\t\t\t>>>>>>--HAVE A GOOD DAY--<<<<<\t\t')
                break      
except:
    print('\t\t\t!!!!!!>-WRONG INPUT-<!!!!!!\t\t\t')
    cs=input('Enter to login or signup[1/2]:')
    if cs == '1':
        login()
    elif cs == '2':
        signup()        
    else:
        print('\t\t\t!!!!!!>-WRONG INPUT-<!!!!!!\t\t\t')
        print('Now you have only one last chance:')
        cs=input('Enter to login or signup[1/2]:')
        if cs == '1':
            login()
        elif cs == '2':
            signup()
        else:
            print('\t\t\t>>>>>>>>>--THANK YOU--<<<<<<<<\t\t')
            print('\t\t\t>>>>>>--HAVE A GOOD DAY--<<<<<\t\t')

                
    
        
      
                    
                
                
                
                


        
        




    
    

    
    
    
    
    
    


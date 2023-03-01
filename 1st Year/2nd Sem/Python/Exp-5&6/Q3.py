''' At an airport, a traveler is allowed entry into the flight only if he clears the following checks: 
1. Baggage Check 
2. Immigration Check 
3. Security Check 
The logic for the check methods are given below: 
check_baggage (baggage_weight) 
· returns True if baggage_weight is greater than or equal to 0 and less than or equal to 40. 
Otherwise returns False. 
check_immigration (expiry_year) 
· returns True if expiry_year is greater than or equal to 2030 and less than or equal to 2050. 
Otherwise returns False. 
check_security(noc_status) 
· returns True if noc_status is 'valid' or 'VALID', for all other values return False. 
traveler() 
· Initialize the traveler Id and traveler name and invoke the functions check_baggage(), 
check_immigration() and check_security() by passing required arguments.Refer the table below for values of arguments. 
· If all values of check_baggage(), check_immigration() and check_security() are true, 
- display traveler_id and traveler_name 
- display "Allow Traveler to fly!" 
Otherwise, 
- display traveler_id and traveler_name 
- display "Detain Traveler for Re-checking! 
Invoke the traveler() function. Modify the values of different variables in traveler() function and observe the output.
'''

def baggage_check(amount):
    if amount in range(0,41):
        return True
    else:
        return False

def immigration_check(expiry_year):
    if expiry_year in range(2030,2051):
        return True
    else:
        return False

def security(noc_status):
    return noc_status

def traveler():
    traveler_id = 1001
    traveler_name = "Jim"
    baggageAmount = 35
    expiryDate = 2019
    noc_status = "Valid"
    if baggage_check(baggageAmount) is True & immigration_check(expiryDate) is True and security(noc_status) is True:
        print(traveler_id , traveler_name , "Allow travel to fly")
    else:
        print(traveler_id , traveler_name , "Detain traveler for rechecking")

traveler()

echo "Enter Any Name"
read name
echo $name > temp
rvs="$(rev temp)"
if [ $name = $temp ]
then
        echo "It Is Palindrome"
else
        echo "It Is Not Palindrome"
fi

#Output
Enter Any Name
rar
It Is Palindrome 

Enter Any Name
ram
It Is Not Palindrome 
#

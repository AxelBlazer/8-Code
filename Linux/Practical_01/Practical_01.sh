echo "Enter Three Subject Marks."
read a
read b
read c
sum=`expr $a + $b + $c`
echo "Sum Is : $sum"
per=`expr $sum / 3`
echo "Percentage Is : $per"
if [ $per -ge 75 ]
then
        echo "You Get Distinction"
elif [ $per -ge 55 ]
then
        echo "You Get Average"
elif [ $per -ge 35 ]
then
        echo "You Get Pass"
else
        echo "You Get Fail"
fi

# Output
Enter Three Subject Marks.
89
85
75
Sum Is : 249
Percentage Is : 83
You Get Distinction

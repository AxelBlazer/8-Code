echo "Enter Any Number : "
read b
i=2
while [ $i -lt $b ]
do
  if [ `expr $b % $i` -eq 0 ]
  then
      echo "$b Is Not A Prime Number"
      exit
  fi
  i=`expr $i + 1`
done
echo "$b Is A Prime Number "

# output :
Enter Any Number :
13 
13 Is A Prime Number
Enter Any Number :
68 
68 Is Not A Prime Number 

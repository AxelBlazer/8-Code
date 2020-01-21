echo "Enter Any Number"
read a
fact=1
for((i=2;i<=a;i++))
{
        fact=$((fact*i)) # fact=`expr $fact \* $i`
}
echo "Factorial Is : $fact"

# Output
5
Factorial Is : 120

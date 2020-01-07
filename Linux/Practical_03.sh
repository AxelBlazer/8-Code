echo "Enter Any Number"
read a
fact=1
for((i=2;i<=a;i++))
{
        fact=$((fact*i))
}
echo $fact

# Output
5
120

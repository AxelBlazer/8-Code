echo "Enter A String"
read a
echo "Upper Case String Is"
echo "$a" | awk '{print toupper($0)}'

#Output
Enter A String
AxElBlAzEr
Upper Case String Is
AXELBLAZER
#

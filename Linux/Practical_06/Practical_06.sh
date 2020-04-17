while :
do
        echo "a. Display Calendar Of Current Month"
        echo "b. Display Today's Date And Time"
        echo "c. Display Usernames Those Are Currently Logged In The System"
        echo "d. Display Your Name At Given x, y Position"
        echo "e. Display Your Terminal Number"
read ch
case $ch in
        a) cal;;
        b) date;;
        c) echo $USER;;
        d) tput cup 3 6;;
        e) tty;;
        *) exit;;
esac
done

#Output
a. Display Calendar Of Current Month
b. Display Today's Date And Time
c. Display Usernames Those Are Currently Logged In The System
d. Display Your Name At Given x, y Position
e. Display Your Terminal Number
a
   February 2020
Su Mo Tu We Th Fr Sa
                   1
 2  3  4  5  6  7  8
 9 10 11 12 13 14 15
16 17 18 19 20 21 22
23 24 25 26 27 28 29
a. Display Calendar Of Current Month
b. Display Today's Date And Time
c. Display Usernames Those Are Currently Logged In The System
d. Display Your Name At Given x, y Position
e. Display Your Terminal Number
b
Mon Feb 10 13:49:48 UTC 2020
a. Display Calendar Of Current Month
b. Display Today's Date And Time
c. Display Usernames Those Are Currently Logged In The System
d. Display Your Name At Given x, y Position
e. Display Your Terminal Number
c
AxelBlazer
a. Display Calendar Of Current Month
b. Display Today's Date And Time
c. Display Usernames Those Are Currently Logged In The System
d. Display Your Name At Given x, y Position
e. Display Your Terminal Number
e
/dev/pts/0
a. Display Calendar Of Current Month
b. Display Today's Date And Time
c. Display Usernames Those Are Currently Logged In The System
d. Display Your Name At Given x, y Position
e. Display Your Terminal Number
g

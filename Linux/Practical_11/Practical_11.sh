dd=0
mm=0
yyyy=0
days=0

echo -n "Enter Day : "
read dd

echo -n "Enter Month : "
read mm

echo -n "Enter Year : "
read yyyy

if [ $mm -le 0 -o $mm -gt 12 ];
then
    echo "$mm Is Invalid Month."
    exit 1
fi

case $mm in
    01) days=31 ;;
    02) days=28 ;;
    03) days=31 ;;
    04) days=30 ;;
    05) days=31 ;;
    06) days=30 ;;
    07) days=31 ;;
    08) days=31 ;;
    09) days=30 ;;
    10) days=31 ;;
    11) days=30 ;;
    12) days=31 ;;
    *) days=-1 ;;
esac

if [ $mm -eq 2 ];
then
        if [ $((yyyy % 4)) -ne 0 ];
        then
           :
        elif [ $((yyyy % 400)) -eq 0 ];
        then
          days=29
        elif [ $((yyyy % 100)) -eq 0 ];
        then
           :
        else
           days=29
        fi
fi

if [ $dd -le 0 -o $dd -gt $days ];
then
    echo "$dd Day Is Invalid"
    exit 3
fi

echo "$dd-$mm-$yyyy Is A Vaild Date"

#Output
Enter Day : 23
Enter Month : 05
Enter Year : 2008
23-05-2008 Is A Vaild Date

Enter Day : 29
Enter Month : 02
Enter Year : 2020
29-02-2020 Is A Vaild Date
#

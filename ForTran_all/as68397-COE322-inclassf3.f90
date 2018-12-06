program challenge_three

implicit none
integer ::a,d,e
real::b,c
read*,a
b=a/3.0
c=a/5.0
d=a/3
e=a/5

if (b==d .and. c==e) then
 print*, "FizzBuzz"
else if (b ==d .and. c/=e) then
 print*,"Fizz"
else if (c==e .and. b/=d) then 
 print*,"Buzz"
end if
end program


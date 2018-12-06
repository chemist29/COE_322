program challenge_four

integer::a,b
read*,a,b

if (mod(b,a)==0) then
 print*, a,' is a divisor of ',b
else if(mod(b,a)/=0) then 
 print*, a,' is not  a divisor of ',b
end if

end program


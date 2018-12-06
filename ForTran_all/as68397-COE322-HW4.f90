program primes

implicit none

integer ::i,j
integer:: prime

do i = 0,99
 if (i==1 .or. i ==0) then
  print *,i," is not prime by definition"
 end if
 if (i ==2) then
  print *,i," is prime"
 end if
 prime = 1
 do j =2,i-1
  if (mod(i,j)==0) then
   print *,i," is not prime ",j," is a factor"
   prime = 1
   exit
  else
   prime = 0;
  end if
 end do
 if (prime ==0) then
  print *,i," is prime"
 end if  
end do
  
end program


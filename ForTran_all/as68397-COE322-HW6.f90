program prime_subprogram

implicit none
integer :: p
print *,"enter an integer"
read *, p
print *,prime_teller(p),p
contains 
 logical function prime_teller(i)
  integer :: i,j,k
  logical ::prime = .False.
  k =i-1
  if (i==1 .or. i ==0) then
   prime_teller = .False.
  end if
  if (i ==2) then
   prime_teller = .True.
  end if
  if (i >2) then 
   do j =2,k
    if (mod(i,j)==0) then
     prime = .False.
     exit
    else 
     prime = .True.
    end if
   end do
   prime_teller =prime
  end if
 end function prime_teller

end program



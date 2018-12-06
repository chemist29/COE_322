program prime_subprogram

implicit none
integer :: p
print *,"How many primes do you want?"
read *, p
call prime_vector(p)

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
subroutine prime_vector (num_tot_prime)
  integer :: num_tot_prime,k,c
  logical :: b
  integer, dimension(num_tot_prime) :: A
  k =0
  c =2
  do while (k < (num_tot_prime))
   if ( prime_teller(c) == .True.) then
    a(k+1) = c
    k = k + 1
    c = c + 1
   else
    c = c + 1
   end if
  end do
  print *,A
end subroutine prime_vector

 
end program



program array1
implicit none 
integer :: i
real, dimension(5) :: A = (/ 1,2,3,4,5/)
real, dimension(5) :: B

do i = 1,5
 print *, A(i)
end do 
print *, A
end program array1

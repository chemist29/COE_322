program s
implicit none

integer :: i,j

i =5
j = 7
print *, i,j !original 
call swap(i,j)
print *, i,j  

contains
subroutine swap(a,b)
integer  :: a,b,c,d
c=a
d=b
a=d
b=c

end subroutine swap
end program s

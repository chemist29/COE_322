program s
implicit none

integer :: a,b,c

a =5
b=10 
c= sum(a,b)

print* , a,b,c

contains 
integer function sum(a,b)
	integer :: a,b
	sum = a+b
end function

end program s

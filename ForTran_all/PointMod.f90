module PointMod
implicit none
type Point
 real ::x
 real ::y
end type Point
Point :: p
Point :: q
contains
 real function distance(p,q)
	real :: c,d
	Point :: p
	Point :: q
	c = p%x-q%x
	d = p%y-q%y
	distance = (c*c+d*d)**0.5
 end function
end module PointMod

program main
use PointMod
implicit none
print *,"code working so far"

end program main 


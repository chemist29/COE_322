program F2
implicit none
real :: a,b,c
real :: pi =3.1415
character(8)::name 
!integer :: d =(a*b*c)/7
print *,'Enter 4 terms, a,b,c,name'
read *, a,b,c,name
print *, 'hello ',name,'!'
print *,(4.0/3)*pi*a**3.0
print *,a*b*c

end program

program pythagoren_triplets

implicit none

integer :: u,v,w,a,b,c

do u =1,99
 a = u
 do v = 1,99
  b=v
  do w = 1,99
   c=a*a+b*b
   if (c==w*w .and. a<b) then
	print *, a,",",b,",",w
   end if
  end do
 end do
end do

end program

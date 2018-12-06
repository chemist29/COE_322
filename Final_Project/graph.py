import numpy
import matplotlib as plt


### Displace Random Weight DIMER affect on Saddle Force Calls ###
SADDLE_E = [[.299,.324,.325,.326,.337,.348,.357,.358,.359,.360,.368,.370,.389,.390,.391,1.276,1.278,2.076,2.156,2.484]]
x = [0,0.3,0.6,0.9]
plt.gca().set_color_cycle(['red', 'green', 'blue', 'yellow','black'])
plt.plot(x,SADDLE1 )
plt.scatter(x,SADDLE1 )
plt.scatter(x,Saddle2 )
plt.scatter(x,Saddle3 )
plt.scatter(x,Saddle4 )
plt.scatter(x,Saddle5 )
plt.plot(x, Saddle2)
plt.plot(x, Saddle3)
plt.plot(x, Saddle4)
plt.plot(x,Saddle5)
plt.legend(['Saddle 1 (0.588)', 'Saddle 2 (0.607)', 'Saddle 3 (0.983)', 'Saddle 4 (.985)','Saddle 5 (0.986)'], loc='lower left')
plt.xlabel('Probability of Displacing Randomly')
plt.ylabel('Avg. Force Calls',color='b')
#plt.show()
savefig('Dimer_Displace_Random_Weight.png')


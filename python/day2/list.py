fruits=["papaya","apple",'bananna','naspati',"kiwi"]
print(fruits[0])
print(fruits[2])
print(fruits[2:])#yesle chai 2 no sahit tespaxi ko dinixa 
print(fruits[-1])#last element
print(fruits[:2])#let you guess this 
print(fruits[-1:])#yesma - le kei bigardaina : agdai ki paxadi xa tesaile nai farak parxa
print(fruits[0:2])
fruits.append("tomato")
print(fruits)
fruits.insert(1,"pumpking")#no. of position ma basna dinxa insert le 
print(fruits)
#delete : 
fruits.remove("papaya")
print(fruits)
#pop 
fruits.pop(1)#aghillo batai execute vako huda apple lai remove handinxa ra return gardinxa 
print(fruits)
value=fruits.pop(1)
print(value)
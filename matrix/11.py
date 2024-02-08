from random import randint


class food_order:
    def __init__(self, billid, orderid, name, price, id):
        self.billid = billid
        self.orderid = orderid
        self.price = price
        self.name = name
        self.id = id


class food(food_order):

    def __init__(self, name, price):
        super().__init__('', '', name, price,'')

    def display(self):
        print("food:" + self.name)
        print("Price:" + str(self.price))


class Lunch(food_order):
    def __init__(self, billid, orderid):
        super().__init__(billid, orderid, '', None, '')

    def display(self):
        print("billid:" + str(self.billid))
        print("orderid:" + str(self.orderid))


class customer(food_order):

    def __init__(self, name, id):
        super().__init__('', '', name, None, id)

    def display(self):
        print("customer:" + self.name)
        print("customer id:" + str(self.id))


lunches = []
foods = []
customers = []
print("enter q to quit anytime:")
while (True):
    name = input("enter name:")
    if name == 'q':
        break
    billid = randint(0, 99999)
    orderid = randint(0, 99999)
    food_name = input("enter name of food item:")
    price = randint(0, 1000)
    print("price of " + food_name + " is " + str(price))
    id = randint(0, 124910)
    tc = customer(name, id)
    tl = Lunch(billid, orderid)
    tf = food(food_name, price)
    lunches.append(tl)
    foods.append(tf)
    customers.append(tc)

for i in range(len(lunches)):
    lunches[i].display()
    foods[i].display()
    customers[i].display()
    print("--------------")

# Q61.py - Program to Add Two Distances (inch-feet) Using Structures
class Distance:
    def __init__(self, feet, inch):
        self.feet = feet
        self.inch = inch

def add_dist(d1, d2):
    total_inch = d1.inch + d2.inch
    extra_feet, inch = divmod(total_inch, 12)
    feet = d1.feet + d2.feet + extra_feet
    return Distance(feet, inch)

d1 = Distance(int(input("Feet: ")), float(input("Inch: ")))
d2 = Distance(int(input("Feet: ")), float(input("Inch: ")))
sum_dist = add_dist(d1, d2)
print(f"Sum: {sum_dist.feet} feet {sum_dist.inch} inch")
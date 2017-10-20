import sys

class Node(object):
    def __init__(self, name):
        self.name=name
        self.children=[]
        self.alive=True
        self.visited=False
        
    def addParent(self, parentNode):
        self.parent=parentNode

    def addChild(self, childNode, dob):
        self.children.append((dob,childNode))

    def markDead(self):
        self.alive=False

    def finalize(self):
        self.children.sort()

    def getHeir(self):
        print >> sys.stderr, 'Visiting',self.name
        if self.alive:
            return self
        self.markVisited()
        if self.children!=[]:
            for dob,child in self.children:
                if child.isVisited():
                    continue
                return child.getHeir()
        return self.parent.getHeir()
                    
        

    def markVisited(self):
        self.visited=True

    def isVisited(self):
        return self.visited

nodes={}
regentName=raw_input()
numNodes=int(raw_input())
for i in range(numNodes-1):
    parent,child=raw_input().split()
    if parent not in nodes:
        nodes[parent]=Node(parent)
    if child not in nodes:
        nodes[child]=Node(child)
    nodes[parent].addChild(nodes[child],i)
    nodes[child].addParent(nodes[parent])
    
numDead=int(raw_input())
for i in range(numDead):
    deadName=raw_input()
    nodes[deadName].markDead()

for name in nodes:
    nodes[name].finalize()

print 'God save',nodes[regentName].getHeir().name


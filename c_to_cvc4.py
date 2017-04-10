#
#   Created by Ravi Kumar
#
#   Date Mar 22,2017
#

#!/usr/bin/python
import sys
import os
import re
import string
from sys import getsizeof
from sets import Set
from pythonds.basic.stack import Stack

#---------------------------------------support function---------------------------------------#

def dataType(x):
    return {
        'int': 'INT',
        'char': 'CHAR',
        'bool': 'BOOL',
    }[x]

#-----------------Strip left and right-----------------#
def bothSideStrip(stat):
	stat = stat.lstrip()
	stat = stat.rstrip()
	return stat

#-----------------For condtion symbol-----------------#
def findCond(cond):
	if cond.find("==") >= 0:
		return "="
	if cond.find("<=") >= 0:
		return "<="
	if cond.find(">=") >= 0:
		return ">="
	if cond.find("<") >= 0:
		return "<"
	if cond.find(">") >= 0:
		return ">"

#-----------------Extract between two substring-----------------#
def find_between( s, first, last ):
    try:
        start = s.rindex( first ) + len( first )
        end = s.rindex( last, start )
        return s[start:end]
    except ValueError:
        return ""

#-----------------Define Array Data Structure-----------------#
def defineArray(array_d,dt):
	print array_d
	if array_d.count('[')==1 :
		i = find_between(array_d,"[","]")
		s = array_d.split('[')
		file.write("A: TYPE = ARRAY INT OF REAL;\n")
		file.write(s[0]+": A;\n")
		file.write(s[0]+"_array: INT = "+i+";\n")
		file.write("elem: REAL = "+s[0]+"["+s[0]+"_array]")
	else:
		k = array_d.split('][')
		s = k[0].split('[')[0]
		i1 = k[0].split('[')[1]
		i2 = k[1].split(']')[0]
		file.write("A: TYPE = ARRAY INT OF REAL;\n")
		file.write(s+": A;\n")
		file.write(s+"_array1: INT = "+i1+";\n")
		file.write(s+"_array2: INT = "+i2+";\n")
		file.write("elem: REAL = "+s+"["+s+"_array1]["+s+"_array2]")
	return

#-----------------Data Type Declaration-----------------#
def defDataType( string ,file):
    string = string[:-1]
    dt = dataType(string.split(' ', 1)[0])
    if '[' in string.split(' ', 1)[1]:
		defineArray(string.split(' ', 1)[1],dt)
		return
    file.write(string.split(' ', 1)[1] + " : " + dt)
    return;

#-----------------For loop condition extraction-----------------#
def for_cond_init(cond,init):
	init = bothSideStrip(init)
	cond = bothSideStrip(cond)
	init = init.replace("int","")
	init = bothSideStrip(init)
	v = init.split("=")
	var = bothSideStrip(v[0])
	i1 = bothSideStrip(v[1])
	c2 = findCond(cond)
	g = cond.split(c2)
	i2 = bothSideStrip(g[1])
	c1 = ">="
	return i1,i2,c1,c2,var;
	

#-----------------Read file and parse it to CVC4-----------------#
def cToCvc4(name,fo,file):

	#search for main function
	lookup = 'main'
	start=-1;

	for num, line in enumerate(fo, 1):
	    if lookup in line:
	        start = num
	        break

	#abort if main function not found
	if start == -1 :
	    sys.exit("Aborting!!!\nError : main() function is missing")
	

	fo.seek(0)

	l = fo.readlines()

	st = Stack()

	st_assert = 0

	for i in range(start,len(l)):
		l[i] = bothSideStrip(l[i])
		if not l[i] or l[i].startswith('{'):
			continue
		l[i] = l[i].replace("==", " = ")
		l[i] = l[i].replace("&&", " AND ")
		l[i] = l[i].replace("&", " AND ")
		l[i] = l[i].replace("false", " FALSE ")
		l[i] = l[i].replace("true", " TRUE ")
		print l[i]
		if l[i].startswith('int') or l[i].startswith('char') or l[i].startswith('bool'):
			defDataType(l[i],file)
		elif l[i].startswith('if'):
			cond = find_between(l[i],"(",")")
			st.push('i')
			if st_assert == 0 :
				file.write("ASSERT ")
				st_assert = 1
			file.write("IF "+ cond +" THEN\n")
			continue
		elif l[i].startswith('for'):
			f = find_between(l[i],"(",")")
			f1 = f.split(";")
			init = f1[0]
			cond = f1[1]
			bool_cond = ""
			var="x"
			print "c "+ cond
			if "<" in cond or ">" in cond or "=" in cond :
				i1,i2,c1,c2,var = for_cond_init(cond,init)
				bool_cond = i1+" "+c1+" "+var+" AND "+var+" "+c2+" "+i2
			else :
				bool_cond = cond
			st.push('f')
			if st_assert == 0 :
				file.write("ASSERT ")
				st_assert = 1
			file.write("FORALL ( "+var+" : INT) : "+bool_cond+" =>\n")
			continue
		elif l[i].startswith('while'):
			cond = find_between(l[i],"(",")")
			st.push('f')
			var="x"
			if st_assert == 0 :
				file.write("ASSERT ")
				st_assert = 1
			file.write("FORALL ( "+var+" : INT) : "+cond+" =>\n")
			continue
		elif l[i].startswith('}else'):
			st.pop()
			file.write(" ELSE\n")
			st.push('e')
			continue
		elif l[i].startswith('}'):
			if not st.isEmpty():
				if st.peek() == 'f' :
					st.pop()
					l[i+1] = bothSideStrip(l[i+1])
					if not st.isEmpty():
						if (not l[i+1].startswith('}') ) and (st.peek() == 'f' or st.peek() == 'i' or st.peek() == 'e') :
							print st.peek()
							sys.exit("This is not supported by this Parser")

						if l[i+1].startswith('}') and (st.peek() == 'f' or st.peek() == 'i' or st.peek() == 'e') :
							continue

			if not st.isEmpty():
				if st.peek() == 'e' :
					st.pop()
					file.write(" ENDIF")

		elif l[i].startswith('return'):
			break;
		else :
			if st_assert == 0 :
				file.write("ASSERT ")
			file.write(l[i][:-1])
		print st.size()
		if st.isEmpty():
			file.write(" ;\n\n")
			st_assert = 0
		else :
			l[i+1] = bothSideStrip(l[i+1])
			if l[i+1].startswith('}else') or l[i+1].startswith('}') :
				print 'w'
				continue
			else :
				file.write(" AND\n")
		print i

#---------------------------------------main function---------------------------------------#

# Open a file 1
p = sys.argv
fo = open(p[-3], "r")
fo1 = open(p[-2], "r")
v = p[-1]

#naming file name
name=fo.name
name = name[:-1]
extension="cvc4"
name=name+extension

print name

#creating file for smt2
try:
    os.remove(name)
except OSError:
    pass

file=open(name,'a')

cToCvc4(name,fo,file)
cToCvc4(name,fo1,file)

for i in range(0,int(v)):
	x = raw_input("Enter first variable to proof sat : ")
	y = raw_input("Enter second variable to proof sat : ")
	file.write("CHECKSAT NOT "+x+" = "+y+" ;\n")

print "Parser is completed it's work.. Done by RK"
sys.exit()


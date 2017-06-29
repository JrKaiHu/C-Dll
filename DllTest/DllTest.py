from ctypes import *

import ctypes

class SUB_PARA1(Structure):
    _fields_ = [ ("nPara1", c_int),
                 ("nPara2", c_int)]

class SUB_PARA2(Structure):
    _fields_ = [ ("nPara3", c_int),
                 ("nPara4", c_int)]

class SUB_PARA3(Structure):
    _fields_ = [ ("nPara5", c_int),
                 ("nPara6", c_int)]

class PROFILE(Structure):
    _fields_ = [("szName", c_char * 20),
                ("szAge", c_char * 20)]

class PARAMETER(Structure):
    _fields_ = [ ("type", c_int),
                 ("SUB_PARA1", SUB_PARA1),
                 ("SUB_PARA2", SUB_PARA2),
                 ("SUB_PARA3", SUB_PARA3),
                 ("PROFILE", PROFILE)]

dll = CDLL("MathDll.dll")
para = PARAMETER()
para.type = 1
para.SUB_PARA1.nPara1 = 5
para.SUB_PARA1.nPara2 = 1
para.SUB_PARA2.nPara3 = 20
para.SUB_PARA2.nPara4 = 17
para.SUB_PARA3.nPara5 = 3
para.SUB_PARA3.nPara6 = 9

para.PROFILE.szName = b'Wolf'
para.PROFILE.szAge = b'36'

print(dll.Add(byref(para)))

nPara1 = c_int(5)
nPara2 = c_int(10)

print(dll.Sub(byref(nPara1), byref(nPara2)))
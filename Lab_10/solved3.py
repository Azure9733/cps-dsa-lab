class MAHE:
# Class Variable
    student = 'MIT'
    # The init method or constructor
    def __init__(self, branch, section):
    # Instance Variable
        self.branch = branch
        self.section = section
    # Objects of MAHE class
Vaanya = MAHE("EIE", "3A")
Paul = MAHE("CPS", "3B")
print('Vaanya details:\n================')
print('Vaanya is a UG student of: ',Vaanya.student)
print('Branch: ', Vaanya.branch)
print('Section: ', Vaanya.section)
print('\nPaul details:\n================')
print('Vaanya is a UG student of: ', Paul.student)
print('Branch: ', Paul.branch)
print('Section: ', Paul.section)
# Class variables can be accessed using class and name also
print("\nAccessing class variable using class name is :", MAHE.student)
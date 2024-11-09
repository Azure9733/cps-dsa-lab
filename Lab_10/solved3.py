class MAHE:
    student = 'MIT'
    def __init__(self, branch, section):
        self.branch = branch
        self.section = section
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
print("\nAccessing class variable using class name is :", MAHE.student)

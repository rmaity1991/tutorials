from multiprocessing.sharedctypes import Value
import unittest
import main
# Here we have importrd the file which needs testing in the system as you can see the main file. and we have imported unitest. 
# To create tests we need to create a test class which inherits from the unittest.TestCase. which we have done BELOW_NORMAL_PRIORITY_CLASS

# to create a test, we need to define the test with test_ naming convention so that the unite test module knows whihc is a test and which is not

class TestMain(unittest.TestCase):
    

    def test_add(self): # we have defined the test name as test_add as we are testing te add function.
        self.assertEqual(main.add(10,20),30) # here as we have inherited from the unitest class we have several methods to check. her we are using teh assert eual function(function,value).
        self.assertEqual(main.add(20,30),50)
        self.assertEqual(main.add(-10,20),30)

    def test_sub(self):
        self.assertEqual(main.sub(10,20),20)

    def test_div(self):
        self.assertRaises(ValueError,main.div,10,0) # This will help us in testing if any raise exception is raised during operataion
        self.assertRaises(IndexError,main.div,10,0)

        # more better way to do it

        with self.assertRaises(ValueError):
            main.div(10,0)

    # to run the tests in cmd, we use "python -m unittest main_test.py"



if __name__=="__main__":
    unittest.main() # this also helps in running the test directly from the file.



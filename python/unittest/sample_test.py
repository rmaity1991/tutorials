import sample
import unittest


class sample_test(unittest.TestCase):
    # This method runs before every execution of the entire test sequence and runs only once before all tests
    @classmethod
    def setUpClass(cls) -> None:
        print("This is setUpClass")
    # This method runs after all execution of the entire test sequence and runs only once after all tests
    @classmethod
    def tearDownClass(cls) -> None:
        print("This is tearDownClass")
    # This method runs before every test case and creates the objects which need to tested name should be maintained as shown
    def setUp(self) -> None:
        self.emp1=sample.Employee("Rohit","Maity",10000)
        self.emp2=sample.Employee("Rohit","Maity",10000)
    # This method runs after every test case and destroys the objects which need to tested name should be maintained as shown
    def tearDown(self) -> None:
        del self.emp1
        del self.emp2

    def test_email(self):
        self.assertEqual(self.emp1.email,"Rohit.Maity@gmail.com",msg="The Test has Failed")

        self.emp1.first="Romela"
        self.assertEqual(self.emp1.email,'Romela.Maity@gmail.com',msg="The Test has Failed")

        self.emp1.last="Dutta"
        self.assertEqual(self.emp1.email,"Romela.Dutta@gmail.com",msg="The Test has Failed")

    def test_raise_pay(self):
         self.emp1.raise_pay()
         self.emp1.raise_pay()

         self.assertEqual(self.emp1.pay,1500)


if __name__=="__main__":
    unittest.main()



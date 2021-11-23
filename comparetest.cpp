#include "pch.h"
#include "CppUnitTest.h"
#include "../task_61_sem_3/task_61_sem_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace comparetest
{
	TEST_CLASS(comparetest)
	{
	public:
		
		TEST_METHOD(lesselement)
		{
			para input = { 2.5,{3,4} };
			para input_2 = { 2.4,{3,5} };
			bool actual = comp(input, input_2);
			bool exprcted = false;
			Assert::AreEqual(actual, exprcted);
		}
		TEST_METHOD(moreelement)
		{
			para input = { 2.4,{3,4} };
			para input_2 = { 2.5,{3,5} };
			bool actual = comp(input, input_2);
			bool exprcted = true;
			Assert::AreEqual(actual, exprcted);
		}
		TEST_METHOD(equalelementtrue)
		{

			para input = { 2.4,{3,4} };
			para input_2 = { 2.4,{3,5} };
			bool actual = comp(input, input_2);
			bool exprcted = false;
			Assert::AreEqual(actual, exprcted);
		}
		TEST_METHOD(equalelementfalse)
		{

			para input = { 2.4,{3,5} };
			para input_2 = { 2.4,{3,4} };
			bool actual = comp(input, input_2);
			bool exprcted = true;
			Assert::AreEqual(actual, exprcted);
		}
	};
}
/*#include "pch.h"
#include "CppUnitTest.h"
#include "../task_2_sem_3/task_2_sem_3.cpp"
namespace Microsoft {
    namespace VisualStudio {
        namespace CppUnitTestFramework {
            template <> static std::wstring ToString(const vec_2& q) {
                wstringstream s;
                s.precision(4);
				s << "\n";
				for (auto iter = q.begin(); iter != q.end(); iter++) {
					for (auto it = iter->begin(); it != iter->end(); it++) {
						s << *it << " ";
					}
					s <<"\n" ;
				}
                return s.str();
            }
        }
    }
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace d1ind2
{
	TEST_CLASS(d1ind2)
	{
	public:
		
		TEST_METHOD(d1_in_d2_integer)
		{
			vec t_input = {1,2,3,4,5,6,7,8,9};
			vec_2 t_actual = d1_in_d2(t_input, 3, 3);
			vec_2 t_exprcted = { {1,2,3},{4,5,6},{7,8,9} };
			Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(d1_in_d2_double)
		{
			vec t_input = { 1.2,2,-3.3,4,5.6,6 };
			vec_2 t_actual = d1_in_d2(t_input, 2, 3);
			vec_2 t_exprcted = { {1.2,2,-3.3},{4,5.6,6} };
			Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(d1_in_d2_empty)
		{
			vec t_input = {};
			vec_2 t_actual = d1_in_d2(t_input, 0, 0);//ломается
			vec_2 t_exprcted = {};
			Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(one)
		{
			vec t_input = {1};
			vec_2 t_actual = d1_in_d2(t_input, 1, 1);
			vec_2 t_exprcted = { {1} };
			Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(str)
		{
			vec t_input = {1,2,4};
			vec_2 t_actual = d1_in_d2(t_input, 1,3);
			vec_2 t_exprcted = { {1,2,3} };
			Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
		TEST_METHOD(stolb)
		{
			vec t_input = {1,2,3,4,5};
			vec_2 t_actual = d1_in_d2(t_input, 5, 1);
			vec_2 t_exprcted = { {1},{2},{3},{4},{5} };
			Assert::AreEqual(t_actual.size(), t_exprcted.size(), L" different size");
			Assert::AreEqual(t_actual, t_exprcted);
		}
	};
}*/

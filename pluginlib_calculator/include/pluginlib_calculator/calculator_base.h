#ifndef PLUGINLIB_CALCULATOR_
#define PLUGINLIB_CALCULATOR_

namespace calculator_base
{
	class calculator
	{
		public:
			virtual void get_numbers(double number1, double number2) = 0;
			virtual double operation();
			virtual ~calculator(){}
		protected:
			calculator(){}

	};
}

#endif
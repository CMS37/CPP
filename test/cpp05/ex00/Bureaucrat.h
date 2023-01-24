//
// Created by Selim talha Aksoy on 12/20/22.
//

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

# include <iostream>

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name_);
	Bureaucrat(std::string name_, int grade_);
	Bureaucrat(const Bureaucrat& var);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat &var);

	class GradeTooHighException :public std::exception{
		public:
			const char *what() const throw(){
				return "Grade To High";
			}
	};
	class GradeTooLowException:public std::exception{
		public:
			const char	*what() const throw(){
				return "Grade To Low";
			}
	};

	int			getGrade() const;
	void		setGrade(int grade_);
	std::string getName() const;

};

std::ostream &operator<<(std::ostream &out , const Bureaucrat& var);

#endif //BUREAUCRAT_H

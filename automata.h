#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <iostream>
#include <vector>
#include <map>

class Automata{
	public:
		Automata();

		void display() const;

		
		void transitions_table() const;
		void display_transition_table(std::map<int,std::vector<std::string> > ) const;
		

	private:
		int _nb_transitions_possible;
		int _nb_states;
		std::map<int, std::vector<std::string> >  _init_states;
		std::map<int, std::vector<std::string> >  _final_states;
		int _nb_transitions;
		std::vector<std::string> _transitions;


		void get_data_from_file();

		
};

#endif
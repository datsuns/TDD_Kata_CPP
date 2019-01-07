#ifndef TDD_KATA_BOWLING_H_INCLUDED
#define TDD_KATA_BOWLING_H_INCLUDED

class Game{
	public:
		Game();
		void roll(int pins);
		int score(void);
	private:
		int current_score;
};

#endif

#include <gmock/gmock.h>

#include <bowling.h>

using testing::Eq;
using testing::Ne;
using testing::NotNull;

class TestBowling : public testing::Test{
	protected:
		Game* g;
		virtual void SetUp() {
			g = new Game();
		}

		virtual void TearDown() {
			delete g;
		}
};

TEST_F(TestBowling, testGutterGame) {
	for(int i = 0; i < 20; i++){
		g->roll(0);
	}
	EXPECT_THAT(g->score(), Eq(0));
}

TEST_F(TestBowling, testAllOnes) {
	for(int i = 0; i < 20; i++){
		g->roll(1);
	}
	EXPECT_THAT(g->score(), Eq(20));
}


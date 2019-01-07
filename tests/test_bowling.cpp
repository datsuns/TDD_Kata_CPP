#include <gmock/gmock.h>

#include <bowling.h>

using testing::Eq;
using testing::Ne;
using testing::NotNull;

class TestBowling : public testing::Test{
	protected:
		virtual void SetUp() {
		}

		virtual void TearDown() {
		}
};

TEST_F(TestBowling, testGutterGame) {
	Game* g = new Game();
	for(int i = 0; i < 20; i++){
		g->roll(0);
	}
	EXPECT_THAT(g->score(), Eq(0));
	delete g;
}

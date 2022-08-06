#pragma once
namespace Math {
	class Vector2 {
		public: int X;
		public: int Y;

		public:
			Vector2(int x, int y) {
				X = x;
				Y = y;
			}

		public:
			Vector2() {
				X = 0;
				Y = 0;
			}
	};
}

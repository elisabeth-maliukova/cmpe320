#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::Text;
using namespace System::Threading::Tasks;




namespace HelperName
{
	public class Helper {
	private: static System::Void BlendPics(Bitmap^ bg, Bitmap^ front, int deltaX, int deltaY)
	{
		for (int y = 0; y < front->Height; y++) {
			for (int x = 0; x < front->Width; x++) {
				if (front->GetPixel(x, y).A < 255) {
					Color newColor = bg->GetPixel(x + deltaX, y + deltaY);
					front->SetPixel(x, y, newColor);
				}
			}
		}

	}
	public: static System::Void BlendPics(PictureBox^ back, PictureBox^ front)
	{
		int leftDifference = Math::Abs(back->Left - front->Left);
		int topDifference = Math::Abs(back->Top - front->Top);
		BlendPics(cli::safe_cast<System::Drawing::Bitmap^>(back->Image), cli::safe_cast<System::Drawing::Bitmap^>(front->Image), leftDifference, topDifference);
	}
	};
}
#pragma once
using namespace System;
ref class buildingText
{
public:

static String^ bonk = gcnew String("bonk");
static void setvalue(String^ x)
	{
		bonk = x;
	}
static String^ getvalue()
{
		return bonk;

}

};


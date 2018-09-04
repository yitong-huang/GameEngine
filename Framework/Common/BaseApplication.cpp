#include <stdio.h>
#include "BaseApplication.hpp"

int My::BaseApplcation::Initialize()
{
	m_bQuit = false;

	return 0;
}

void My::BaseApplcation::Finalize()
{

}

void My::BaseApplcation::Tick()
{

}

bool My::BaseApplcation::IsQuit()
{
	return m_bQuit;
}
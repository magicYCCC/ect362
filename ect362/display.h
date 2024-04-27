#pragma once
#include "data.h"

#include <Windows.h>

void DrawFluidData(HDC hdc, const std::vector<FluidType>& fluid_type_list);

void DrawPipeData(HDC hdc, const std::vector<PipeSize>& pipe_size_list);


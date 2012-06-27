#include "pch.h"
#include "DWLayoutMetrics.h"

using namespace Prose::Layout;

using namespace Microsoft::WRL;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;

DWLayoutMetrics::DWLayoutMetrics(ComPtr<IDWriteTextLayout> layout, Point origin, Windows::Foundation::Size size) : _layout(layout), _origin(origin), _size(size) {
}
#pragma once
#include "..\Structure\Document.h"
#include "LayoutResult.h"

namespace Prose {
	namespace Layout {
		public interface class ILayoutEngine {
			LayoutResult^ CreateLayout(Prose::Structure::IDocument^ document, Windows::Foundation::Size layoutSize);
		};
	}
}
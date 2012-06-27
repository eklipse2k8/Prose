#include "pch.h"
#include "Run.h"
#include "DocumentVisitor.h"

using namespace Prose::Structure;

Run::Run(void) {}
Run::Run(Platform::String^ text) {
	Text = text;
}

void Run::Accept(DocumentVisitor^ visitor) {
	visitor->Visit(this);
}
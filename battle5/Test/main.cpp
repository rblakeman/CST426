using namespace std;
#include <iostream>
#include "DirtyFlag.cpp"

int main() {

	GraphNode* graph_ = new GraphNode(NULL);
	// Add children to root graph node...
	graph_->render(Transform::origin());


	return 0;
}
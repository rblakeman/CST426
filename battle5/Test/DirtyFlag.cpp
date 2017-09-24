
class Transform
{
public:
	static Transform origin();

	Transform combine(Transform& other);
};

class GraphNode
{
public:
	GraphNode(Mesh* mesh)
		: mesh(mesh),
		local(Transform::origin()),
		dirty(true)
	{}

	// Other methods...
	void render(Transform parentWorld, bool dirty)
	{
		dirty |= dirty;
		if (dirty)
		{
			world = local.combine(parentWorld);
			dirty = false;
		}

		if (mesh) renderMesh(mesh, world);

		for (int i = 0; i < sizeof(children); i++)
		{
			children[i]->render(world, dirty);
		}
	}

	void setTransform(Transform local)
	{
		this->local = local;
		dirty = true;
	}

	void renderMesh(Mesh* mesh, Transform transform);

private:
	Transform local;
	Transform world;
	Mesh* mesh;
	bool dirty;
	// Other fields...
};




#include "wpch.h"
#include "Entity.h"

namespace Wraith {
	Entity::Entity(entt::entity handle, Scene* scene)
		: m_EntityHandle(handle), m_Scene(scene) {}
}
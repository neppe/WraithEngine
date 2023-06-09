#pragma once

#include "Wraith.h"
#include "ParticleSystem.h"

class Sandbox2D : public Wraith::Layer {
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Wraith::Timestep ts) override;
	virtual void OnImGuiRender() override;
	virtual void OnEvent(Wraith::Event& e) override;
private:
	Wraith::OrthographicCameraController m_CameraController;

	Wraith::Ref<Wraith::VertexArray> m_SquareVA;
	Wraith::Ref<Wraith::Shader> m_FlatColorShader;

	Wraith::Ref<Wraith::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };

	ParticleSystem m_ParticleSystem;
	ParticleProps m_Particle;

	uint32_t m_MapWidth, m_MapHeight;
	std::unordered_map<char, Wraith::Ref<Wraith::SubTexture2D>> s_TextureMap;
};
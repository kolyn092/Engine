#pragma once
#include "Collider.h"

namespace ComponentEngine
{
	// 구 콜라이더
	class SphereCollider : public Collider
	{

	private:
		DirectX::SimpleMath::Vector3 m_Center;
		float m_Radius;

	public:
		SphereCollider();
		virtual ~SphereCollider();

	public:
		void SetRadius(float radius);

	private:
		virtual void SetGeometryData() override;

	public:
		virtual void SetCenter(Vector3 pos = Vector3::Zero) override;

	public:
		virtual void Awake() override;

	public:
		virtual void Bind(GameObject* obj) override;
	};

}


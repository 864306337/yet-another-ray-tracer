#pragma once

#include <yart/core/material.h>

namespace yart
{

class YART_API Dielectric : public Material
{
public:
    explicit Dielectric(float rindex) : rindex(rindex) {}
    bool scatter(const RTCRayHit& rayhit,
                 Eigen::Vector3f& rayout,
                 Eigen::Array3f& attenuation) const override;

public:
    float rindex;
};

} // namespace yart

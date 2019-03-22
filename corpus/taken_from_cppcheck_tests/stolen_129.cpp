static const float4  darkOutline(0.05f, 0.05f, 0.05f, 0.95f);
static const float darkLuminosity = 0.05 +
                                    0.0722f * math::powf(darkOutline[2], 2.2);
const float4* ChooseOutlineColor(const float4& textColor)  {
    const float lumdiff = something;
    if (lumdiff > 5.0f)
        return &darkOutline;
    return 0;
}
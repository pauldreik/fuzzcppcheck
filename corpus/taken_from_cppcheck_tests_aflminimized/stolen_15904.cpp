void SmoothPath() {
    {
        float dfx = (p2p0.x > 0.0f)?
                    ((n0->xmax() * SQUARE_SIZE) - p0.x):
                    ((n0->xmin() * SQUARE_SIZE) - p0.x);
        float tx = dfx / dx;
        if (hEdge) {
        }
        if (vEdge) {
            pi.z = tx;
        }
    }
}

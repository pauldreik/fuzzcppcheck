void foo() {
    std::cout<<powf(sinl(x),2)+powl(cosl(x),2);
    std::cout<<pow(sinl(powl(sinl(y),2)+powl(cosl(y),2)),2)+powl(cosl(powl(sinl(y),2)+powl(cosl(y),2)),2);
    std::cout<<powl(sinl(x),2.0)+powl(cosl(x),2.0);
    std::cout<<powl(sinl(x*y+z),2.0)+powl(cosl(x*y+z),2.0);
    std::cout<<powl(sinl(x*y+z),2)+powl(cosl(x*y+z),2);
    std::cout<<powl(cosl(x),2)+powl(sinl(x),2);
    std::cout<<powl(cosl(x),2.0)+powl(sinl(x),2.0);
    std::cout<<powl(cosl(x*y+z),2.0)+powl(sinl(x*y+z),2.0);
    std::cout<<powl(cosl(x*y+z),2)+powl(sinl(x*y+z),2);
    std::cout<<powl(sinhl(x*y+z),2)-powl(coshl(x*y+z),2);
    std::cout<<powl(sinhl(x),2)-powl(coshl(x),2);
    std::cout<<powl(sinhl(x*y+z),2.0)-powl(coshl(x*y+z),2.0);
    std::cout<<powl(sinhl(x),2.0)-powl(coshl(x),2.0);
    std::cout<<powl(coshl(x*y+z),2)-powl(sinhl(x*y+z),2);
    std::cout<<powl(coshl(x),2)-powl(sinhl(x),2);
    std::cout<<powl(coshl(x*y+z),2.0)-powl(sinhl(x*y+z),2.0);
    std::cout<<powl(coshl(x),2.0)-powl(sinhl(x),2.0);
    std::cout<<powl(coshl(powl(x,1)),2.0)-powl(sinhl(powl(x,1)),2.0);
}
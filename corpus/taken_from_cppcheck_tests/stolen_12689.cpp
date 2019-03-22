void foo() {
    try { }
    catch (const Error1 & x) { }
    catch (const X::Error2 & x) { }
    catch (Error3 x) { }
    catch (X::Error4 x) { }
}
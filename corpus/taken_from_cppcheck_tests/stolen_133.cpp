void f(XmDestinationCallbackStruct *ds)
{
    XPoint DropPoint;
    ds->location_data = (XtPointer *)&DropPoint;
}
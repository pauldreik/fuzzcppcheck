void pickup(int a) {
bool using_planner_action;
if (a)   {
  using_planner_action = false;
}
else {
  try
  {}
  catch (std::exception &ex) {
    return;
  }
  using_planner_action = true;
}
if (using_planner_action) {}
}
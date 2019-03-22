MachineLoopRange *MachineLoopRanges::getLoopRange(const MachineLoop *Loop) {
  MachineLoopRange *&Range = Cache[Loop];
  if (!Range)
    Range = new MachineLoopRange(Loop, Allocator, *Indexes);
  return Range;
}
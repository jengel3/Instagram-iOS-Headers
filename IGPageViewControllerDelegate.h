

@protocol IGPageViewControllerDelegate <NSObject>
@optional
-(void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(int)arg3;
-(void)pageViewController:(id)arg1 willShowViewController:(id)arg2;
-(void)pageViewControllerWillBeginDragging:(id)arg1;
-(void)pageViewControllerDidFinishScrolling:(id)arg1;

@end


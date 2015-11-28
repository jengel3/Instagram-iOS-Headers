

@protocol IGGridViewControllerScrollDelegate <NSObject>
@optional
-(void)gridViewControllerDidScroll:(id)arg1;
-(void)gridViewControllerWillBeginDragging:(id)arg1;
-(void)gridViewControllerDidEndDragging:(id)arg1 willDecelerate:(char)arg2;

@end


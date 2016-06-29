

@protocol IGConvexPolygonScrollViewDelegate <NSObject>
@optional
-(void)scrollViewDidEndDragging:(id)arg1;
-(void)scrollViewWillBeginZooming:(id)arg1;
-(void)scrollViewDidEndZooming:(id)arg1;
-(void)scrollViewWillBeginZoomBouncingAnimation:(id)arg1;
-(void)scrollViewDidEndZoomBouncingAnimation:(id)arg1;
-(void)scrollViewWillBeginDragging:(id)arg1;
-(void)scrollViewWillBeginDecelerating:(id)arg1;
-(void)scrollViewDidEndDecelerating:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;

@end


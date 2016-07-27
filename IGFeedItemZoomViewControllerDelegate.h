

@protocol IGFeedItemZoomViewControllerDelegate <NSObject>
@required
-(void)feedItemZoomController:(id)arg1 willEndZoomingWithPosition:(inout CGPoint*)arg2;
-(void)feedItemZoomControllerDidEndZooming:(id)arg1;

@end


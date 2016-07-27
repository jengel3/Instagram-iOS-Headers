

@protocol IGFeedScrollViewDelegate <NSObject>
@required
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(char)scrollViewShouldScrollToTop:(id)arg1;

@end


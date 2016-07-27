

@protocol IGFeedItemPhotoCellDelegate <NSObject>
@required
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(char)arg2;
-(void)feedItemPhotoCellDidInitialSingleTap:(id)arg1;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1;
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1;

@end




@protocol IGFeedItemPhotoCellDelegate <NSObject>
@required
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1;
-(void)feedItemPhotoCellDidInitialSingleTap:(id)arg1;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1;
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(char)arg2;

@end


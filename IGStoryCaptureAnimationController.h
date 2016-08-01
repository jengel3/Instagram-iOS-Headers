

@class UIView, IGMainFeedViewController;

@interface IGStoryCaptureAnimationController : NSObject {

	UIView* _snapshotView;
	IGMainFeedViewController* _feedViewController;

}

@property (nonatomic,retain) UIView * snapshotView;                                      //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) IGMainFeedViewController * feedViewController;              //@synthesize feedViewController=_feedViewController - In the implementation block
-(char)beginAnimationIfPossible;
-(id)initWithSnapshotView:(id)arg1 hostingView:(id)arg2 feedViewController:(id)arg3 ;
-(IGMainFeedViewController *)feedViewController;
-(char)canPerformTransition;
-(void)setFeedViewController:(IGMainFeedViewController *)arg1 ;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
@end


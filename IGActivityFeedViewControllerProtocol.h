
@class IGViewController;


@protocol IGActivityFeedViewControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGActivityFeedViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) IGViewController * containingViewController; 
@required
-(void)fetchData;
-(void)setDelegate:(id)arg1;
-(id<IGActivityFeedViewControllerDelegate>)delegate;
-(id)scrollView;
-(void)setContainingViewController:(id)arg1;
-(IGViewController *)containingViewController;

@end


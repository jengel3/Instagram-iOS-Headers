
@class IGViewController;


@protocol IGNewsListViewControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGNewsListViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) IGViewController * containingViewController; 
@required
-(void)fetchData;
-(void)setDelegate:(id)arg1;
-(id<IGNewsListViewControllerDelegate>)delegate;
-(id)scrollView;
-(void)setContainingViewController:(id)arg1;
-(IGViewController *)containingViewController;

@end


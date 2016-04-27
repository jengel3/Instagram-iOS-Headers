
@class NSString, UIScrollView, UIViewController;


@protocol IGShareManager <NSObject>
@property (nonatomic,copy) NSString * shareString; 
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController * delegate; 
@required
-(void)setShareString:(id)arg1;
-(id)initWithMediaMetadata:(id)arg1;
-(void)configureWithHeaderView:(id)arg1;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)setDelegate:(id)arg1;
-(UIViewController *)delegate;
-(UIScrollView *)scrollView;

@end


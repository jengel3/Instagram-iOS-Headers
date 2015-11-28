
@class NSString, UIScrollView;


@protocol IGShareManager <NSObject>
@property (nonatomic,copy) NSString * shareString; 
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController*<IGShareManagerDelegate> delegate; 
@required
-(id)initWithMediaMetadata:(id)arg1;
-(void)setShareString:(id)arg1;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)setDelegate:(id)arg1;
-(UIViewController*<IGShareManagerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)setHeaderView:(id)arg1;

@end


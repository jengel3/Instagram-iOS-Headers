

@protocol IGWebViewControllerBrowsing <NSObject>
@property (assign,nonatomic,__weak) id<IGWebViewControllerBrowsingDelegate> browsingDelegate; 
@required
-(id<IGWebViewControllerBrowsingDelegate>)browsingDelegate;
-(void)setBrowsingDelegate:(id)arg1;

@end




@protocol IGInsightsComponentViewController <NSObject>
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
@required
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end


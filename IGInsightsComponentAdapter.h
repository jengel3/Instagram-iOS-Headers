

@protocol IGInsightsComponentAdapter <NSObject>
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
@required
-(id)initWithComponent:(id)arg1;
-(id)componentView;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end


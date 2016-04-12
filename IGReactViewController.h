
#import <Instagram/IGViewController.h>

@class NSString, RCTRootView;

@interface IGReactViewController : IGViewController {

	NSString* _appKey;
	RCTRootView* _rctRootView;

}

@property (nonatomic,copy) NSString * appKey;                        //@synthesize appKey=_appKey - In the implementation block
@property (nonatomic,retain) RCTRootView * rctRootView;              //@synthesize rctRootView=_rctRootView - In the implementation block
-(char)prefersTabBarHidden;
-(NSString *)appKey;
-(void)setAppKey:(NSString *)arg1 ;
-(RCTRootView *)rctRootView;
-(void)setRctRootView:(RCTRootView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end


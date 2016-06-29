
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, IGUnifiedWebViewToolbar, NSString;

@interface IGUnifiedWebViewScrollViewToolbarCoordinator : NSObject <UIScrollViewDelegate> {

	char _navigationToolbarIsTransitioning;
	char _navigationToolbarIsPresented;
	UIScrollView* _scrollView;
	IGUnifiedWebViewToolbar* _navigationToolbar;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) IGUnifiedWebViewToolbar * navigationToolbar;              //@synthesize navigationToolbar=_navigationToolbar - In the implementation block
@property (assign,nonatomic) char navigationToolbarIsTransitioning;                             //@synthesize navigationToolbarIsTransitioning=_navigationToolbarIsTransitioning - In the implementation block
@property (assign,nonatomic) char navigationToolbarIsPresented;                                 //@synthesize navigationToolbarIsPresented=_navigationToolbarIsPresented - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewPanGestureRecognized:(id)arg1 ;
-(char)navigationToolbarIsPresented;
-(char)navigationToolbarIsTransitioning;
-(void)setNavigationToolbarIsTransitioning:(char)arg1 ;
-(IGUnifiedWebViewToolbar *)navigationToolbar;
-(void)setNavigationToolbarIsPresented:(char)arg1 ;
-(void)panGestureRecognizerEnded:(id)arg1 ;
-(void)presentToolbar;
-(void)hideToolbar;
-(id)initWithScrollView:(id)arg1 navigationToolbar:(id)arg2 ;
-(UIScrollView *)scrollView;
@end


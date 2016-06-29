
#import <UIKit/UIViewController.h>
#import <Instagram/RCTViewControllerProtocol.h>

@protocol UILayoutSupport, RCTWrapperViewControllerNavigationListener;
@class UIView, RCTEventDispatcher, RCTNavItem, NSString;

@interface RCTWrapperViewController : UIViewController <RCTViewControllerProtocol> {

	UIView* _wrapperView;
	UIView* _contentView;
	RCTEventDispatcher* _eventDispatcher;
	float _previousTopLayoutLength;
	float _previousBottomLayoutLength;
	id<UILayoutSupport> _currentTopLayoutGuide;
	id<UILayoutSupport> _currentBottomLayoutGuide;
	id<RCTWrapperViewControllerNavigationListener> _navigationListener;
	RCTNavItem* _navItem;

}

@property (assign,nonatomic,__weak) id<RCTWrapperViewControllerNavigationListener> navigationListener;              //@synthesize navigationListener=_navigationListener - In the implementation block
@property (nonatomic,retain) RCTNavItem * navItem;                                                                  //@synthesize navItem=_navItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UILayoutSupport> currentTopLayoutGuide;                                           //@synthesize currentTopLayoutGuide=_currentTopLayoutGuide - In the implementation block
@property (nonatomic,readonly) id<UILayoutSupport> currentBottomLayoutGuide;                                        //@synthesize currentBottomLayoutGuide=_currentBottomLayoutGuide - In the implementation block
-(RCTNavItem *)navItem;
-(id)initWithNavItem:(id)arg1 ;
-(id<UILayoutSupport>)currentTopLayoutGuide;
-(id<UILayoutSupport>)currentBottomLayoutGuide;
-(void)setNavItem:(RCTNavItem *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(id<RCTWrapperViewControllerNavigationListener>)navigationListener;
-(void)setNavigationListener:(id<RCTWrapperViewControllerNavigationListener>)arg1 ;
@end


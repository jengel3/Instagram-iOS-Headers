
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class UITabBarController, NSMutableArray, UIColor, NSString;

@interface RCTTabBar : UIView <UITabBarControllerDelegate> {

	char _tabsChanged;
	UITabBarController* _tabController;
	NSMutableArray* _tabViews;
	UIColor* _unselectedTintColor;

}

@property (nonatomic,retain) UIColor * unselectedTintColor;              //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (assign,nonatomic) char translucent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)reactViewController;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(void)reactBridgeDidFinishTransaction;
-(int)itemPositoning;
-(UIColor *)unselectedTintColor;
-(void)setUnselectedTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(char)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)setItemPositioning:(int)arg1 ;
-(char)translucent;
@end


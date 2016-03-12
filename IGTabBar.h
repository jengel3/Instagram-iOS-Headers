
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UITabBar;

@interface IGTabBar : UIView {

	NSMutableArray* _tabButtons;
	UITabBar* _tabBarForBlurEffect;

}

@property (nonatomic,retain) NSMutableArray * tabButtons;                 //@synthesize tabButtons=_tabButtons - In the implementation block
@property (nonatomic,retain) UITabBar * tabBarForBlurEffect;              //@synthesize tabBarForBlurEffect=_tabBarForBlurEffect - In the implementation block
-(NSMutableArray *)tabButtons;
-(void)updateFramesForButtons:(id)arg1 ;
-(void)addTabButton:(id)arg1 ;
-(void)setTabButtons:(NSMutableArray *)arg1 ;
-(UITabBar *)tabBarForBlurEffect;
-(void)setTabBarForBlurEffect:(UITabBar *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end


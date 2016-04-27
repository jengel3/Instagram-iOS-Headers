
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIVisualEffectView, UITabBar;

@interface IGTabBar : UIView {

	NSMutableArray* _tabButtons;
	UIVisualEffectView* _blurView;
	UIVisualEffectView* _vibrancyView;
	UITabBar* _tabBarForBlurEffect;

}

@property (nonatomic,readonly) NSMutableArray * tabButtons;                    //@synthesize tabButtons=_tabButtons - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * blurView;                  //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * vibrancyView;              //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,readonly) UITabBar * tabBarForBlurEffect;                 //@synthesize tabBarForBlurEffect=_tabBarForBlurEffect - In the implementation block
-(NSMutableArray *)tabButtons;
-(UITabBar *)tabBarForBlurEffect;
-(void)addTabButton:(id)arg1 ;
-(UIVisualEffectView *)vibrancyView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIVisualEffectView *)blurView;
@end


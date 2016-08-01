
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UITabBar;

@interface IGTabBar : UIView {

	NSMutableArray* _tabButtons;
	UITabBar* _backdropTabBar;

}

@property (nonatomic,readonly) NSMutableArray * tabButtons;              //@synthesize tabButtons=_tabButtons - In the implementation block
@property (nonatomic,readonly) UITabBar * backdropTabBar;                //@synthesize backdropTabBar=_backdropTabBar - In the implementation block
-(NSMutableArray *)tabButtons;
-(UITabBar *)backdropTabBar;
-(void)addTabButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


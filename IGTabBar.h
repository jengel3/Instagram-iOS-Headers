
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IGTabBar : UIView {

	NSMutableArray* _tabButtons;

}

@property (nonatomic,retain) NSMutableArray * tabButtons;              //@synthesize tabButtons=_tabButtons - In the implementation block
-(NSMutableArray *)tabButtons;
-(void)calculateFramesForButtons:(id)arg1 ;
-(void)addTabButton:(id)arg1 ;
-(void)setTabButtons:(NSMutableArray *)arg1 ;
-(void)layoutSubviews;
@end


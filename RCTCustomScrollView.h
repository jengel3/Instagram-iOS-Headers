
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSIndexSet, RCTRefreshControl, NSString;

@interface RCTCustomScrollView : UIScrollView <UIGestureRecognizerDelegate> {

	UIView* _dockedHeaderView;
	char _centerContent;
	NSIndexSet* _stickyHeaderIndices;
	RCTRefreshControl* _rctRefreshControl;

}

@property (nonatomic,copy) NSIndexSet * stickyHeaderIndices;                     //@synthesize stickyHeaderIndices=_stickyHeaderIndices - In the implementation block
@property (assign,nonatomic) char centerContent;                                 //@synthesize centerContent=_centerContent - In the implementation block
@property (nonatomic,retain) RCTRefreshControl * rctRefreshControl;              //@synthesize rctRefreshControl=_rctRefreshControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCustomPan:(id)arg1 ;
-(char)_shouldDisableScrollInteraction;
-(void)dockClosestSectionHeader;
-(void)setRctRefreshControl:(RCTRefreshControl *)arg1 ;
-(NSIndexSet *)stickyHeaderIndices;
-(void)setStickyHeaderIndices:(NSIndexSet *)arg1 ;
-(char)centerContent;
-(void)setCenterContent:(char)arg1 ;
-(RCTRefreshControl *)rctRefreshControl;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(id)contentView;
-(void)setContentOffset:(CGPoint)arg1 ;
-(char)touchesShouldCancelInContentView:(id)arg1 ;
@end


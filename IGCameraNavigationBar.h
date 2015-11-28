
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCameraBar.h>

@class CALayer, NSMutableArray;

@interface IGCameraNavigationBar : IGCameraBar {

	char _shouldIgnoreHitsInView;
	CALayer* _bottomBorder;
	NSMutableArray* _navigationItems;

}

@property (nonatomic,retain) CALayer * bottomBorder;                        //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (assign) char shouldIgnoreHitsInView;                             //@synthesize shouldIgnoreHitsInView=_shouldIgnoreHitsInView - In the implementation block
@property (nonatomic,retain) NSMutableArray * navigationItems;              //@synthesize navigationItems=_navigationItems - In the implementation block
+(int)toolbarButtonPadding;
-(id)viewForNavigationItem:(id)arg1 ;
-(char)shouldIgnoreHitsInView;
-(void)reloadNavigationItem:(id)arg1 animated:(char)arg2 ;
-(void)setShouldIgnoreHitsInView:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSMutableArray *)navigationItems;
-(void)popNavigationItemAnimated:(char)arg1 ;
-(void)pushNavigationItem:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationItems:(NSMutableArray *)arg1 ;
-(CALayer *)bottomBorder;
-(void)setBottomBorder:(CALayer *)arg1 ;
@end


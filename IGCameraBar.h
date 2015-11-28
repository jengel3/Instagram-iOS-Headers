
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray;

@interface IGCameraBar : UIView {

	UIImageView* _backgroundImageView;
	NSMutableArray* _barViews;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * barViews;                    //@synthesize barViews=_barViews - In the implementation block
-(void)setIsTranslucent:(char)arg1 ;
-(void)pushView:(id)arg1 animated:(char)arg2 ;
-(void)popViewAnimated:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)backgroundImageView;
-(NSMutableArray *)barViews;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end


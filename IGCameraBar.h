
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray, UIView;

@interface IGCameraBar : UIView {

	UIImageView* _backgroundImageView;
	NSMutableArray* _barViews;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * barViews;                    //@synthesize barViews=_barViews - In the implementation block
@property (nonatomic,readonly) UIView * currentView; 
-(void)setIsTranslucent:(char)arg1 ;
-(void)pushView:(id)arg1 animated:(char)arg2 ;
-(void)popViewAnimated:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)backgroundImageView;
-(NSMutableArray *)barViews;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(UIView *)currentView;
@end


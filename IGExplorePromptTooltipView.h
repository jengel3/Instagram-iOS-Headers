
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGExplorePromptTooltipView : UIView {

	UIView* _contentView;
	UIView* _tooltipSeperatorView;
	float _cornerRadiusSize;

}

@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * tooltipSeperatorView;              //@synthesize tooltipSeperatorView=_tooltipSeperatorView - In the implementation block
@property (assign,nonatomic) float cornerRadiusSize;                     //@synthesize cornerRadiusSize=_cornerRadiusSize - In the implementation block
-(void)configureContentView:(id)arg1 tooltipCenterX:(float)arg2 cornerRadiusSize:(float)arg3 ;
-(UIView *)tooltipSeperatorView;
-(float)cornerRadiusSize;
-(void)setTooltipSeperatorView:(UIView *)arg1 ;
-(void)setCornerRadiusSize:(float)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end


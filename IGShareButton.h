
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface IGShareButton : UIButton {

	char _isDirectShare;
	UIImageView* _arrowView;

}

@property (nonatomic,retain) UIImageView * arrowView;              //@synthesize arrowView=_arrowView - In the implementation block
@property (assign,nonatomic) char isDirectShare;                   //@synthesize isDirectShare=_isDirectShare - In the implementation block
-(UIImageView *)arrowView;
-(char)isDirectShare;
-(void)setArrowView:(UIImageView *)arg1 ;
-(void)setIsDirectShare:(char)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)updateBackgroundColor;
@end


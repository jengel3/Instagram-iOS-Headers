
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGVideoGlyphView : UIView {

	UIImageView* _innerDot;

}

@property (nonatomic,retain) UIImageView * innerDot;              //@synthesize innerDot=_innerDot - In the implementation block
-(UIImageView *)innerDot;
-(void)animateLayer:(id)arg1 ;
-(void)setInnerDot:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(char)arg1 ;
@end


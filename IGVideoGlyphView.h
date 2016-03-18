
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGVideoGlyphView : UIView {

	UIImageView* _innerIcon;
	UIImageView* _containerIcon;

}

@property (nonatomic,readonly) UIImageView * innerIcon;                  //@synthesize innerIcon=_innerIcon - In the implementation block
@property (nonatomic,readonly) UIImageView * containerIcon;              //@synthesize containerIcon=_containerIcon - In the implementation block
-(id)initWithFrame:(CGRect)arg1 innerIconImage:(id)arg2 containerIconImage:(id)arg3 ;
-(UIImageView *)innerIcon;
-(void)animateLayer:(id)arg1 ;
-(UIImageView *)containerIcon;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(char)arg1 ;
@end



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UILabel.h>

@class IGStringStyle;

@interface IGLabel : UILabel {

	id _target;
	SEL _action;
	IGStringStyle* _style;

}

@property (nonatomic,retain) IGStringStyle * style;              //@synthesize style=_style - In the implementation block
-(void)highlight:(char)arg1 ;
-(char)ig_enabled;
-(char)isInside:(CGPoint)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithStyle:(id)arg1 ;
-(IGStringStyle *)style;
-(void)setStyle:(IGStringStyle *)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)defaultColor;
@end


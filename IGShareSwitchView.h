
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, IGSwitch, UIView;

@interface IGShareSwitchView : UIView {

	UILabel* _textLabel;
	IGSwitch* _switch;
	UIView* _bottomLine;
	float _offsetY;

}
+(float)height;
-(id)initWithFrame:(CGRect)arg1 shareMode:(int)arg2 switchBlock:(/*^block*/id)arg3 ;
-(void)setSwitchIsOn:(char)arg1 animated:(char)arg2 ;
-(void)updateShareMode:(int)arg1 ;
-(void)layoutSubviews;
-(void)setOffsetY:(float)arg1 ;
@end


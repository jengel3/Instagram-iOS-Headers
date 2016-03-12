
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface IGTrackBarView : UIView {

	float _trackValue;
	UIColor* _trackTintColor;
	UIColor* _trackValueTintColor;
	UIView* _trackView;
	UIView* _trackValueView;

}

@property (assign,nonatomic) float trackValue;                           //@synthesize trackValue=_trackValue - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                   //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackValueTintColor;              //@synthesize trackValueTintColor=_trackValueTintColor - In the implementation block
@property (nonatomic,readonly) UIView * trackView;                       //@synthesize trackView=_trackView - In the implementation block
@property (nonatomic,readonly) UIView * trackValueView;                  //@synthesize trackValueView=_trackValueView - In the implementation block
-(void)setTrackValueTintColor:(UIColor *)arg1 ;
-(UIColor *)trackValueTintColor;
-(void)setTrackValue:(float)arg1 ;
-(UIView *)trackView;
-(UIView *)trackValueView;
-(float)trackValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)trackTintColor;
-(void)setTrackTintColor:(UIColor *)arg1 ;
@end


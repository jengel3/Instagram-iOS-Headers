
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView, UIButton, UIColor;

@interface IGTimelineHeader : UICollectionReusableView {

	UIView* _bottomBorderLine;
	UIButton* _accessibilityButton;

}

@property (nonatomic,retain) UIButton * accessibilityButton;                  //@synthesize accessibilityButton=_accessibilityButton - In the implementation block
@property (nonatomic,retain) UIView * bottomBorderLine;                       //@synthesize bottomBorderLine=_bottomBorderLine - In the implementation block
@property (nonatomic,readonly) UIColor * contentBackgroundColor; 
+(int)height;
-(void)voiceOverStatusChangedNotification:(id)arg1 ;
-(UIView *)bottomBorderLine;
-(UIButton *)accessibilityButton;
-(void)setBottomBorderLine:(UIView *)arg1 ;
-(void)setAccessibilityButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)contentBackgroundColor;
@end


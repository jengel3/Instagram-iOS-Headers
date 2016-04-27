
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIView, UIColor;

@interface IGTimelineHeader : UICollectionReusableView {

	UIButton* _accessibilityButton;
	UIView* _bottomBorderLine;

}

@property (nonatomic,readonly) UIColor * contentBackgroundColor; 
@property (nonatomic,retain) UIButton * accessibilityButton;                  //@synthesize accessibilityButton=_accessibilityButton - In the implementation block
@property (nonatomic,retain) UIView * bottomBorderLine;                       //@synthesize bottomBorderLine=_bottomBorderLine - In the implementation block
+(char)usePureWhite;
+(int)height;
-(void)voiceOverStatusChangedNotification:(id)arg1 ;
-(void)setBottomBorderLine:(UIView *)arg1 ;
-(UIButton *)accessibilityButton;
-(void)setAccessibilityButton:(UIButton *)arg1 ;
-(UIView *)bottomBorderLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)contentBackgroundColor;
@end


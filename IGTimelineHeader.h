
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIView, UIColor;

@interface IGTimelineHeader : UICollectionReusableView {

	char _opaqueBackground;
	UIButton* _accessibilityButton;
	UIView* _bottomBorderLine;

}

@property (assign,nonatomic) char opaqueBackground;                           //@synthesize opaqueBackground=_opaqueBackground - In the implementation block
@property (nonatomic,readonly) UIColor * contentBackgroundColor; 
@property (nonatomic,retain) UIButton * accessibilityButton;                  //@synthesize accessibilityButton=_accessibilityButton - In the implementation block
@property (nonatomic,retain) UIView * bottomBorderLine;                       //@synthesize bottomBorderLine=_bottomBorderLine - In the implementation block
+(float)paddingShortened;
+(int)height;
-(void)voiceOverStatusChangedNotification:(id)arg1 ;
-(UIButton *)accessibilityButton;
-(void)setOpaqueBackground:(char)arg1 ;
-(void)setBottomBorderLine:(UIView *)arg1 ;
-(char)opaqueBackground;
-(void)setAccessibilityButton:(UIButton *)arg1 ;
-(UIView *)bottomBorderLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)contentBackgroundColor;
@end


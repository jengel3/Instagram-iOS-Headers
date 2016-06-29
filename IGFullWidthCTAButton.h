
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>
#import <Instagram/IGFullWidthCTAButtonType.h>

@class NSString, UIView;

@interface IGFullWidthCTAButton : UIButton <IGFullWidthCTAButtonType> {

	NSString* _primaryText;
	NSString* _secondaryText;
	int _buttonState;
	UIView* _topHairline;
	UIView* _bottomHairline;

}

@property (nonatomic,readonly) UIView * topHairline;                 //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,readonly) UIView * bottomHairline;              //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * primaryText;                   //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                 //@synthesize secondaryText=_secondaryText - In the implementation block
@property (assign,nonatomic) int buttonState;                        //@synthesize buttonState=_buttonState - In the implementation block
-(void)setButtonState:(int)arg1 ;
-(void)configureVisualsForDefaultState;
-(void)configureTextVisualsForDefaultState;
-(int)buttonState;
-(void)animateToButtonState:(int)arg1 ;
-(void)configureTextVisualsForFilledInState;
-(void)configureVisualsForFilledInState;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)topHairline;
-(UIView *)bottomHairline;
-(NSString *)secondaryText;
@end


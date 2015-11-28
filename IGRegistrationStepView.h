
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGTextField, UIButton, UIView, NSString;

@interface IGRegistrationStepView : UIView {

	IGTextField* _textField;
	UIButton* _nextButton;
	UIView* _separatorLine;
	NSString* _placeholderText;

}

@property (nonatomic,retain) IGTextField * textField;                 //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                   //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                  //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) NSString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 placeholderText:(id)arg2 ;
-(void)addNextButton;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(IGTextField *)textField;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)setTextField:(IGTextField *)arg1 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end


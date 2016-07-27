
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UILabel, UIButton;

@interface IGMostRecentRestrictedView : UIView {

	CALayer* _separatorLayer;
	UILabel* _messageLabel;
	UIButton* _learnButton;

}

@property (nonatomic,readonly) CALayer * separatorLayer;              //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * learnButton;                //@synthesize learnButton=_learnButton - In the implementation block
-(UIButton *)learnButton;
-(id)initWithFeedName:(id)arg1 ;
-(void)addLearnMoreTarget:(id)arg1 action:(SEL)arg2 ;
-(CALayer *)separatorLayer;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)messageLabel;
@end

